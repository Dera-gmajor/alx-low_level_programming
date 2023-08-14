#ifndef DOG_PROFILE
#define DOG_PROFILE
/**
 * struct dog - describes a dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Description: the profile of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_profile;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
