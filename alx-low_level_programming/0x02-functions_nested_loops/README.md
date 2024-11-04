# 0x02-functions_nested_loops

This directory explores the use of nested loops and functions in C.

Note: All files starting with the same number are related and must be compiled together.

All files in this directory are to be made with the following requirements

    Allowed editors: vi, vim, emacs
    All files are compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
    All files should end with a new line
    A README.md file, at the root of the folder of the project is mandatory
    The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
    Do not use global variables
    No more than 5 functions per file
    Do not use the standard library unless otherwise stated. Any use of functions like printf, puts, etc… is forbidden
    You are allowed to use _putchar
    In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
    The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
    Don’t forget to push your header file


## 100-times_table.c
Create a times table for digits from 0 to 15. The file consists of three functions.

The 'main' function in this file is void print_times_table(int n). All function prototypes for functions used across multiple files are used in header.h which is include guarded.
The format for the output is shown below.

    jehoshaphat@fedora:~/0x02$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 100-main.c 100-times_table.c -o 100-times_table
    jehoshaphat@fedora:~/0x02$ ./100-times_table
    0,   0,   0,   0
    0,   1,   2,   3
    0,   2,   4,   6
    0,   3,   6,   9

    0,   0,   0,   0,   0,   0
    0,   1,   2,   3,   4,   5
    0,   2,   4,   6,   8,  10
    0,   3,   6,   9,  12,  15
    0,   4,   8,  12,  16,  20
    0,   5,  10,  15,  20,  25


    0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
    0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
    0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
    0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
    0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
    0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
    0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
    0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
    0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
    0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
    0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
    0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
    0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
    jehoshaphat@fedora:~/0x02$ ./100-times_table | tr ' ' . | cat -e
    0,...0,...0,...0$
    0,...1,...2,...3$
    0,...2,...4,...6$
    0,...3,...6,...9$
    $
    0,...0,...0,...0,...0,...0$
    0,...1,...2,...3,...4,...5$
    0,...2,...4,...6,...8,..10$
    0,...3,...6,...9,..12,..15$
    0,...4,...8,..12,..16,..20$
    0,...5,..10,..15,..20,..25$
    $
    $
    0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
    0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
    0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
    0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
    0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
    0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
    0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
    0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
    0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
    0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
    0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
    0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
    0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$
    jehoshaphat@fedora:~/0x02$

## 101-natural.c

If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. Write a program that computes and prints the sum of all the multiples of 3 or 5 below 1024 (excluded), followed by a new line.

- You are allowed to use the standard library


## 102-fibonacci.c

This is a program that prints the first 50 fibonacci numbers starting with 1 and 2 followed by a new line.
- The numbers must be separated by a comma.
- You are allowed to use the standard library.


## 103-fibonacci.c

This program prints the sum of all even fibonacci numbers below 4,000,000.
- The numbers must be separated by a comma.
- You are allowed to used the standard library

## 104-fibonacci.c

This program finds and prints the first 98 fibonacci numbers followed by a new line.

- The numbers should be separated by comma, followed by a space ,
- You are allowed to use the standard library
- You are not allowed to use any other library (You can’t use GMP etc…)
- You are not allowed to use long long, malloc, pointers, arrays/tables, or structures
- You are not allowed to hard code any Fibonacci number (except for 1 and 2)
This require the use of the data type '__int128_t' and a recursive function to print its values as this data type doesn't gel with printf. Using '%lld' with it gives a -W=format warning which we are trying to avoid.

### This project was fun.
