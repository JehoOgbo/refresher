#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 *
 * Description: Allocates space for the dog using malloc and assigns
 * 		values to the component of the new dog
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: name of the dog's owner
 *
 * Return: pointer to the new dog that has been created
 * P.S: The new dog's addres is being passed around for memory efficiency
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
