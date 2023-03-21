#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - libère la mémoire allouée pour un chien
 * @d: pointeur vers la structure du chien à libérer
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
