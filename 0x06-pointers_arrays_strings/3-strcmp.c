#include "main.h"
/**
  * _strcmp - compare two strings
  * @s1: string1 to compare
  * @s2: string2 to compare
  * 
  * Return: return difference ASCII
  */

int _strcmp(char *s1, char *s2)
{

    while((*s1!='\0') || (*s2!='\0'))
    {

        if (*s1 != *s2)
        {
            return (*s1 - *s2);
        }
        s1++;
        s2++;
    }
    return 0;
}
