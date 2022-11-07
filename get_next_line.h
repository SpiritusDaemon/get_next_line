/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmarques <gmarques@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 16:08:51 by gmarques          #+#    #+#             */
/*   Updated: 2022/11/07 18:26:58 by gmarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

typedef int BUFFER_SIZE;
BUFFER_SIZE size = 1;
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>

char *get_next_line(int fd);





#endif
