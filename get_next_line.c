/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:07:55 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/09 22:05:08 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1];
	int line_length;
	char *temp;
	int i;
	int j;

	i = -1;
	j = -1;
	line_length = (line_len(fd, buffer, BUFFER_SIZE)) + 1;
	
		temp = malloc(sizeof(char) * line_length);
		while (1) 
		{ 										
			read(fd, buffer, BUFFER_SIZE);
			while(buffer[i] && buffer[i] != '\n')
				temp[++j] = buffer[++i];
			if(buffer[i] == '\n')
			{	
				temp[j] = '\0';
				break;
			}
			i = 0;
		}	
	printf("%i\n", line_length);
	printf("%s\n", temp);
	return (temp);
}

int main (void)
{
	int fd = open("teste.txt", O_RDONLY | O_CREAT);
	get_next_line(fd);
}


/* create a static string that stores the values already read from the function.

it is supposed to return a full line, even though the buffer size is not the same as the line.
have to find a way to make read go until it reaches the new line if buffer not equal to size of line. */