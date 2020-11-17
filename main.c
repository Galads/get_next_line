/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dkenchur <dkenchur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 15:24:53 by dkenchur          #+#    #+#             */
/*   Updated: 2020/11/17 00:26:44 by brice            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main() {
    int fd = open("file1.txt", O_RDONLY);
    char *line;
    int i;
    while((i = get_next_line(fd, &line)))
    {
        printf("i = %d %s\n", i, line);
        free(line);
    }
    printf("i = %d %s\n", i, line);
    free(line);
    return (0);
}