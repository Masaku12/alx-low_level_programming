#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * s_len - Finds the string length
 * @str: The string under review
 * Return: The string length
 */

int s_len(char *str)
{
	int len = 0;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * s_cpy - copies a string
 * @src: The origin of string under review
 * @dest: The port of call that will store the copied string
 * Return: The pointer to @dest
 */

char *s_cpy(char *dest, char *src)
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
	char *k9_name;
	char *k9_owner;

	k9 = malloc(sizeof(dog_t));

	if (k9 == NULL)
		return (NULL);
	k9->age = age;

	if (name != NULL)
	{
		k9_name = malloc((s_len(name) * sizeof(char)) + 1);
		if (k9_name == NULL)
		{
			free(k9);
			return (NULL);
		}
		k9->name = s_cpy(name, k9_name);
	}
	else
		k9->name = NULL;
	if (owner == NULL)
	{
		k9_owner = malloc((s_len(owner) * sizeof(char)) + 1);
		if (k9_owner == NULL)
		{
			free(k9->name);
			free(k9->owner);
			free(k9);
			return (NULL);
		}
		k9->owner = s_cpy(owner, k9_owner);
	}
	else
		k9->owner = NULL;

	return (k9);
}
