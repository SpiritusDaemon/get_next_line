/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:07:55 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/08 19:12:52 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1];
	char *line;

	
	
}

int main ()
{
	int fd = open("teste.txt", O_RDONLY | O_CREAT);
	get_next_line(fd);
}

/* what he has already read, he won't read again, he'll continue to the next line but print the size of the buffer; */

/* create a static string that stores the values already read from the function.

it is supposed to return a full line, even though the buffer size is not the same as the line.
have to find a way to make read go until it reaches the new line if buffer not equal to size of line. */