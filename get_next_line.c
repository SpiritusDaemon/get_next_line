/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:07:55 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/08 22:28:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void buffer_shorten(char *buffer)
{
	int len;
	int i;

	i = -1;
	len = 0;
	while(buffer[++len] && ++i) 
		buffer[i] == buffer[len];
	buffer[i] == '\0';
}
char *get_next_line(int fd)
{
	int i;
	static char buffer[BUFFER_SIZE + 1];
	char *line;
	int count;

	count = -1;
	i = -1;

	while (buffer[count] != '\n')
	{
		read(fd, buffer, BUFFER_SIZE);
		while(buffer[++count])
			;			
		count = -1;
	}
	
	while (buffer && ++i)
	{
		line[i] == buffer[0];
		buffer_shorten(buffer);
	}
	line[i] = '\0';
	printf("%s\n", line);
}

int main (void)
{
	int fd = open("teste.txt", O_RDONLY | O_CREAT);
	get_next_line(fd);
}

/* what he has already read, he won't read again, he'll continue to the next line but print the size of the buffer; */

/* create a static string that stores the values already read from the function.

it is supposed to return a full line, even though the buffer size is not the same as the line.
have to find a way to make read go until it reaches the new line if buffer not equal to size of line. */