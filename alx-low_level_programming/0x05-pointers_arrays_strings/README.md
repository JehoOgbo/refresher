# 0x05-pointers_arrays_strings

All the files listed here can be tested with the main.c files which have the same leading digits.

## Requirements
### General

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like printf, puts, etc… is forbidden
- You are allowed to use _putchar
- You don’t have to push _putchar.c, we will use our file. If you do it won’t be taken into account
- In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function _putchar should be included in your header file called main.h
- Don’t forget to push your header file


## main.h

This file contains function prototypes.

## 9-strcpy.c

Prototype: char *_strcpy(char *dest, char *src);
This file contains a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.
It returns the pointer to dest. Actually the C standard library provides a similar function strcpy. You can run man strcpy to learn more.
Sample output.
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
    julien@ubuntu:~/0x05$ ./9-strcpy 
    First, solve the problem. Then, write the code
    First, solve the problem. Then, write the code
    julien@ubuntu:~/0x05$ 

## 100-atoi.c

Contains a program that converts a string into an integer
- Prototype: int _atoi(char *s);
- The number in the string can be preceded by an infinite number of characters
- You need to take into account all the - and + signs before the number
- If there are no numbers in the string, the function must return 0
- You are not allowed to use long
- You are not allowed to declare new variables of “type” array
- You are not allowed to hard-code special values
- We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.

FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.
Sample Output:
    julien@ubuntu:~/0x05$ cat 100-main.c
    #include "main.h"
    #include <stdio.h>

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int nb;

        nb = _atoi("98");
        printf("%d\n", nb);
        nb = _atoi("-402");
        printf("%d\n", nb);
        nb = _atoi("          ------++++++-----+++++--98");
        printf("%d\n", nb);
        nb = _atoi("214748364");
        printf("%d\n", nb);
        nb = _atoi("0");
        printf("%d\n", nb);
        nb = _atoi("Suite 402");
        printf("%d\n", nb);
        nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
        printf("%d\n", nb);
        nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
        printf("%d\n", nb);
        return (0);
    }
    julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
    julien@ubuntu:~/0x05$ ./100-atoi
    98
    -402
    -98
    214748364
    0
    402
    98
    402
    julien@ubuntu:~/0x05$
