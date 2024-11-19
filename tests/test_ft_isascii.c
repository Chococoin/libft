#include "../includes/libft.h"
#include "test_runner.h"

int test_isascii_valid()
{
    return (ft_isascii(65) == 1); // 'A'
}

int test_isascii_zero()
{
    return (ft_isascii(0) == 1);
}

int test_isascii_127()
{
    return (ft_isascii(127) == 1);
}

int test_isascii_negative()
{
    return (ft_isascii(-1) == 0);
}

int test_isascii_above_127()
{
    return (ft_isascii(128) == 0);
}
