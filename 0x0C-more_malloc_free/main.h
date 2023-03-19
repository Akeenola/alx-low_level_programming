#ifndef MAIN_H
#define MAIN_H
void _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void populateResult(char *dest, char *n1, int n1_len, char *n2, int n2_len);
int getLengthOfNum(char *str);
void print_result(char *src, int length);
#endif
