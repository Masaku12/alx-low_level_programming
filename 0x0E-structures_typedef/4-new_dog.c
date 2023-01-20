#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * _slen - Finds the string length
 * @str: The string under review
 * Return: The string length
 */

int _slen(char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * _scpy - copies a string
 * @src: The origin of string under review
 * @dest: The port of call that will store the copied string
 * Return: The pointer to @dest
 */

char *_scpy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index] != '\0'; index++)
		dest[index] = src[index];

	return (dest);
}

/**
 * new_dog - The dog being created
 * @name: The name of the dog
 * @age: The dog's age
 * @owner: The owner of the dog
 * Return: Struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *k9;
	
	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	k9 = malloc(sizeof(dog_t));
	if (k9 == NULL)
		return (NULL);

	k9->name = malloc(sizeof(char) * (_slen(name) + 1));
	if (k9->name == NULL)
	{
		free(k9);
		return (NULL);
	}

	k9->owner = malloc(sizeof(char) * (_slen(name) + 1));
	if (k9->owner == NULL)
	{
		free(k9->name);
		free(k9);
		return (NULL);
	}

	k9->name = _scpy(k9->name, name);
	k9->age = age;
	k9->owner = _scpy(k9->owner, owner);

	return (k9);
}
