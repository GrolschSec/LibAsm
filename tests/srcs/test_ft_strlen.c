/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:53:46 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/05/29 19:02:00 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

START_TEST(test_ft_strlen_basic)
{
	ck_assert_int_eq(strlen("Hello"), 3);
}

TCase	*tcase_ft_strlen(void)
{
	TCase	*tc;

	tc = tcase_create("ft_strlen");
	tcase_add_test(tc, test_ft_strlen_basic);
	return (tc);
}
