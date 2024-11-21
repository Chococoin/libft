#include "../includes/libft.h"
#include "test_runner.h"

int test_isprint_valid()
{
    return (ft_isprint(65) == 1); // 'A'
}

int test_isprint_space()
{
    return (ft_isprint(32) == 1); // ' '
}

int test_isprint_tilde()
{
    return (ft_isprint(126) == 1); // '~'
}

int test_isprint_below_space()
{
    return (ft_isprint(31) == 0);
}

int test_isprint_127()
{
    return (ft_isprint(127) == 0);
}

int test_isprint_negative()
{
    return (ft_isprint(-1) == 0);
}

int test_isprint_above_127()
{
    return (ft_isprint(128) == 0);
}
