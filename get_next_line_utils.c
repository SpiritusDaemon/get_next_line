/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:10:40 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/09 21:22:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int line_len(int fd, char *buffer, int buf_size)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (1) /* makes it go through all file (if buffer allows), and gives the size of the line he's reading; */
	{ 										
		read(fd, buffer, BUFFER_SIZE);
		while(buffer[++i] && buffer[i] != '\n')
			;
		count += i;
		if(buffer[i] == '\n')
				break;
		i = 0;
	}	
	return (count);
}

