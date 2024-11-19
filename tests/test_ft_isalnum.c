#include "../includes/libft.h"
#include "test_runner.h"

int test_isalnum_lowercase()
{
    return (ft_isalnum('a') == 1);
}

int test_isalnum_uppercase()
{
    return (ft_isalnum('Z') == 1);
}

int test_isalnum_digit()
{
    return (ft_isalnum('5') == 1);
}

int test_isalnum_nonalnum()
{
    return (ft_isalnum('!') == 0);
}

int test_isalnum_space()
{
    return (ft_isalnum(' ') == 0);
}

int test_isalnum_specialchar()
{
    return (ft_isalnum('@') == 0);
}