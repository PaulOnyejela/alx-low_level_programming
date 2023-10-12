#ifndef _DOG_H_
#define _DOG_H_

/*
 * dog - info on dog
 * struct dog - information about dogs
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of do
 * dog_t - Typedef for struct dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif