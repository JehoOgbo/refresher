# 0x04-more_functions_nested_loops

Use functions and nested loops in C for increasingly complex tasks.

## 100-prime_factor.c

Finds and prints the largest prime factor of the number 612852475143 followed by a new line.

## 101-print_number.c

Prints an integer with the following constraints:

    - Prototype: void print_number(int n);
    - You can only use _putchar function to print
    - You are not allowed to use long
    - You are not allowed to use arrays or pointers
    - You are not allowed to hard-code special values

Below is an example of the expected output:

    julien@ubuntu:~/0x04$ cat 101-main.c
    #include "main.h"

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        print_number(98);
        _putchar('\n');
        print_number(402);
        _putchar('\n');
        print_number(1024);
        _putchar('\n');
        print_number(0);
        _putchar('\n');
        print_number(-98);
        _putchar('\n');
        return (0);
    }
    julien@ubuntu:~/0x04$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 101-main.c 101-print_number.c -o 101-print_numbers
    julien@ubuntu:~/0x04$ ./101-print_numbers
    98
    402
    1024
    0
    -98
    julien@ubuntu:~/0x04$
