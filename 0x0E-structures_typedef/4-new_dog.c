#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - entry function
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Nothing
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *_name, *_owner;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	_name = strdup(name);
	if (_name == NULL)
	{
		free(dog);
		return (NULL);
	}

	_owner = strdup(owner);
	if (_owner == NULL)
	{
		free(_name);
		free(dog);
		return (NULL);
	}

	dog->name = _name;
	dog->age = age;
	dog->owner = _owner;

	if (dog == NULL)
	{
		free(_owner);
		free(_name);
		free(dog);
		return (NULL);
	}

	return (dog);
}
