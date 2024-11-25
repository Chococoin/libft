#include "test_runner.h"
#include "../includes/libft.h"

// int test_strlen_basic();
// int test_strlen_empty();
// int test_strlen_long();
// int test_strlen_space();
// int test_isalpha_lowercase();
// int test_isalpha_uppercase();
// int test_isalpha_nonalpha();
// int test_isalpha_space();
// int test_isalpha_specialchar();
// int test_isdigit_digit();
// int test_isdigit_non_digit();
// int test_isdigit_space();
// int test_isdigit_specialchar();
// int test_isdigit_zero();
// int test_isdigit_nine();
// int test_isalnum_lowercase();
// int test_isalnum_uppercase();
// int test_isalnum_digit();
// int test_isalnum_nonalnum();
// int test_isalnum_space();
// int test_isalnum_specialchar();
// int test_isascii_valid();
// int test_isascii_zero();
// int test_isascii_127();
// int test_isascii_negative();
// int test_isascii_above_127();
// int test_isprint_valid();
// int test_isprint_space();
// int test_isprint_tilde();
// int test_isprint_below_space();
// int test_isprint_127();
// int test_isprint_negative();
// int test_isprint_above_127();
// int test_toupper_uppercase();
// int test_toupper_lowercase();
// int test_toupper_non_alpha();
// int test_toupper_special_char();
// int test_toupper_boundary();
// int test_tolower_lowercase();
// int test_tolower_uppercase();
// int test_tolower_non_alpha();
// int test_tolower_special_char();
// int test_tolower_boundary();
// int test_memset_zero();
// int test_memset_value();
// int test_memset_zero_bytes();
// int test_memset_partial();
// int test_memset_negative_value();
// int test_memset_large_buffer();
// int test_memset_return_value();
// int test_strlcat_empty_dest();
// int test_strlcat_enough_space();
// int test_strlcat_not_enough_space();
// int test_strlcat_zero_size();
// int test_strlcat_size_less_than_dest();
// int test_strlcat_large_buffer();
// int test_strlcat_return_value();
// int test_strlcpy_empty_dest();
// int test_strlcpy_enough_space();
// int test_strlcpy_not_enough_space();
// int test_strlcpy_zero_size();
// int test_strlcpy_size_less_than_src();
// int test_strlcpy_large_buffer();
// int test_strlcpy_return_value();
// int test_atoi_simple_number();
// int test_atoi_negative_number();
// int test_atoi_leading_spaces();
// int test_atoi_leading_plus();
// int test_atoi_leading_trailing_spaces();
// int test_atoi_zero();
// int test_atoi_non_numeric_end();
// int test_atoi_non_numeric_beginning();
// int test_atoi_int_max();
// int test_atoi_int_min();
// int test_atoi_sign_after_number();
// int test_atoi_sign_after_number();
// int test_atoi_multiple_signs();
// int test_atoi_sign_in_middle();
// int test_atoi_sign_and_non_numeric();
// int test_atoi_spaces_and_signs();
// int test_atoi_multiple_signs_and_spaces();
// int test_itoa_zero();
// int test_itoa_positive();
// int test_itoa_negative();
// int test_itoa_int_max();
// int test_itoa_int_min();
// int test_itoa_single_digit();
// int test_itoa_negative_single_digit();
// int test_itoa_large_number();
// int test_itoa_negative_large_number();
int test_strtrim_basic();
int test_strtrim_no_trim();
// int test_strtrim_full_trim();
int test_strtrim_empty_string();
int test_strtrim_empty_set();
int test_strtrim_set_with_spaces();



int main()
{
	t_test tests[] = {
		// { "ft_strlen basic", test_strlen_basic },
		// { "ft_strlen empty", test_strlen_empty },
		// { "ft_strlen space", test_strlen_space },
		// { "ft_strlen long", test_strlen_long },
		// { "ft_isalpha lowercase", test_isalpha_lowercase },
		// { "ft_isalpha uppercase", test_isalpha_uppercase },
		// { "ft_isalpha nonalpha", test_isalpha_nonalpha },
		// { "ft_isalpha space", test_isalpha_space },
		// { "ft_isalpha specialchar", test_isalpha_specialchar },
		// { "ft_isdigit digit", test_isdigit_digit },
		// { "ft_isdigit non digit", test_isdigit_non_digit },
		// { "ft_isdigit space", test_isdigit_space },
		// { "ft_isdigit specialchar", test_isdigit_specialchar },
		// { "ft_isdigit zero", test_isdigit_zero },
		// { "ft_isdigit nine", test_isdigit_nine },
		// { "ft_isalnum lowercase", test_isalnum_lowercase },
		// { "ft_isalnum uppercase", test_isalnum_uppercase },
		// { "ft_isalnum digit", test_isalnum_digit },
		// { "ft_isalnum nonalnum", test_isalnum_nonalnum },
		// { "ft_isalnum space", test_isalnum_space },
		// { "ft_isalnum specialchar", test_isalnum_specialchar },
		// { "ft_isascii valid", test_isascii_valid },
		// { "ft_isascii zero", test_isascii_zero },
		// { "ft_isascii 127", test_isascii_127 },
		// { "ft_isascii negative", test_isascii_negative },
		// { "ft_isascii above 127", test_isascii_above_127 },
		// { "ft_isprint_valid", test_isprint_valid },
		// { "ft_isprint_space", test_isprint_space },
		// { "ft_isprint_tilde", test_isprint_tilde },
		// { "ft_isprint_below_space", test_isprint_below_space },
		// { "ft_isprint_127", test_isprint_127 },
		// { "ft_isprint_negative", test_isprint_negative },
		// { "ft_isprint_above_127", test_isprint_above_127 },
		// { "ft_toupper_lowercase", test_toupper_lowercase },
		// { "ft_toupper_uppercase", test_toupper_uppercase },
		// { "ft_toupper_non_alpha", test_toupper_non_alpha },
		// { "ft_toupper_special_char", test_toupper_special_char },
		// { "ft_toupper_boundary", test_toupper_boundary },
		// { "ft_tolower_lowercase", test_tolower_lowercase },
		// { "ft_tolower_uppercase", test_tolower_uppercase },
		// { "ft_tolower_non_alpha", test_tolower_non_alpha },
		// { "ft_tolower_special_char", test_tolower_special_char },
		// { "ft_tolower_boundary", test_tolower_boundary },
		// { "ft_memset to zero", test_memset_zero },
		// { "ft_memset to value", test_memset_value },
		// { "ft_memset zero bytes", test_memset_zero_bytes },
		// { "ft_memset partial", test_memset_partial },
		// { "ft_memset negative value", test_memset_negative_value },
		// { "ft_memset large buffer", test_memset_large_buffer },
		// { "ft_memset return", test_memset_return_value },
		// { "ft_strlcat empty dest", test_strlcat_empty_dest },
		// { "ft_strlcat enough space", test_strlcat_enough_space },
		// { "ft_strlcat not enough space", test_strlcat_not_enough_space },
		// { "ft_strlcat zero size", test_strlcat_zero_size },
		// { "ft_strlcat size less than dest", test_strlcat_size_less_than_dest },
		// { "ft_strlcat large buffer", test_strlcat_large_buffer },
		// { "ft_strlcat return value", test_strlcat_return_value },
		// { "ft_strlcpy empty dest", test_strlcpy_empty_dest },
		// { "ft_strlcpy enough space", test_strlcpy_enough_space },
		// { "ft_strlcpy not enough space", test_strlcpy_not_enough_space },
		// { "ft_strlcpy zero size", test_strlcpy_zero_size },
		// { "ft_strlcpy size less than src", test_strlcpy_size_less_than_src },
		// { "ft_strlcpy large buffer", test_strlcpy_large_buffer },
		// { "ft_strlcpy return value", test_strlcpy_return_value },
		// { "atoi simple number", test_atoi_simple_number },
		// { "atoi negative number", test_atoi_negative_number },
		// { "atoi leading spaces", test_atoi_leading_spaces },
		// { "atoi leading plus", test_atoi_leading_plus },
		// { "atoi leading trailing spaces", test_atoi_leading_trailing_spaces },
		// { "atoi zero", test_atoi_zero },
		// { "atoi non numeric end", test_atoi_non_numeric_end },
		// { "atoi non numeric beginning", test_atoi_non_numeric_beginning },
		// { "atoi int max", test_atoi_int_max },
		// { "atoi int min", test_atoi_int_min },
		// { "atoi sign after number", test_atoi_sign_after_number },
		// { "atoi multiple signs", test_atoi_multiple_signs },
		// { "atoi sign in middle", test_atoi_sign_in_middle },
		// { "atoi sign and non numeric", test_atoi_sign_and_non_numeric },
		// { "atoi spaces and signs", test_atoi_spaces_and_signs },
		// { "atoi multiple signs and spaces", test_atoi_multiple_signs_and_spaces },
		// { "itoa zero", test_itoa_zero },
		// { "itoa positive", test_itoa_positive },
		// { "itoa negative", test_itoa_negative },
		// { "itoa int max", test_itoa_int_max },
		// { "itoa int min", test_itoa_int_min },
		// { "itoa single digit", test_itoa_single_digit },
		// { "itoa negative single digit", test_itoa_negative_single_digit },
		// { "itoa large number", test_itoa_large_number },
		// { "itoa negative large number", test_itoa_negative_large_number },
		{ "strtrim basic", test_strtrim_basic },
		{ "strtrim no trim", test_strtrim_no_trim },
		// { "strtrim full trim", test_strtrim_full_trim },
		{ "strtrim empty string", test_strtrim_empty_string },
		{ "strtrim empty set", test_strtrim_empty_set },
		{ "strtrim set with spaces", test_strtrim_set_with_spaces },
	};

	int test_count = sizeof(tests)/sizeof(t_test);
	run_tests(tests, test_count);

	return (0);
}