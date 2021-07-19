#ifndef DOG_H
#define DOG_H

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;



/**
 * struct dog - define a new type structure dog
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Owner of dog
 * Description: This is a structure which defines a new type dog.
 */

struct dog
{
        char *name;
        float age;
        char *owner;
};

#endif
~
