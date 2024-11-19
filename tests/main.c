#include "test_runner.h"
#include "../includes/libft.h"

int test_strlen_basic();
int test_strlen_empty();
int test_strlen_long();
int test_strlen_space();

/* int test_isalpha_lowercase();
int test_isalpha_uppercase();
int test_isalpha_nonalpha(); */

int main()
{
    t_test tests[] = {
        { "ft_strlen basic test", test_strlen_basic },
        { "ft_strlen empty test", test_strlen_empty },
        { "ft_strlen space test", test_strlen_space },
        { "ft_strlen long test", test_strlen_long }
    };

    /*
    { "ft_isalpha lowercase test", test_isalpha_lowercase },
        { "ft_isalpha uppercase test", test_isalpha_uppercase },
        { "ft_isalpha nonalpha test", test_isalpha_nonalpha },
    */

    int test_count = sizeof(tests)/sizeof(t_test);
    run_tests(tests, test_count);

    return 0;
}