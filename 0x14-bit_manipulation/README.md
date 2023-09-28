## README: Bit Manipulation Tasks

### Task 0: `binary_to_uint`

- **Description:** This function converts a binary number represented as a string to an unsigned integer.
- **Prototype:** `unsigned int binary_to_uint(const char *b);`
- **Returns:** The converted number, or 0 if there are characters in the string `b` that are not '0' or '1', or if `b` is NULL.

### Task 1: `print_binary`

- **Description:** This function prints the binary representation of a given number.
- **Prototype:** `void print_binary(unsigned long int n);`
- **Format:** The output format matches the provided examples.
- **Constraints:** 
  - No arrays should be used.
  - No malloc is allowed.
  - The % or / operators should not be used.

### Task 2: `get_bit`

- **Description:** This function returns the value of a bit at a given index.
- **Prototype:** `int get_bit(unsigned long int n, unsigned int index);`
- **Returns:** The value of the bit at index `index`, or -1 if an error occurred.

### Task 3: `set_bit`

- **Description:** This function sets the value of a bit to 1 at a given index.
- **Prototype:** `int set_bit(unsigned long int *n, unsigned int index);`
- **Returns:** 1 if it worked, or -1 if an error occurred.

### Task 4: `clear_bit`

- **Description:** This function sets the value of a bit to 0 at a given index.
- **Prototype:** `int clear_bit(unsigned long int *n, unsigned int index);`
- **Returns:** 1 if it worked, or -1 if an error occurred.

### Task 5: `flip_bits`

- **Description:** This function returns the number of bits you would need to flip to get from one number to another.
- **Prototype:** `unsigned int flip_bits(unsigned long int n, unsigned long int m);`
- **Constraints:** 
  - The % or / operators should not be used.

---

### Usage Examples:

```c
// Task 0
unsigned int n = binary_to_uint("10101"); // Returns 21

// Task 1
print_binary(98); // Output: 1100010

// Task 2
int bit_value = get_bit(1024, 10); // Returns 1

// Task 3
unsigned long int n = 1024;
int result = set_bit(&n, 5); // Sets bit 5 to 1, returns 1

// Task 4
unsigned long int n = 1024;
int result = clear_bit(&n, 10); // Sets bit 10 to 0, returns 1

// Task 5
unsigned int flipped_bits = flip_bits(1024, 1); // Returns 2
```

### Compilation and Testing:

```bash
gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-binary_to_uint.c -o a
./a

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_binary.c _putchar.c -o b
./b

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-get_bit.c -o c
./c

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-set_bit.c -o d
./d

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-clear_bit.c -o e
./e

gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-flip_bits.c -o f
./f
```

---

**Repository Information:**
- **GitHub Repository:** [alx-low_level_programming](https://github.com/{username}/alx-low_level_programming)
- **Directory:** 0x14-bit_manipulation
- **Files:** 
  - `0-binary_to_uint.c`
  - `1-print_binary.c`
  - `2-get_bit.c`
  - `3-set_bit.c`
  - `4-clear_bit.c`
  - `5-flip_bits.c`

---

*Note: Replace `{username}` in the repository URL with the actual username.*
