#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>


unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int _putchar(char c);

#endif /* MAIN_H */
