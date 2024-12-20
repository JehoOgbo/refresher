# 0x0D-preprocessor

This directory explores the concepts of macros and the way the preprocessor handles them buttressing the fact that they should be avoided and the need for include guards in header files.

## 0-object_like_macro.h

Defines a macro SIZE as an abbreviation for 1024
Don't forget to add include guards!

    julien@ubuntu:~/0x0c. macro, structures$ cat 0-main.c
    #include "0-object_like_macro.h"
    #include "0-object_like_macro.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int s;

        s = 98 + SIZE;
        printf("%d\n", s);
        return (0);
    }
    julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
    julien@ubuntu:~/0x0c. macro, structures$ ./a 
    1122
    julien@ubuntu:~/0x0c. macro, structures$ 

## 1-pi.h

defines a macro named PI as an abbreviation for the token 3.14159265359

    julien@ubuntu:~/0x0c. macro, structures$ cat 1-main.c
    #include "1-pi.h"
    #include "1-pi.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        float a;
        float r;

        r = 98;
        a = PI * r * r;
        printf("%.3f\n", a);
        return (0);
    }
    julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c -o b
    julien@ubuntu:~/0x0c. macro, structures$ ./b
    30171.855
    julien@ubuntu:~/0x0c. macro, structures$

## 2-main.c

Program to print the name of the file from which it was compiled

Sample Usage:

    julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c -o c
    julien@ubuntu:~/0x0c. macro, structures$ ./c
    2-main.c
    julien@ubuntu:~/0x0c. macro, structures$ cp 2-main.c 02-main.c
    julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 02-main.c -o cc
    julien@ubuntu:~/0x0c. macro, structures$ ./cc
    02-main.c
    julien@ubuntu:~/0x0c. macro, structures$

## 3-function_like_macro.h

header file that defines a function like macro that returns the absolute value of a number

Sample Usage:

    julien@ubuntu:~/0x0c. macro, structures$ cat 3-main.c
    #include <stdio.h>
    #include "3-function_like_macro.h"
    #include "3-function_like_macro.h"

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int i;
        int j;

        i = ABS(-98) * 10;
        j = ABS(98) * 10;
        printf("%d, %d\n", i, j);
        return (0);
    }
    julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c -o d
    julien@ubuntu:~/0x0c. macro, structures$ ./d
    980, 980
    julien@ubuntu:~/0x0c. macro, structures$

## 4-sum.h

defines a function like macro that returns the sum of two numbers.

Sample Usage:

    julien@ubuntu:~/0x0c. macro, structures$ cat 4-main.c
    #include <stdio.h>
    #include "4-sum.h"
    #include "4-sum.h"

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int s;

        s = SUM(98, 1024);
        printf("%d\n", s);
        return (0);
    }
    julien@ubuntu:~/0x0c. macro, structures$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c -o e
    julien@ubuntu:~/0x0c. macro, structures$ ./e
    1122
    julien@ubuntu:~/0x0c. macro, structures$
