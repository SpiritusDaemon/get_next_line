/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:02:49 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/13 15:15:19 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*get_next_line(int fd)
{
	static char	buffer[FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;
	size_t		i;
	int			n_boolean;

	n_boolean = 0;
	i = 0;
	if (read(fd, 0, 0) < 0 || BUFFER_SIZE < 1 || fd >= FOPEN_MAX)
	{
		while (fd >= 0 && fd < FOPEN_MAX && buffer[fd][i])
			buffer[fd][i++] = 0;
		return (NULL);
	}
	line = NULL;
	while (buffer[fd][0] || read(fd, buffer[fd], BUFFER_SIZE) > 0)
	{
		line = create_line(buffer[fd], line, &n_boolean, buffer[fd]);
		if (n_boolean)
			break ;
	}
	return (line);
}

/* int	main(void)
{
	char *str;
	int fd = open("teste.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	printf("%s", str);
	str = get_next_line(fd);
	if (str == NULL)
		printf("(null)");
	return (0);
} */