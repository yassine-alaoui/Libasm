/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaalaoui <yaalaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 11:33:26 by yaalaoui          #+#    #+#             */
/*   Updated: 2020/11/26 11:38:13 by yaalaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"
#include <string.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <sys/errno.h>
#include <unistd.h>
#include <fcntl.h>

/*
** FT_STRLEN
*/

// int		main(void)
// {
// 	char	str[10];
// 	char	dst[10];
// 	int		i;

// 	dst[10] = "";
// 	str[10] = "hello";
// 	printf("%s : ", "ft_strlen.s");
// 	i = ft_strlen(str);
// 	printf("%s\n", i);
// }

/*
** FT_STRCPY
*/

// int		main(void)
// {
// 	char	str[10];
// 	char	dst[10];
// 	char	*i;

// 	dst[10] = "";
// 	str[10] = "hello";
// 	printf("%s : ", "ft_strcpy.s");
// 	i = ft_strcpy(dst, str);
// 	printf("%s\n", i);
// }

/*
** FT_STRCMP
*/

// int		main(void)
// {
// 	int		i;
// 	int		j;

// 	printf("%s : ", "ft_strcmp.s");
// 	i = ft_strcmp("a", "asdf");
// 	printf("%d\n", i);
// 	printf("%s : ", "strcmp.s");
// 	j = strcmp("a", "asdf");
// 	printf("%d\n", j);
// }

/*
** FT_WRITE
*/

// int		main(void)
// {
// 	ssize_t	i;

// 	printf("%s : \n", "ft_write.s");
// 	i = write(12, "", 0);
// 	printf("len is  : %zd\n", i);
// 	printf("sys error is  : %d\n", errno);
// }

// /*
// ** FT_READ
// */

// int		main(void)
// {
// 	ssize_t	i;
// 	int		j;
// 	char	str[1000000];

// 	printf("%s : \n", "ft_write.s");
// 	j = open("map.cub", O_RDONLY);
// 	i = ft_read(j, str, 80);
// 	printf("%s : \n", str);
// 	printf("len is  : %zd\n", i);
// 	printf("sys error is  : %d\n", errno);
// 	printf("sys error is  : %s\n", strerror(errno));
// }

/*
** FT_STRDUP
*/

// int		main(void)
// {
// 	char *str;

// 	printf("%s : \n", "ft_strdup.s");
// 	str = ft_strdup("");
// 	printf("%s \n", str);
// 	printf("len is  : %d\n", ft_strlen(str));
// 	printf("sys error is  : %s\n", strerror(errno));
// }
