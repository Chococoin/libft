#include "../includes/libft.h"
#include "test_runner.h"

int test_isalpha_lowercase()
{
    return (ft_isalpha('a') == 1);
}

int test_isalpha_uppercase()
{
    return (ft_isalpha('Z') == 1);
}

int test_isalpha_nonalpha()
{
    return (ft_isalpha('1') == 0);
}

int test_isalpha_space()
{
    return (ft_isalpha(' ') == 0);
}

int test_isalpha_specialchar()
{
    return (ft_isalpha('@') == 0);
}