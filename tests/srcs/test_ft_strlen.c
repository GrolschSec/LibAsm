/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:53:46 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/06/05 16:58:15 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

START_TEST(test_ft_strlen_basic)
{
	ck_assert_int_eq(ft_strlen("Hello"), 5);
} END_TEST

START_TEST(test_ft_strlen_empty)
{
    ck_assert_int_eq(ft_strlen(""), 0);
} END_TEST

START_TEST(test_ft_strlen_long)
{
    ck_assert_int_eq(ft_strlen("This is a long string with multiple words."), 42);
} END_TEST


TCase	*tcase_ft_strlen(void)
{
	TCase	*tc;

	tc = tcase_create("ft_strlen");
	tcase_add_test(tc, test_ft_strlen_basic);
	tcase_add_test(tc, test_ft_strlen_empty);
	tcase_add_test(tc, test_ft_strlen_long);
	return (tc);
}
