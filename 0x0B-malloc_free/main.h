#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
/**
*void prototypes(void)
*int prototypes(int)
*char prototypes(char)
*/
char *create_array(unsigned int size, char c);
void free_grid(int **grid, int height);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
char *argstostr(int ac, char **av);
char **strtow(char *str);
int **alloc_grid(int width, int height);
int len(char *str);
int num_words(char *str);
#endif /* MAIN_H */
