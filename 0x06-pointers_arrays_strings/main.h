#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
* void prototypes()
*char prototypes()
* int prototypes()
*/

char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *s);
char *cap_string(char *s);
int my_islower(int c);
int my_isspace(int c);
char string_toupper(char c);
#endif /*MAIN_H*/
