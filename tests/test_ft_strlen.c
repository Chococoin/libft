#include "../includes/libft.h"
#include "test_runner.h"

int test_strlen_basic()
{
    return (ft_strlen("Hello") == 5);
}

int test_strlen_empty()
{
    return (ft_strlen("") == 0);
}

int test_strlen_space()
{
    return (ft_strlen(" ") == 1);
}

int test_strlen_long()
{
    return (ft_strlen("Hello, this is a long string") == 28);
}
