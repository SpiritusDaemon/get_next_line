/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 11:58:31 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/12 19:08:43 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	len_line(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

int	is_it_line(char *line)
{
	int	i;

	i = 0;
	if (!line)
		return (0);
	while (line[i])
	{
		if (line[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

void	clear_buffer(char *buffer)
{
	int	i;
	int	j;

	i = 0;
	j = len_line(buffer);
	while (buffer[j])
	{	
		buffer[i++] = buffer[j];
		buffer[j++] = 0;
	}
	while (buffer[i])
		buffer[i++] = 0;
}

char	*create_line(char *buffer, char *line)
{
	char	*temp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	temp = malloc(((len_line(buffer) + len_line(line)) + 1) * sizeof(char));
	while (line && line[j])
	{
		temp[j] = line[j];
		j++;
	}	
	while (buffer[i])
	{
		temp[j + i] = buffer[i];
		if (buffer[i] == '\n' && ++i)
			break ;
		i++;
	}
	temp[j + i] = '\0';
	free (line);
	return (temp);
}
