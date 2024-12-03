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
