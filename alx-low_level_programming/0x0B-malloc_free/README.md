# 0x0B-malloc_free


This directory is an entry level exploration into the concepts of dynamic memory allocation in C.

## 0-create_array.c

Function that creates an array of chars and initializes it with a specific character.

- Prototype: char *create_array(unsigned int size, char c);
- Returns NULL if size = 0
- Returns a pointer to the array, or NULL if it fails

Sample Output:

    julien@ubuntu:~/0x0a. malloc, free$ cat 0-main.c
    #include "main.h"
    #include <stdio.h>
    #include <stdlib.h>

    /**
     * simple_print_buffer - prints buffer in hexa
     * @buffer: the address of memory to print
     * @size: the size of the memory to print
     *
     * Return: Nothing.
     */
    void simple_print_buffer(char *buffer, unsigned int size)
    {
        unsigned int i;

        i = 0;
        while (i < size)
        {
            if (i % 10)
            {
                printf(" ");
            }
            if (!(i % 10) && i)
            {
                printf("\n");
            }
            printf("0x%02x", buffer[i]);
            i++;
        }
        printf("\n");
    }

    /**
     * main - check the code for ALX School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *buffer;

        buffer = create_array(98, 'H');
        if  (buffer == NULL)
        {
            printf("failed to allocate memory\n");
            return (1);
        }
        simple_print_buffer(buffer, 98);
        free(buffer);
        return (0);
    }
    julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a
    julien@ubuntu:~/0x0a. malloc, free$ ./a
    0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
    0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
    0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
    0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
    0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
    0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
    0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
    0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
    0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
    0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48
    julien@ubuntu:~/0x0a. malloc, free$

## 1-strdup.c

Function that returns a pointer to a newly allocated space in memory, which contains a copy of the given string as parameter

- Prototype: char *_strdup(char *str);
- The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
- Returns NULL if str = NULL
- On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

Sample Usage:

    julien@ubuntu:~/0x0a. malloc, free$ cat 1-main.c
    #include "main.h"
    #include <stdio.h>
    #include <stdlib.h>

    /**
     * main - check the code for ALX School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *s;

        s = _strdup("ALX SE");
        if (s == NULL)
        {
            printf("failed to allocate memory\n");
            return (1);
        }
        printf("%s\n", s);
        free(s);
        return (0);
    }
    julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strdup.c -o s
    julien@ubuntu:~/0x0a. malloc, free$ ./s
    ALX SE
    julien@ubuntu:~/0x0a. malloc, free$

## 2-str_concat.c

Function that concatenates two strings.

- Prototype: char *str_concat(char *s1, char *s2);
- The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
- if NULL is passed, treat it as an empty string.
- The function should return NULL on failure

    Sample usage:
    julien@ubuntu:~/0x0a. malloc, free$ cat 2-main.c
    #include "main.h"
    #include <stdio.h>
    #include <stdlib.h>

    /**
     * main - check the code for ALX School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *s;

        s = str_concat("Betty ", "Holberton");
        if (s == NULL)
        {
            printf("failed\n");
            return (1);
        }
        printf("%s\n", s);
        free(s);
        return (0);
    }
    julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-str_concat.c -o c
    julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x0a. malloc, free$ ./c | cat -e
    Betty Holberton$
    julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x0a. malloc, free$

## 3-alloc_grid.c

returns a pointer to a two dimensional array of integers

- Prototype: int **alloc_grid(int width, int height);
- Each element of the grid should be initialized to 0
- The function should return NULL on failure
- If width or height is 0 or negative, return NULL

Sample usage:
    julien@ubuntu:~/0x0a. malloc, free$ cat 3-main.c
    #include "main.h"
    #include <stdio.h>
    #include <stdlib.h>

    /**
     * print_grid - prints a grid of integers
     * @grid: the address of the two dimensional grid
     * @width: width of the grid
     * @height: height of the grid
     *
     * Return: Nothing.
     */
    void print_grid(int **grid, int width, int height)
    {
        int w;
        int h;

        h = 0;
        while (h < height)
        {
            w = 0;
            while (w < width)
            {
                printf("%d ", grid[h][w]);
                w++;
            }
            printf("\n");
            h++;
        }
    }

    /**
     * main - check the code for ALX School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int **grid;

        grid = alloc_grid(6, 4);
        if (grid == NULL)
        {
            return (1);
        }
        print_grid(grid, 6, 4);
        printf("\n");
        grid[0][3] = 98;
        grid[3][4] = 402;
        print_grid(grid, 6, 4);
        return (0);
    }
    julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-alloc_grid.c -o g
    julien@ubuntu:~/0x0a. malloc, free$ ./g
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0

    0 0 0 98 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 402 0
    julien@ubuntu:~/0x0a. malloc, free$

## 4-free_grid.c
Frees the two dimensional array created by the alloc_grid function

- Prototype: void free_grid(int **grid, int height);
- Note that we will compile with your alloc_grid.c file. Make sure it compiles.

Sample Usage:

    julien@ubuntu:~/0x0a. malloc, free$ cat 4-main.c
    #include "main.h"
    #include <stdio.h>
    #include <stdlib.h>

    /**
     * print_grid - prints a grid of integers
     * @grid: the address of the two dimensional grid
     * @width: width of the grid
     * @height: height of the grid
     *
     * Return: Nothing.
     */
    void print_grid(int **grid, int width, int height)
    {
        int w;
        int h;

        h = 0;
        while (h < height)
        {
            w = 0;
            while (w < width)
            {
                printf("%d ", grid[h][w]);
                w++;
            }
            printf("\n");
            h++;
        }
    }

    /**
     * main - check the code for ALX School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int **grid;

        grid = alloc_grid(6, 4);
        if (grid == NULL)
        {
            return (1);
        }
        print_grid(grid, 6, 4);
        printf("\n");
        grid[0][3] = 98;
        grid[3][4] = 402;
        print_grid(grid, 6, 4);
        free_grid(grid, 4);
        return (0);
    }
    julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 3-alloc_grid.c 4-free_grid.c -o f
    julien@ubuntu:~/0x0a. malloc, free$ valgrind ./f
    ==5013== Memcheck, a memory error detector
    ==5013== Copyright (C) 2002-2015, and GNU GPL'd, by Julian Seward et al.
    ==5013== Using Valgrind-3.11.0 and LibVEX; rerun with -h for copyright info
    ==5013== Command: ./f
    ==5013==
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0

    0 0 0 98 0 0
    0 0 0 0 0 0
    0 0 0 0 0 0
    0 0 0 0 402 0
    ==5013==
    ==5013== HEAP SUMMARY:
    ==5013==     in use at exit: 0 bytes in 0 blocks
    ==5013==   total heap usage: 6 allocs, 6 frees, 1,248 bytes allocated
    ==5013==
    ==5013== All heap blocks were freed -- no leaks are possible
    ==5013==
    ==5013== For counts of detected and suppressed errors, rerun with: -v
    ==5013== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)
    julien@ubuntu:~/0x0a. malloc, free$

## 100-argstostr.c
Function that concatenates all the arguments to your program

- Prototype: char *argstostr(int ac, char **av);
- Returns NULL if ac == 0 or av == NULL
- Returns a pointer to a new string, or NULL if it fails
- Each argument should be followed by a \n in the new string

Sample Usage:

    julien@ubuntu:~/0x0a. malloc, free$ cat 100-main.c
    #include "main.h"
    #include <stdio.h>
    #include <stdlib.h>

    /**
     * main - check the code for ALX School students.
     *
     * Return: Always 0.
     */
    int main(int ac, char *av[])
    {
        char *s;

        s = argstostr(ac, av);
        if (s == NULL)
        {
            return (1);
        }
        printf("%s", s);
        free(s);
        return (0);
    }
    julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-argstostr.c -o args
    julien@ubuntu:~/0x0a. malloc, free$ ./args I will "show you" how great I am
    ./args
    I
    will
    show you
    how
    great
    I
    am
    julien@ubuntu:~/0x0a. malloc, free$

## 101-strtow.c

function that splits a string into words.

- Prototype: char **strtow(char *str);
- The function returns a pointer to an array of strings (words)
- Each element of this array should contain a single word, null-terminated
- The last element of the returned array should be NULL
- Words are separated by spaces
- Returns NULL if str == NULL or str == ""
- If your function fails, it should return NULL

Sample usage:

    julien@ubuntu:~/0x0a. malloc, free$ cat 101-main.c
    #include "main.h"
    #include <stdio.h>
    #include <stdlib.h>

    /**
     * print_tab - Prints an array of string
     * @tab: The array to print
     *
     * Return: nothing
     */
    void print_tab(char **tab)
    {
        int i;

        for (i = 0; tab[i] != NULL; ++i)
        {
            printf("%s\n", tab[i]);
        }
    }

    /**
     * main - check the code for ALX School students.
     *
     * Return: 1 if an error occurred, 0 otherwise
     */
    int main(void)
    {
        char **tab;

        tab = strtow("      ALX School         #cisfun      ");
        if (tab == NULL)
        {
            printf("Failed\n");
            return (1);
        }
        print_tab(tab);
        return (0);
    }
    julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 101-main.c 101-strtow.c -o strtow
    julien@ubuntu:~/0x0a. malloc, free$ ./strtow | cat -e
    ALX$
    School$
#cisfun$
    julien@ubuntu:~/0x0a. malloc, free$
