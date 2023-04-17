#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new dog function
 * @name: name's dog
 * @age: age's dog
 * @owner: owner's dog
 * Return: newdog
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *dogie;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	dogie = malloc(sizeof(dog_t));
	if (dogie == NULL)
	{
		free(dogie);
		return (NULL);
	}
	dogie->name = malloc(i * sizeof(dogie->name));
	if (dogie->name == NULL)
	{
		free(dogie->name);
		free(dogie);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		dogie->name[k] = name[k];
	dogie->age = age;
	dogie->owner = malloc(j * sizeof(dogie->owner));
	if (dogie->owner == NULL)
	{
		free(dogie->owner);
		free(dogie->name);
		free(dogie);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		dogie->owner[k] = owner[k];
	return (dogie);
}
