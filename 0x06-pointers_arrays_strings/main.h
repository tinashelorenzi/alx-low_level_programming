#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
/**
* void prototypes()
* char prototypes()
* int prototypes()
*/
int _putchar(char c);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *str);
char *cap_string(char *str);
char *leet(char *c);
char *cap_string(char *s);
char *rot13(char *s);
#endif /*MAIN_H*/
