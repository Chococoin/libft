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

// Test converting the smallest int value
// Test converting a number with a sign after the number
int test_atoi_sign_after_number() {
	const char *str = "42-";
	int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
	return (result == 42);
}

// Test converting a number that causes integer underflow
int test_atoi_int_underflow() {
	const char *str = "-2147483649";
	int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
	return (result == -2147483648); // Assuming ft_atoi handles underflow by clamping to INT_MIN
}

// Test converting a number with multiple signs
int test_atoi_multiple_signs() {
	const char *str = "++42";
	int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
	return (result == 0);
}

// Test converting a number with a sign in the middle
int test_atoi_sign_in_middle() {
	const char *str = "4-2";
	int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
	return (result == 4);
}

// Test converting a number with a sign and non-numeric characters
int test_atoi_sign_and_non_numeric() {
	const char *str = "42+abc";
	int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
	return (result == 42);
}

// Test converting a number with spaces and signs
int test_atoi_spaces_and_signs() {
	const char *str = "   -42   +";
	int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
	return (result == -42);
}

// Test converting a number with multiple signs and spaces
int test_atoi_multiple_signs_and_spaces() {
	const char *str = "   ++42   ";
	int result = ft_atoi(str);
	printf("\nresult: %d\nString: %s\n", result, str);
	return (result == 0);
}