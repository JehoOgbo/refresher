# 0x08-recursion


This directory introduces us to the concept of recursion and it's usefulness.

## 0-puts_recursion.c

Function that prints a string followed by a new line.
Similar to puts (provided by the standard library)

    prototype: void _puts_recursion(char *s);

Sample Output:

    julien@ubuntu:~/0x08. Recursion$ cat 0-main.c
    #include "main.h"

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        _puts_recursion("Puts with recursion");
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 0-main.c 0-puts_recursion.c -o 0-puts_recursion
    julien@ubuntu:~/0x08. Recursion$ ./0-puts_recursion 
    Puts with recursion
    julien@ubuntu:~/0x08. Recursion$

## 1-print_rev_recursion.c

Function that prints a string in reverse.

    void _print_rev_recursion(char *s);

Sample Output:

    julien@ubuntu:~/0x08. Recursion$ cat 1-main.c
    #include "main.h"

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        _print_rev_recursion("\nColton Walker");
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 1-main.c 1-print_rev_recursion.c -o 1-print_rev_recursion
    julien@ubuntu:~/0x08. Recursion$ ./1-print_rev_recursion
    reklaW notloC
    julien@ubuntu:~/0x08. Recursion$

## 2-strlen_recursion.c

Function that finds the length of a string using recursion

    int _strlen_recursion(char *s);

Sample Output:

    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int n;

        n = _strlen_recursion("Corbin Coleman");
        printf("%d\n", n);
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89  2-main.c 2-strlen_recursion.c -o 2-strlen_recursion
    julien@ubuntu:~/0x08. Recursion$ ./2-strlen_recursion
    14
    julien@ubuntu:~/0x08. Recursion$

## 3-factorial.c

Function that returns the factorial of a given number

    Prototype: int factorial(int n);
    If n is lower than 0, the function should return -1 to indicate an error
    Factorial of 0 is 1

Sample Output:

    julien@ubuntu:~/0x08. Recursion$ cat 3-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;

        r = factorial(1);
        printf("%d\n", r);
        r = factorial(5);
        printf("%d\n", r);
        r = factorial(10);
        printf("%d\n", r);
        r = factorial(-1024);
        printf("%d\n", r);
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-factorial.c -o 3-factorial
    julien@ubuntu:~/0x08. Recursion$ ./3-factorial
    1
    120
    3628800
    -1
    julien@ubuntu:~/0x08. Recursion$


## 4-pow_recursion.c

Function that returns the value of x raised to the power y.

    
    Prototype: int _pow_recursion(int x, int y);
    If y is lower than 0, the function should return -1

Sample Output:

    julien@ubuntu:~/0x08. Recursion$ cat 4-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;

        r = _pow_recursion(1, 10);
        printf("%d\n", r);
        r = _pow_recursion(1024, 0);
        printf("%d\n", r);
        r = _pow_recursion(2, 16);
        printf("%d\n", r);
        r = _pow_recursion(5, 2);
        printf("%d\n", r);
        r = _pow_recursion(5, -2);
        printf("%d\n", r);
        r = _pow_recursion(-5, 3);
        printf("%d\n", r);
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-pow_recursion.c -o 4-pow
    julien@ubuntu:~/0x08. Recursion$ ./4-pow
    1
    1
    65536
    25
    -1
    -125
    julien@ubuntu:~/0x08. Recursion$

## 5-sqrt_recursion.c

Function that returns the natural square root of a number

    Prototype: int _sqrt_recursion(int n);
    If n does not have a natural square root, the function should return -1

Sample Output:

    julien@ubuntu:~/0x08. Recursion$ cat 5-main.c 
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;

        r = _sqrt_recursion(1);
        printf("%d\n", r);
        r = _sqrt_recursion(1024);
        printf("%d\n", r);
        r = _sqrt_recursion(16);
        printf("%d\n", r);
        r = _sqrt_recursion(17);
        printf("%d\n", r);
        r = _sqrt_recursion(25);
        printf("%d\n", r);
        r = _sqrt_recursion(-1);
        printf("%d\n", r);
        return (0);
    }
    julien@ubuntu:~/0x08. gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-sqrt_recursion.c -o 5-sqrt
    julien@ubuntu:~/0x08. Recursion$ ./5-sqrt 
    1
    32
    4
    -1
    5
    -1
    julien@ubuntu:~/0x08. Recursion$ 

## 6-is_prime_number.c

checks if a number is prime.

    Prototype: int is_prime_number(int n);

Sample Output:

    julien@ubuntu:~/0x08. Recursion$ cat 6-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;

        r = is_prime_number(1);
        printf("%d\n", r);
        r = is_prime_number(1024);
        printf("%d\n", r);
        r = is_prime_number(16);
        printf("%d\n", r);
        r = is_prime_number(17);
        printf("%d\n", r);
        r = is_prime_number(25);
        printf("%d\n", r);
        r = is_prime_number(-1);
        printf("%d\n", r);
        r = is_prime_number(113);
        printf("%d\n", r);
        r = is_prime_number(7919);
        printf("%d\n", r);
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-is_prime_number.c -o 6-prime
    julien@ubuntu:~/0x08. Recursion$ ./6-prime
    0
    0
    0
    1
    0
    0
    1
    1
    julien@ubuntu:~/0x08. Recursion$

## 100-is_palindrome.c

Function that returns 1 if a string is a palindrome and 0 if not.

    Prototype: int is_palindrome(char *s);
    An empty string is a palindrome

Sample Output:

    julien@ubuntu:~/0x08. Recursion$ cat 100-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int r;

        r = is_palindrome("level");
        printf("%d\n", r);
        r = is_palindrome("redder");
        printf("%d\n", r);
        r = is_palindrome("test");
        printf("%d\n", r);
        r = is_palindrome("step on no pets");
        printf("%d\n", r);
        return (0);
    }
    julien@ubuntu:~/0x08. Recursion$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 100-main.c 100-is_palindrome.c -o 100-palindrome
    julien@ubuntu:~/0x08. Recursion$ ./100-palindrome 
    1
    1
    0
    1
    julien@ubuntu:~/0x08. Recursion$
