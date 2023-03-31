#include "lists.h"

/**
 * beforeMain - Before main function execution
 * Return: nothing
 */
void __attribute__((constructor)) beforeMain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
