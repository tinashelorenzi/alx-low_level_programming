#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
*void prototypes(void)
*int prototypes(int)
*char prototypes(char)
*/
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
#endif /* MAIN_H */
