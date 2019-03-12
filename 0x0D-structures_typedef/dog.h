#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - a structure which defines the characteristics of a dog
 *@name: a char and name of the dog
 *@age: a float and age of the dog
 *@owner: a char and owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif /* _DOG_H_ */
