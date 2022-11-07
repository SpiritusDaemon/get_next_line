/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:07:55 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/07 18:35:13 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char *buffer;
	char *nextline;
	int ret;
	static int i;
	int i_mal;

	i = -1;
	buffer = malloc(sizeof(char *));
	buffer = malloc(sizeof(char) * size);
	ret = read(fd, buffer, size);
	printf("\nreturn status: %d\nString coppied:%s\n", ret, buffer);
	
}

int main ()
{
	int fd = open("teste.txt", O_RDONLY | O_CREAT);
	get_next_line(fd);
}

/* what he has already read, he won't read again, he'll continue to the next line but print the size of the buffer; */