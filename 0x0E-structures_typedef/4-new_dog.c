#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int fl, pl, j;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (fl = 0; name[fl]; fl++)
		;
	fl++;
	dog->name = malloc(fl * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (j = 0; j < fl; j++)
		dog->name[j] = name[j];
	dog->age = age;
	for (pl = 0; owner[pl]; pl++)
		;
	pl++;
	dog->owner = malloc(pl * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (j = 0; j < pl; j++)
		dog->owner[j] = owner[j];
	return (dog);
}
