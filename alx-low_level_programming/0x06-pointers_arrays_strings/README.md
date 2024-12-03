# 0x06-pointers_arrays_strings


This directory looks more deeply at the concepts of pointers arrays and strings

## 0-strcat.c

This file contains a function that concatenates two strings
- Prototype: char *_strcat(char *dest, char *src);
- This function appends the src string to the dest string, overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte
- Returns a pointer to the resulting string dest

Sample output:

    julien@ubuntu:~/0x06$ cat 0-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char s1[98] = "Hello ";
        char s2[] = "World!\n";
        char *ptr;

        printf("%s\n", s1);
        printf("%s", s2);
        ptr = _strcat(s1, s2);
        printf("%s", s1);
        printf("%s", s2);
        printf("%s", ptr);
        return (0);
    }
    julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
    julien@ubuntu:~/0x06$ ./0-strcat
    Hello
    World!
    Hello World!
    World!
    Hello World!
    julien@ubuntu:~/0x06$

## 7-leet.c
This file contains a function which encodes some letters to 1337 using only one if function;
Prototype: char *leet(char *);
- Letters a and A should be replaced by 4
- Letters e and E should be replaced by 3
- Letters o and O should be replaced by 0
- Letters t and T should be replaced by 7
- Letters l and L should be replaced by 1
- Prototype: char *leet(char *);
- You can only use one if in your code
- You can only use two loops in your code
- You are not allowed to use switch
- You are not allowed to use any ternary operation

Sample output:
    julien@ubuntu:~/0x06$ cat 7-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code for
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
        char *p;

        p = leet(s);
        printf("%s", p);
        printf("%s", s);
        return (0);
    }
    julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337
    julien@ubuntu:~/0x06$ ./7-1337
    3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
    3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
    julien@ubuntu:~/0x06$

## 1-strncat.c
Function prototype: char *_strncat(char *dest, char *src, int n);
This function concatenates two strings.
This  function  appends  at most n non-null bytes from the array pointed to by src, followed by a null character, to the end of the string pointed to by dst.  dst must point to a string contained in a buffer that is large enough, that is, the buffer size must be at least strlen(dst) + strnlen(src,  n)  + 1.
- The _strncat function is similar to the _strcat function, except that 
* it will use at most n bytes from src; and
* src does not need to be terminated if it contains n or more bytes
- Return a pointer to the resulting string dest

FYI: The standard library provides a similar function: strncat. Run man strncat to learn more.

    julien@ubuntu:~/0x06$ cat 1-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char s1[98] = "Hello ";
        char s2[] = "World!\n";
        char *ptr;

        printf("%s\n", s1);
        printf("%s", s2);
        ptr = _strncat(s1, s2, 1);
        printf("%s\n", s1);
        printf("%s", s2);
        printf("%s\n", ptr);
        ptr = _strncat(s1, s2, 1024);
        printf("%s", s1);
        printf("%s", s2);
        printf("%s", ptr);
        return (0);
    }
    julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
    julien@ubuntu:~/0x06$ ./1-strncat
    Hello
    World!
    Hello W
    World!
    Hello W
    Hello WWorld!
    World!
    Hello WWorld!
    julien@ubuntu:~/0x06$ 


## 2-strncpy.c
This file contains a function that copies a string
- Prototype: char *_strncpy(char *dest, char *src, int n);
- The function should work exactly like strncpy
This  function  copies  non-null bytes from the string pointed to by src into the array pointed to by dest.  If the source has too few non-null bytes to fill the destination, the functions pad the destination with trailing null bytes.  If the destination buffer, limited by its size, isn't large enough to hold the copy, the resulting character sequence is truncated.

Sample Output:
    julien@ubuntu:~/0x06$ cat 2-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char s1[98];
        char *ptr;
        int i;

        for (i = 0; i < 98 - 1; i++)
        {
            s1[i] = '*';
        }
        s1[i] = '\0';
        printf("%s\n", s1);
        ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
        printf("%s\n", s1);
        printf("%s\n", ptr);
        ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
        printf("%s", s1);
        printf("%s", ptr);
        for (i = 0; i < 98; i++)
        {
            if (i % 10)
            {
                printf(" ");
            }
            if (!(i % 10) && i)
            {
                printf("\n");
            }
            printf("0x%02x", s1[i]);
        }
        printf("\n");
        return (0);
    }
    julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
    julien@ubuntu:~/0x06$ ./2-strncpy
    *************************************************************************************************
    First********************************************************************************************
    First********************************************************************************************
    First, solve the problem. Then, write the code
    First, solve the problem. Then, write the code
    0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
    0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
    0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
    0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
    0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
    julien@ubuntu:~/0x06$

## 3-strcmp.c
This file contains a function that compares two strings

- Prototype: int _strcmp(char *s1, char *s2);
- The function compares the strings based on the additive ascii value of the characters returning the collective value of s1 minus s2.

Sample Output:
    julien@ubuntu:~/0x06$ cat 3-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char s1[] = "Hello";
        char s2[] = "World!";

        printf("%d\n", _strcmp(s1, s2));
        printf("%d\n", _strcmp(s2, s1));
        printf("%d\n", _strcmp(s1, s1));
        return (0);
    }
    julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
    julien@ubuntu:~/0x06$ ./3-strcmp
    -15
    15
    0
    julien@ubuntu:~/0x06$

## 103-infinite_add.c
This file contains a function that adds two numbers

- Prototype: char *infinite_add(char *n1, char *n2, char *r, int size_r);
- Where n1 and n2 are the two numbers
- r is the buffer that the function will use to store the result
- size_r is the buffer size
- The function returns a pointer to the result
- You can assume that you will always get positive numbers, or 0
- You can assume that there will be only digits in the strings n1 and n2
- n1 and n2 will never be empty
- If the result can not be stored in r the function must return 0

Sample Output:
    julien@ubuntu:~/0x06$ cat 103-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
            char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
            char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
            char r[100];
            char r2[10];
            char r3[11];
            char *res;

            res = infinite_add(n, m, r, 100);
            if (res == 0)
            {
                    printf("Error\n");
            }
            else
            {
                    printf("%s + %s = %s\n", n, m, res);
            }
            n = "1234567890";
            m = "1";
            res = infinite_add(n, m, r2, 10);
            if (res == 0)
            {
                    printf("Error\n");
            }
            else
            {
                    printf("%s + %s = %s\n", n, m, res);
            }
            n = "999999999";
            m = "1";
            res = infinite_add(n, m, r2, 10);
            if (res == 0)
            {
                    printf("Error\n");
            }
            else
            {
                    printf("%s + %s = %s\n", n, m, res);
            }
            res = infinite_add(n, m, r3, 11);
            if (res == 0)
            {
                    printf("Error\n");
            }
            else
            {
                    printf("%s + %s = %s\n", n, m, res);
            }
            return (0);
    }
    julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 103-main.c 103-infinite_add.c -o 103-add
    julien@ubuntu:~/0x06$ ./103-add
    1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458 + 9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346 = 10269358555905271602506489145024737320744338932474201434349082690912722437209719106353804
    Error
    Error
    999999999 + 1 = 1000000000
    julien@ubuntu:~/0x06$
