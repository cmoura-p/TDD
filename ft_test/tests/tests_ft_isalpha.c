#include "minunit.h"
#include "libft.h"
#include "../src/ft_isalpha.c"
#include <stdbool.h>

MU_TEST(isalpha_test_example_entering_A)
{
	//ARRANGE
	char input = 'A';
	char expected_result = true;

	//ACT
	char actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_char_eq(expected_result, actual_result);

}
MU_TEST(isalpha_test_example_entering_1)
{
	//ARRANGE
	char input = '1';
	char expected_result = false;

	//ACT
	char actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_char_eq(expected_result, actual_result);

}

MU_TEST(isalpha_test_example_entering_ast)
{
	//ARRANGE
	char input = '*';
	char expected_result = false;

	//ACT
	char actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_char_eq(expected_result, actual_result);

}

MU_TEST(isalpha_test_example_entering_minus65)
{
	//ARRANGE
	char input = '-65';
	char expected_result = false;

	//ACT
	char actual_result = ft_isalpha(input);

	//ASSERT
	mu_assert_char_eq(expected_result, actual_result);

}

MU_TEST_SUITE(ft_isalpha_test_suite) 
{
	MU_RUN_TEST(isalpha_test_example_entering_A);
	MU_RUN_TEST(isalpha_test_example_entering_1);
	MU_RUN_TEST(isalpha_test_example_entering_ast);
}
