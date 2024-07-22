#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure for dog information
 *
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * return: struct data type
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};


typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
