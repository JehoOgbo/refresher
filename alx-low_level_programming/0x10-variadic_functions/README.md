# 0x10-variadic_functions

This directory explores the concept of variadic functionns in C and how to use them. These are functions that take a variable number of arguments.

## variadic_functions.h

Header file containing all function prototypes. Include guarded.

## 0-sum_them_all.c

Function that returns a sum of all it's parameters.

- Prototype: int sum_them_all(const unsigned int n, ...);
- If n == 0, return 0

Sample Usage:

    julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
    #include <stdio.h>
    #include "variadic_functions.h"

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int sum;

        sum = sum_them_all(2, 98, 1024);
        printf("%d\n", sum);
        sum = sum_them_all(4, 98, 1024, 402, -1024);
        printf("%d\n", sum);    
        return (0);
    }
    julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
    julien@ubuntu:~/0x0f. variadic functions$ ./a 
    1122
    500
    julien@ubuntu:~/0x0f. variadic functions$ 
