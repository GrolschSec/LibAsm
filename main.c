/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:53:36 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/07/04 13:51:49 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	const char	*ok = GREEN_COLOR "OK" RESET_COLOR;
    const char	*ko = RED_COLOR "KO" RESET_COLOR;

    printf("********** ft_strlen **********\n");
    printf("1: %s ", ft_strlen("Hello World") == 11 ? ok : ko);
    printf("2: %s ", ft_strlen("") == 0 ? ok : ko);
	printf("\n\n");

	printf("********** ft_strcpy **********\n");
	char s1[100] = "Hello World";
	char s2[100] = "";
	printf("1: %s ", strcmp(ft_strcpy(s2, s1), s1) == 0 ? ok : ko);
	printf("2: %s ", strcmp(ft_strcpy(s2, ""), "") == 0 ? ok : ko);
	printf("\n\n");
	
	printf("********** ft_strcmp **********\n");
	printf("1: %s ", ft_strcmp("Hello World", "Hello World") == 0 ? ok : ko);
	printf("2: %s ", ft_strcmp("Hello World", "Hello") > 0 ? ok : ko);
	printf("3: %s ", ft_strcmp("Hello", "Hello World") < 0 ? ok : ko);
	printf("\n\n");

	printf("********** ft_write  **********\n");
	ssize_t bytes;
	errno = 0;
	bytes = ft_write(STDOUT_FILENO, "Hello, ft_write!\n", 17);
	if (bytes == 17 && errno == 0) {
		printf("1: %s ", ok);
	} else {
		printf("1: %s ", ko);
	}

	errno = 0;
	bytes = ft_write(-1, "This should fail.\n", 18);
	if (bytes == -1 && errno != 0) {
    	printf("2: %s ", ok);
	} else {
    	printf("2: %s ", ko);
	}
	printf("\n\n");
	return (0);
}
