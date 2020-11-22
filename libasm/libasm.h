/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 14:24:02 by yaalaoui          #+#    #+#             */
/*   Updated: 2020/11/22 16:32:50 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>

int		ft_strlen(char *str);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strcpy(char *dst, char *src);
ssize_t	ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t	ft_read(int fildes, void *buf, size_t nbyte);
char	*ft_strdup(const char *s1);