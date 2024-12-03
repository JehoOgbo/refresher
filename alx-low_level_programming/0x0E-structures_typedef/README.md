# 0x0E-structures_typedef


This directory explores the use of structures (structs) to create more powerful data types and using typedef to eliminate the need to constantly type struct whenever the datatype is being used

## dog.h

Define a new type struct dog with the following elements:
- name, type = char *
- age, type = float
- owner, type = char *

Usage:

    julien@ubuntu:~/0x0d. structures, typedef$ cat 0-main.c
    #include <stdio.h>
    #include "dog.h"

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        struct dog my_dog;

        my_dog.name = "Poppy";
        my_dog.age = 3.5;
        my_dog.owner = "Bob";
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
        return (0);
    }
    julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c -o a
    julien@ubuntu:~/0x0d. structures, typedef$ ./a
    My name is Poppy, and I am 3.5 :) - Woof!
    julien@ubuntu:~/0x0d. structures, typedef$

## 1-init_dog.c

Function to initialize a variable of type struct dog.
- Prototype: void init_dog(struct dog *d, char *name, float age, char *owner);

Usage:

    julien@ubuntu:~/0x0d. structures, typedef$ cat 1-main.c
    #include <stdio.h>
    #include "dog.h"

    /**
     * main - check the code
     *
     * Return: Always 0.
     */
    int main(void)
    {
        struct dog my_dog;

        init_dog(&my_dog, "Poppy", 3.5, "Bob");
        printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
        return (0);
    }
    julien@ubuntu:~/0x0d. structures, typedef$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-init_dog.c -o b
    julien@ubuntu:~/0x0d. structures, typedef$ ./b
    My name is Poppy, and I am 3.5 :) - Woof!
    julien@ubuntu:~/0x0d. structures, typedef$