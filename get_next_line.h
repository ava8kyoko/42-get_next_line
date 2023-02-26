/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mchampag <mchampag@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 13:16:06 by mchampag          #+#    #+#             */
/*   Updated: 2021/10/25 13:19:42 by mchampag         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10000000
# endif

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>

char	*get_next_line(int fd);
char	*ft_strchr(const char *str, int character);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *src_tocopy);
char	*ft_strjoin(char const *str1, char const *str2);
char	*ft_substr(char const *str, unsigned int start, size_t size_tocopy);

#endif
