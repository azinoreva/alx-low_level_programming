# Hash Tables Project Readme

## Overview

This project focuses on implementing a basic hash table in the C programming language. The hash table is a fundamental data structure that allows efficient storage and retrieval of key-value pairs. The project covers various aspects, including hash function implementation, key indexing, adding elements to the hash table, retrieving values, printing the hash table, and deleting the hash table.

## Project Structure

The project directory is organized as follows:

- **0x1A-hash_tables/**
  - **0-hash_table_create.c**: Creates a hash table.
  - **1-djb2.c**: Implements the djb2 hash function.
  - **2-key_index.c**: Returns the index of a key using the djb2 hash function.
  - **3-hash_table_set.c**: Adds an element to the hash table.
  - **4-hash_table_get.c**: Retrieves a value associated with a key.
  - **5-hash_table_print.c**: Prints the contents of the hash table.
  - **6-hash_table_delete.c**: Deletes the entire hash table.
  - **main/ (contains test cases for each task)**
    - **0-main.c**: Tests `0-hash_table_create.c`.
    - **1-main.c**: Tests `1-djb2.c`.
    - **2-main.c**: Tests `2-key_index.c`.
    - **3-main.c**: Tests `3-hash_table_set.c`.
    - **4-main.c**: Tests `4-hash_table_get.c`.
    - **5-main.c**: Tests `5-hash_table_print.c`.
    - **6-main.c**: Tests `6-hash_table_delete.c`.

## Task Details

1. **hash_table_create**
   - Creates a hash table with a specified size.
   - Returns a pointer to the newly created hash table.
   - Handles potential errors gracefully.

2. **hash_djb2**
   - Implements the djb2 hash function.
   - Takes a string as input and produces an unsigned long integer as output.

3. **key_index**
   - Computes the index of a key in the hash table using the djb2 hash function.
   - Requires the size of the hash table as an input.

4. **hash_table_set**
   - Adds or updates a key-value pair in the hash table.
   - Handles collisions by adding the new node at the beginning of the linked list.

5. **hash_table_get**
   - Retrieves the value associated with a given key from the hash table.
   - Returns NULL if the key is not found.

6. **hash_table_print**
   - Prints the contents of the hash table in the order they appear in the array.
   - Uses a dictionary-like format: `{'key': 'value', ...}`.

7. **hash_table_delete**
   - Deletes the entire hash table, freeing allocated memory.

