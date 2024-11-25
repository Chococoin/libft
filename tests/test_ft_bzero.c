#include <stdio.h>
#include <string.h>
#include "../includes/libft.h"
#include "test_runner.h"

int test_bzero_zero_length() {
	char buffer[10] = "123456789";
	ft_bzero(buffer, 0);
	int passed = strcmp(buffer, "123456789") == 0;
	printf("\nExpected: %s\nResult: %s\n", "123456789", buffer);
	return passed;
}

int test_bzero_full_length() {
	char buffer[10] = "123456789";
	ft_bzero(buffer, 9);
	int passed = memcmp(buffer, "\0\0\0\0\0\0\0\0\0", 9) == 0;
	printf("\nExpected: %s\nResult: %s\n", "\\0\\0\\0\\0\\0\\0\\0\\0\\0", buffer);
	return passed;
}

int test_bzero_partial_length() {
	char buffer[10] = "123456789";
	ft_bzero(buffer, 5);
	int passed = memcmp(buffer, "\0\0\0\0\0123456789" + 5, 9) == 0;
	printf("\nExpected: %s\nResult: %s\n", "\\0\\0\\0\\0\\0123456789" + 5, buffer);
	return passed;
}

int test_bzero_empty_string() {
	char buffer[1] = "";
	ft_bzero(buffer, 1);
	int passed = buffer[0] == '\0';
	printf("\nExpected: %s\nResult: %s\n", "\\0", buffer);
	return passed;
}

int test_bzero_single_char() {
	char buffer[2] = "A";
	ft_bzero(buffer, 1);
	int passed = buffer[0] == '\0';
	printf("\nExpected: %s\nResult: %s\n", "\\0", buffer);
	return passed;
}

int test_bzero_middle_of_string() {
	char buffer[10] = "123456789";
	ft_bzero(buffer + 4, 3);
	int passed = memcmp(buffer, "1234\0\0\056789", 9) == 0;
	printf("\nExpected: %s\nResult: %s\n", "1234\\0\\0\\056789", buffer);
	return passed;
}

int test_bzero_large_buffer() {
	char buffer[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	ft_bzero(buffer, 26);
	int passed = memcmp(buffer, "\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0\0", 26) == 0;
	printf("\nExpected: %s\nResult: %s\n", "\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0\\0", buffer);
	return passed;
}

int test_bzero_no_effect() {
	char buffer[10] = "123456789";
	ft_bzero(buffer + 9, 1);
	int passed = strcmp(buffer, "123456789") == 0;
	printf("\nExpected: %s\nResult: %s\n", "123456789", buffer);
	return passed;
}
