#include "test_runner.h"
#include "../includes/libft.h"

int test_strlen_basic();
int test_strlen_empty();
int test_strlen_long();
int test_strlen_space();
int test_isalpha_lowercase();
int test_isalpha_uppercase();
int test_isalpha_nonalpha();
int test_isalpha_space();
int test_isalpha_specialchar();
int test_isdigit_digit();
int test_isdigit_non_digit();
int test_isdigit_space();
int test_isdigit_specialchar();
int test_isdigit_zero();
int test_isdigit_nine();

int main()
{
    t_test tests[] = {
        { "ft_strlen basic", test_strlen_basic },
        { "ft_strlen empty", test_strlen_empty },
        { "ft_strlen space", test_strlen_space },
        { "ft_strlen long", test_strlen_long },
        { "ft_isalpha lowercase", test_isalpha_lowercase },
        { "ft_isalpha uppercase", test_isalpha_uppercase },
        { "ft_isalpha nonalpha", test_isalpha_nonalpha },
        { "ft_isalpha space", test_isalpha_space },
        { "ft_isalpha specialchar", test_isalpha_specialchar },
        { "ft_isdigit digit", test_isdigit_digit },
        { "ft_isdigit non digit", test_isdigit_non_digit },
        { "ft_isdigit space", test_isdigit_space },
        { "ft_isdigit specialchar", test_isdigit_specialchar },
        { "ft_isdigit zero", test_isdigit_zero },
        { "ft_isdigit nine", test_isdigit_nine }
    };

    int test_count = sizeof(tests)/sizeof(t_test);
    run_tests(tests, test_count);

    return 0;
}