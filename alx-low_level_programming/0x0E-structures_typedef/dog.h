#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - defines a variable dog
 *
 * @name: name of the dog
 * @owner: name of the dog's owner
 * @age: the age of the dog
 *
 * Description: Dog has a name, owner and age
 */
struct dog {
	char *name;
	char *owner;
	float age;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* _DOG_H_ */
