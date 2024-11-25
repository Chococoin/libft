#ifndef LIBFT_H
#define LIBFT_H

#include <stddef.h>

int ft_strlen(const char *s);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void *ft_memset(void *s, int c, int n);
int ft_strlcpy(char *dst, const char *src, int dstsize);
int ft_strlcat(char *dest, const char *src, int size);
int ft_strlcpy(char *dest, const char *src, int size);
int ft_atoi(const char *nptr);
char *ft_itoa(int n);
int *ft_strtrim(const char *s1, const char *set);
char *ft_substr(char const *s, unsigned int start, size_t len);

#endif