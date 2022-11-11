/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 19:02:49 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/11 19:54:22 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void clear_line(char *buffer)
{
	int i;
	int j;

	i = 0;
	j = len_line(buffer);
	while (buffer[i] && buffer[i] != '\n')
	{	
		buffer[i++] = buffer[j];
		buffer[j++] = 0;
	}
}


char *create_line(char *buffer, char *line)
{
	char *temp;
	int i;
	int j;
	
	i = 0;
	j = 0;
	temp = malloc(((len_line(buffer) + len_line(line)) + 1) * sizeof(char));
	printf("chegou aqui\n");
	while(line[j++])
		temp[j] = line[j];
	while(buffer[i++])
		temp[j + i] = buffer[i];
	temp[j + i] = '\0';
	if (line)
		free (line);
	return (temp);
	
}

int len_line(char *str)
{
	int i;
	
	i = 0;
	while(str[i] != '\n' && str[i] && str)
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char *get_next_line(int fd)
{
	static char buffer[BUFFER_SIZE + 1];
	int i;
	char *line;
	
	line = NULL;
	while (read(fd, buffer, BUFFER_SIZE) > 0)	
	{
		line = create_line(buffer, line);
		clear_line(buffer);
	}
	return (line);
}

int main()
{
	char *str;
	int fd = open("teste.txt", O_RDONLY);
	str = get_next_line(fd);
	printf("%s\n", str);
	return (0);
}