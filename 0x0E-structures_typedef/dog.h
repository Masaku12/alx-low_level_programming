#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Dog description
 * @name: Dog's name
 * @age: The dog's age
 * @owner: The owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
