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
