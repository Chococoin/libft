#include "../includes/libft.h"
#include "test_runner.h"

int test_tolower_uppercase()
{
    return (ft_tolower('A') == 'a');
}

int test_tolower_lowercase()
{
    return (ft_tolower('a') == 'a');
}

int test_tolower_non_alpha()
{
    return (ft_tolower('1') == '1');
}

int test_tolower_special_char()
{
    return (ft_tolower('@') == '@');
}

int test_tolower_boundary()
{
    return (ft_tolower('Z') == 'z');
}
