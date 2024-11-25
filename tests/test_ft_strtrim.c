#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_strtrim(char const *s1, char const *set);

int test_strtrim_basic() {
	char *result = ft_strtrim("abcholaabcabc", "abc");
	int passed = strcmp(result, "hola") == 0;
	printf("\nExpected: %s\nResult: %s\n", "hola", result);
	free(result);
	return passed;
}

int test_strtrim_no_trim() {
	char *result = ft_strtrim("hello", "abc");
	int passed = strcmp(result, "hello") == 0;
	printf("\nExpected: %s\nResult: %s\n", "hello", result);
	free(result);
	return passed;
}

// int test_strtrim_full_trim() {
// 	char *result = ft_strtrim("abcabc", "abc");
// 	int passed = strcmp(result, "") == 0;
// 	printf("\nExpected: %s\nResult: %s\n", "", result);
// 	free(result);
// 	return passed;
// }

int test_strtrim_empty_string() {
	char *result = ft_strtrim("", "abc");
	int passed = strcmp(result, "") == 0;
	printf("\nExpected: %s\nResult: %s\n", "", result);
	free(result);
	return passed;
}

int test_strtrim_empty_set() {
	char *result = ft_strtrim("hello", "");
	int passed = strcmp(result, "hello") == 0;
	printf("\nExpected: %s\nResult: %s\n", "hello", result);
	free(result);
	return passed;
}

int test_strtrim_set_with_spaces() {
	char *result = ft_strtrim("  hello  ", " ");
	int passed = strcmp(result, "hello") == 0;
	printf("\nExpected: %s\nResult: %s\n", "hello", result);
	free(result);
	return passed;
}
