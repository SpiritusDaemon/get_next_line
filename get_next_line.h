/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:08:51 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/08 22:15:18 by marvin           ###   ########.fr       */
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





#endif
#endif
