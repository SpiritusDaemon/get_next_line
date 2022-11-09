/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:08:51 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/09 21:23:05 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
# define BUFFER_SIZE 1


# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

char *get_next_line(int fd);
int line_len(int fd, char *buffer, int buf_size);
void *create_line(int fd, char **buffer, int buf_size, int alloc_size);







#endif
#endif
