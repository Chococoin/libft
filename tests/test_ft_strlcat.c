#include "../includes/libft.h" // Include the header file where ft_strlcat is declared
#include "test_runner.h"
#include <string.h>
#include <stdio.h>

// Test concatenating to an empty destination
int test_strlcat_empty_dest() {
	char dest[20] = "";
	const char *src = "Hello";
	int result = ft_strlcat(dest, src, sizeof(dest));
	return (result == ft_strlen(src) && strcmp(dest, src) == 0);
}

// Test concatenating with enough space
int test_strlcat_enough_space() {
	char dest[20] = "Hello";
	const char *src = " World";
	int result = ft_strlcat(dest, src, sizeof(dest));
	return (result == ft_strlen("Hello World") && strcmp(dest, "Hello World") == 0);
}

// Test concatenating with not enough space
int test_strlcat_not_enough_space() {
	char dest[10] = "Hello";
	const char *src = " World";
	int result = ft_strlcat(dest, src, sizeof(dest));
	return (result == ft_strlen("Hello") + ft_strlen(src));
}

// Test concatenating with zero size
int test_strlcat_zero_size() {
	char dest[10] = "Hello";
	const char *src = " World";
	int result = ft_strlcat(dest, src, 0);
	return (result == ft_strlen(src));
}

// Test concatenating with size less than destination length
int test_strlcat_size_less_than_dest() {
	char dest[10] = "Hello";
	const char *src = " World";
	int size = 3;
	int result = ft_strlcat(dest, src, size);
	return (result == (int)strlen(src) + size);
}

// Test concatenating with large buffer
int test_strlcat_large_buffer() {
	char dest[1000] = "Hello";
	const char *src = " World";
	int result = ft_strlcat(dest, src, sizeof(dest));
	return (result == ft_strlen("Hello World"));
}

// Test return value
int test_strlcat_return_value() {
	char dest[20] = "Hello";
	const char *src = " World";
	int result = ft_strlcat(dest, src, sizeof(dest));
	return (result == ft_strlen("Hello World"));
}