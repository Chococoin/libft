#include "../includes/libft.h" // Include the header file where ft_atoi is declared
#include "test_runner.h"
#include <stdio.h> // Include for printf

// Test converting a simple number
int test_atoi_simple_number() {
    const char *str = "42";
    int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
    return (result == 42);
}

// Test converting a negative number
int test_atoi_negative_number() {
    const char *str = "-42";
    int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
    return (result == -42);
}

// Test converting a number with leading spaces
int test_atoi_leading_spaces() {
    const char *str = "   42";
    int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
    return (result == 42);
}

// Test converting a number with leading plus sign
int test_atoi_leading_plus() {
    const char *str = "+42";
    int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
    return (result == 42);
}

// Test converting a number with leading and trailing spaces
int test_atoi_leading_trailing_spaces() {
    const char *str = "   42   ";
    int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
    return (result == 42);
}

// Test converting zero
int test_atoi_zero() {
    const char *str = "0";
    int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
    return (result == 0);
}

// Test converting a number with non-numeric characters at the end
int test_atoi_non_numeric_end() {
    const char *str = "42abc";
    int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
    return (result == 42);
}

// Test converting a number with non-numeric characters at the beginning
int test_atoi_non_numeric_beginning() {
    const char *str = "abc42";
    int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
    return (result == 0);
}

// Test converting the largest int value
int test_atoi_int_max() {
    const char *str = "2147483647";
    int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
    return (result == 2147483647);
}

// Test converting the smallest int value
int test_atoi_int_min() {
    const char *str = "-2147483648";
    int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
    return (result == -2147483648);
}