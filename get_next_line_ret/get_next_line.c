/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:02:49 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/12 17:54:12 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	buffer[BUFFER_SIZE + 1];
	char		*line;

	line = NULL;
	if (fd < 0)
		return (line);
	while (buffer[0] || read(fd, buffer, BUFFER_SIZE) > 0)
	{
		line = create_line(buffer, line);
		clear_buffer(buffer);
		if (is_it_line(line))
			break ;
	}
	return (line);
}

int main()
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
} 