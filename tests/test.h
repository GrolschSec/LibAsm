/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 17:06:25 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/05/29 18:30:19 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H
# include <check.h>
# include "../libasm.h"

/* test.c */
Suite	*libasm_suite(void);
/* test_ft_strlen.c */
TCase	*tcase_ft_strlen(void);
#endif
