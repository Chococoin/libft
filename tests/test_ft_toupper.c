#include "../includes/libft.h"
#include "test_runner.h"

int test_toupper_lowercase()
{
	return (ft_toupper('a') == 'A');
}

int test_toupper_uppercase()
{
	return (ft_toupper('A') == 'A');
}

int test_toupper_non_alpha()
{
	return (ft_toupper('1') == '1');
}

int test_toupper_special_char()
{
	return (ft_toupper('@') == '@');
}

int test_toupper_boundary()
{
	return (ft_toupper('z') == 'Z');
}
