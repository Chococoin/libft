#include "../includes/libft.h"
#include "test_runner.h"

int test_isdigit_digit()
{
    return (ft_isdigit('5') == 1);
}

int test_isdigit_non_digit()
{
    return (ft_isdigit('a') == 0);
}

int test_isdigit_space()
{
    return (ft_isdigit(' ') == 0);
}

int test_isdigit_specialchar()
{
    return (ft_isdigit('@') == 0);
}

int test_isdigit_zero()
{
    return (ft_isdigit('0') == 1);
}

int test_isdigit_nine()
{
    return (ft_isdigit('9') == 1);
}