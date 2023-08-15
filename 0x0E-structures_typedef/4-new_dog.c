#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - creates a new dog.
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_g;
	int m, n;

	m = _strlen(name);
	n = _strlen(owner);

	dog_g = malloc(sizeof(dog_t));
	if (dog_g == NULL)
		return (NULL);
	dog_g->name = malloc(sizeof(char) * (m + 1));
	if (dog_g->name == NULL)
	{
		free(dog_g);
		return (NULL);
	}
	dog_g->owner = malloc(sizeof(char) * (n + 1));
	if (dog_g->owner == NULL)
	{
		free(dog_g);
		free(dog_g->name);
		return (NULL);
	}
	_strcpy(dog_g->name, name);
	_strcpy(dog_g->owner, owner);

	dog_g->age = age;
	return (dog_g);
}

/**
 * _strcpy - copies a string
 * @src: string to copy from
 * @dest: string to copy to
 * Return: pointer of the dest
 */
char *_strcpy(char *dest, char *src)
{
	int z;

	for (z = 0; src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	dest[z++] = '\0';
	return (dest);
}

/**
 * _strlen - calculates length of a strings
 * @s: string pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int g;

	g = 0;

	for ( ; *s != '\0'; s++)
	{
		g++;
	}
	return (g);
}

