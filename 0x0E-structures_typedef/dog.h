#ifndef DOG_H
#define DOG_H
/**
 * struct dog - A struct representing a dog
 * @name: The name of the dog (a string)
 * @age: The age of the dog (a float)
 * @owner: The owner of the dog (a string)
 *
 * Description: This struct represents a dog, with a name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
typedef struct dog dog_t;

#endif
