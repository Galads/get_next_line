/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 22:35:37 by brice             #+#    #+#             */
/*   Updated: 2020/11/17 00:26:40 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int	get_next_line(int fd, char **line)
{
	static char *lost;
	char        **result;
	char        *line_sec;
	int			rd;

	lost = NULL;
	line_sec = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	while (((rd = read(fd, line_sec, BUFFER_SIZE)) > 0))
	{
	    *line = ft_strnew_n(line_sec);
    }
    return 0;
}