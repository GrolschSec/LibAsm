/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 15:25:32 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/07/08 15:53:52 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int	main(void)
{
	char	*str;
	char	buf[100];

	printf("ft_strlen(\"Hello World\"): %ld\n", ft_strlen("Hello World"));
	str = ft_strdup("Hello World");
	printf("ft_strdup(\"Hello World\"): %s\n", str);
	if (str)
		free(str);
	printf(
		"ft_strcmp(\"Hello World\", \"Hello World\"): %d\n",
		ft_strcmp("Hello World", "Hello World")
		);
	printf(
		"ft_strcpy(buf, \"Hello World\"): %s\n",
		ft_strcpy(buf, "Hello World")
		);
	ft_write(1, "ft_write wrote this line\n", 25);
	bzero(buf, 100);
	ft_read(0, buf, 100);
	printf("ft_read read this line: %s", buf);
	return (0);
}
