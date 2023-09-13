#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include<stddef.h>
#include<stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int sze, int (*cmp)(int));
int main(int __attribute__((__unused__)) argc, char *argv[]);
int _putchar(char c);

#endif
