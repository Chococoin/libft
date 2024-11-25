#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *ft_itoa(int n);

int test_itoa_zero() {
	char *result = ft_itoa(0);
	int passed = strcmp(result, "0") == 0;
	free(result);
	return passed;
}

int test_itoa_positive() {
	char *result = ft_itoa(123);
	int passed = strcmp(result, "123") == 0;
	free(result);
	return passed;
}

int test_itoa_negative() {
	char *result = ft_itoa(-123);
	int passed = strcmp(result, "-123") == 0;
	free(result);
	return passed;
}

int test_itoa_int_max() {
	char *result = ft_itoa(2147483647);
	int passed = strcmp(result, "2147483647") == 0;
	free(result);
	return passed;
}

int test_itoa_int_min() {
	char *result = ft_itoa(-2147483648);
	int passed = strcmp(result, "-2147483648") == 0;
	free(result);
	return passed;
}

int test_itoa_single_digit() {
	char *result = ft_itoa(5);
	int passed = strcmp(result, "5") == 0;
	free(result);
	return passed;
}

int test_itoa_negative_single_digit() {
	char *result = ft_itoa(-5);
	int passed = strcmp(result, "-5") == 0;
	free(result);
	return passed;
}

int test_itoa_large_number() {
	char *result = ft_itoa(1000000);
	int passed = strcmp(result, "1000000") == 0;
	free(result);
	return passed;
}

int test_itoa_negative_large_number() {
	char *result = ft_itoa(-1000000);
	int passed = strcmp(result, "-1000000") == 0;
	free(result);
	return passed;
}
