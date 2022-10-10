#ifndef DOG_H
#define DOG_H
/**
 * struct dog - define new data type called struct dog
 * @name: name of the dog
 * @age: how old is the dog in human age
 * @owner: name of the dog owner
 *
 * Description: Structure called dog which will contain
 * age of dog, name of dog and the dog owners name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
