#include "function_pointers.h"

/**
  * print_name - print a name
  * @name: name
  * @f: a pointer to the function
  * Return: void
  */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
