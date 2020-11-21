/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brice <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 22:35:37 by brice             #+#    #+#             */
/*   Updated: 2020/11/21 02:16:26 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int get_next_line(int fd, char **line)
{
    static char *save;
    char        *buf;
    char        *clear;
    char        *p;
    int			rd;
    int         flag;

	flag = 1;
	if (fd < 0 || BUFFER_SIZE < 1 || !line)
        return (-1);
	if (!(*line = ft_strdup("")))
		return (-1);
	if (save)
	{
	    if ((p = ft_strchr(save, '\n')))
	    {
	        *p = '\0';
	        clear = *line;
	        if (!(*line = ft_strjoin(*line, save)))
	        {
	            free(line);
	            return (-1);
	        }
	        free(clear);
	        clear = save;
	        save = ft_strdup(p + 1);
            //free(clear);
            //flag = 0;
            return (1);
        }
	    else
        {
	        clear = *line;
	        *line = ft_strjoin(*line, save);
	        free(clear);
	        save = ft_strdup("");
	        free(save);
	        save = NULL;
	        //flag = 0;
        }
	}
	else
	    save = ft_strdup("");
	if (!(buf = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1))))
	{
	    free(save);
	    free(buf);
	    return (-1);
	}
	while ((rd = read(fd, buf, BUFFER_SIZE)) > 0 && flag)
	{
	    buf[rd] = '\0';
	    clear = *line;
	    if (!(*line = ft_strjoin(*line, buf)))
        {
	        free(*line);
	        free(line);
	        //*line = ft_strdup("");
            return (-1);
        }
	    free(clear);
	    if ((p = ft_strchr(*line, '\n')))
	    {
	        *p = '\0';

	        clear = save;
	        save = ft_strdup(p + 1);
	        free(clear);
            //break;
	        return (1);
        }
    }
	if (rd < 0)
    {
	    free(save);
	    free(buf);
        return (-1);
    }
	//clear = save;
	free(save);
	free(buf);
    return (0);
}
