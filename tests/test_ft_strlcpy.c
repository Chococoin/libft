#include "../includes/libft.h" // Include the header file where ft_strlcpy is declared
#include "test_runner.h"
#include <string.h>
#include <stdio.h>

// Test copying to an empty destination
int test_strlcpy_empty_dest() {
    char dest[20] = "";
    const char *src = "Hello";
    int result = ft_strlcpy(dest, src, sizeof(dest));
    return (result == ft_strlen(src) && strcmp(dest, src) == 0);
}

// Test copying with enough space
int test_strlcpy_enough_space() {
    char dest[20] = "";
    const char *src = "Hello World";
    int result = ft_strlcpy(dest, src, sizeof(dest));
    return (result == ft_strlen(src) && strcmp(dest, src) == 0);
}

// Test copying with not enough space
int test_strlcpy_not_enough_space() {
    char dest[5] = "";
    const char *src = "Hello";
    int result = ft_strlcpy(dest, src, sizeof(dest));
    return (result == ft_strlen(src) && strncmp(dest, src, sizeof(dest) - 1) == 0 && dest[sizeof(dest) - 1] == '\0');
}

// Test copying with zero size
int test_strlcpy_zero_size() {
    char dest[10] = "Initial";
    const char *src = "Hello";
    int result = ft_strlcpy(dest, src, 0);
    return (result == ft_strlen(src) && strcmp(dest, "Initial") == 0);
}

// Test copying with size less than source length
int test_strlcpy_size_less_than_src() {
    char dest[6] = "";
    const char *src = "Hello World";
    int size = 6;
    int result = ft_strlcpy(dest, src, size);
    return (result == ft_strlen(src) && strncmp(dest, src, size - 1) == 0 && dest[size - 1] == '\0');
}

// Test copying with large buffer
int test_strlcpy_large_buffer() {
    char dest[1000] = "";
    const char *src = "Hello";
    int result = ft_strlcpy(dest, src, sizeof(dest));
    return (result == ft_strlen(src) && strcmp(dest, src) == 0);
}

// Test return value
int test_strlcpy_return_value() {
    char dest[20] = "";
    const char *src = "Hello";
    int result = ft_strlcpy(dest, src, sizeof(dest));
    return (result == ft_strlen(src));
}