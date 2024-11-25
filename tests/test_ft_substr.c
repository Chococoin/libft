#include "../includes/libft.h"
#include "test_runner.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

// Test extracting a simple substring
int test_substr_simple() {
	const char *str = "Hello, world!";
	char *result = ft_substr(str, 7, 5);
	int success = strcmp(result, "world") == 0;
	free(result);
	return success;
}

// Test extracting a substring from the beginning
int test_substr_from_beginning() {
	const char *str = "Hello, world!";
	char *result = ft_substr(str, 0, 5);
	int success = strcmp(result, "Hello") == 0;
	free(result);
	return success;
}

// Test extracting a substring with length greater than string length
int test_substr_length_greater_than_string() {
	const char *str = "Hello";
	char *result = ft_substr(str, 0, 10);
	int success = strcmp(result, "Hello") == 0;
	free(result);
	return success;
}

// Test extracting a substring with start index greater than string length
int test_substr_start_greater_than_string() {
	const char *str = "Hello";
	char *result = ft_substr(str, 10, 5);
	int success = strcmp(result, "") == 0;
	free(result);
	return success;
}

// Test extracting a substring with start index in the middle of the string
int test_substr_start_in_middle() {
	const char *str = "Hello, world!";
	char *result = ft_substr(str, 7, 5);
	int success = strcmp(result, "world") == 0;
	free(result);
	return success;
}

// Test extracting a substring with length zero
int test_substr_length_zero() {
	const char *str = "Hello, world!";
	char *result = ft_substr(str, 7, 0);
	int success = strcmp(result, "") == 0;
	free(result);
	return success;
}

// Test extracting a substring from an empty string
int test_substr_empty_string() {
	const char *str = "";
	char *result = ft_substr(str, 0, 5);
	int success = strcmp(result, "") == 0;
	free(result);
	return success;
}

// Test extracting a substring with start index at the end of the string
int test_substr_start_at_end() {
	const char *str = "Hello";
	char *result = ft_substr(str, 5, 5);
	int success = strcmp(result, "") == 0;
	free(result);
	return success;
}