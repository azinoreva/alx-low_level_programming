#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>

void display_error(const char* msg) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(98);
}

void read_header(int fd, Elf32_Ehdr *header) {
    if (read(fd, header, sizeof(Elf32_Ehdr)) != sizeof(Elf32_Ehdr)) {
        display_error("Unable to read ELF header");
    }
}

void print_info(Elf32_Ehdr *header) {
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");

    printf("  Class:                             %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("  Data:                              %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("  Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (header->e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX: printf("HP-UX\n"); break;
        case ELFOSABI_NETBSD: printf("NetBSD\n"); break;
        case ELFOSABI_LINUX: printf("Linux\n"); break;
        case ELFOSABI_SOLARIS: printf("Sun Solaris\n"); break;
        case ELFOSABI_AIX: printf("AIX\n"); break;
        case ELFOSABI_IRIX: printf("IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("FreeBSD\n"); break;
        case ELFOSABI_TRU64: printf("Compaq TRU64 UNIX\n"); break;
        case ELFOSABI_MODESTO: printf("Novell Modesto\n"); break;
        case ELFOSABI_OPENBSD: printf("OpenBSD\n"); break;
        case ELFOSABI_ARM: printf("ARM\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone (embedded) application\n"); break;
        default: printf("<unknown: %x>\n", header->e_ident[EI_OSABI]); break;
    }

    printf("  ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
    printf("  Type:                              ");
    switch (header->e_type) {
        case ET_NONE: printf("No file type\n"); break;
        case ET_REL: printf("Relocatable file\n"); break;
        case ET_EXEC: printf("Executable file\n"); break;
        case ET_DYN: printf("Shared object file\n"); break;
        case ET_CORE: printf("Core file\n"); break;
        default: printf("<unknown: %x>\n", header->e_type); break;
    }

    printf("  Entry point address:               %#x\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        display_error("Usage: elf_header elf_filename");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        display_error("Unable to open file");
    }

    Elf32_Ehdr header;
    read_header(fd, &header);

    if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0) {
        display_error("Not an ELF file");
    }

    print_info(&header);

    close(fd);

    return 0;
}
