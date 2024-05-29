/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:04:25 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/05/29 18:33:45 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

Suite	*libasm_suite(void)
{
	Suite	*s;

	s = suite_create("libasm");
	suite_add_tcase(s, tcase_ft_strlen());
	return (s);
}

int	main(void)
{
	int		failed;
	Suite	*s;
	SRunner	*r;

	s = libasm_suite();
	r = srunner_create(s);
	srunner_run_all(r, CK_NORMAL);
	failed = srunner_ntests_failed(r);
	srunner_free(r);
	if (failed)
		return (failed);
	return (0);
}
