/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlouvrie <rlouvrie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 16:56:21 by rlouvrie          #+#    #+#             */
/*   Updated: 2024/07/03 17:44:41 by rlouvrie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# define RED_COLOR "\033[0;31m"
# define GREEN_COLOR "\033[0;32m"
# define RESET_COLOR "\033[0m"
# include <sys/types.h>
# include <errno.h>

/* srcs/ft_strcmp.s */
int		ft_strcmp(const char *s1, const char *s2);
/* srcs/ft_strlen.s */
size_t	ft_strlen(const char *s);
/* srcs/ft_write.s */
ssize_t	ft_write(int fd, const void *buf, size_t count);
/* srcs/ft_read.s */
ssize_t	ft_read(int fd, void *buf, size_t count);
/* srcs/ft_strdup.s */
char	*ft_strdup(const char *s);
/* srcs/ft_strcpy.s */
char	*ft_strcpy(char *restrict dst, const char *restrict src);
#endif
