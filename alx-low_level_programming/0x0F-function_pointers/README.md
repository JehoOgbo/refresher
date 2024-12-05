# 0x0F-function_pointers

This directory explores the concept of pointers to a function in C and how to use them.

## 0-print_name.c

Function that prints a name using function pointers
- Prototype: void print_name(char *name, void (*f)(char *));

Usage:
    julien@ubuntu:~/0x0e. Function pointers$ cat 0-main.c
    #include <stdio.h>
    #include "function_pointers.h"

    /**
     * print_name_as_is - prints a name as is
     * @name: name of the person
     *
     * Return: Nothing.
     */
    void print_name_as_is(char *name)
    {
        printf("Hello, my name is %s\n", name);
    }

    /**
     * print_name_uppercase - print a name in uppercase
     * @name: name of the person
     *
     * Return: Nothing.
     */
    void print_name_uppercase(char *name)
    {
        unsigned int i;

        printf("Hello, my uppercase name is ");
        i = 0;
        while (name[i])
        {
            if (name[i] >= 'a' && name[i] <= 'z')
            {
                putchar(name[i] + 'A' - 'a');
            }
            else
            {
                putchar(name[i]);
            }
            i++;
        }
    }

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        print_name("Bob", print_name_as_is);
        print_name("Bob Dylan", print_name_uppercase);
        printf("\n");
        return (0);
    }
    julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-print_name.c -o a
    julien@ubuntu:~/0x0e. Function pointers$ ./a
    Hello, my name is Bob
    Hello, my uppercase name is BOB DYLAN
    julien@ubuntu:~/0x0e. Function pointers$

## 1-array_iterator.c

Function that executes a function given as a parameter on each element of an array.

    Prototype: void array_iterator(int *array, size_t size, void (*action)(int));
    where size is the size of the array
    and action is a pointer to the function you need to use

Sample Usage:

    julien@ubuntu:~/0x0e. Function pointers$ cat 1-main.c
    #include <stdio.h>
    #include "function_pointers.h"

    /**
     * print_elem - prints an integer
     * @elem: the integer to print
     *
     * Return: Nothing.
     */
    void print_elem(int elem)
    {
        printf("%d\n", elem);
    }

    /**
     * print_elem_hex - prints an integer, in hexadecimal
     * @elem: the integer to print
     *
     * Return: Nothing.
     */
    void print_elem_hex(int elem)
    {
        printf("0x%x\n", elem);
    }

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int array[5] = {0, 98, 402, 1024, 4096};

        array_iterator(array, 5, &print_elem);
        array_iterator(array, 5, &print_elem_hex);
        return (0);
    }
    julien@ubuntu:~/0x0e. Function pointers$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-array_iterator.c -o b
    julien@ubuntu:~/0x0e. Function pointers$ ./b 
    0
    98
    402
    1024
    4096
    0x0
    0x62
    0x192
    0x400
    0x1000
    julien@ubuntu:~//0x0e. Function pointers$ 
