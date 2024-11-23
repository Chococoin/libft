#ifndef LIBFT_H
#define LIBFT_H

int ft_strlen(const char *s);
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);
void *ft_memset(void *s, int c, int n);
int ft_strlcat(char *dest, const char *src, int size);

#endif