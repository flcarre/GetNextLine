/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:25:37 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/13 16:46:00 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int     ft_cut_str(char **str, char **line)
{
    unsigned long i;
    char *tmp;

    i = 0;
    while((*str)[i] && (*str)[i] != '\n')
        i++;
    *line = ft_strsub(*str, 0, i);
    i += ((*str)[i] == '\n') ? 1 : 0;
    tmp = *str;
    *str = ft_strdup((*str) + i);
    free(tmp);
    return(1);
}

int get_next_line(const int fd, char **line)
{
	long    end;
   	char    buff[BUFF_SIZE + 1];
   	static char    *str = NULL;
   	char    *s;

    if (fd < 0 || !line)
        return(-1);
   	while((end = read(fd, &buff, BUFF_SIZE)) > 0)
   	{
   		buff[end] = 0;
   		s = str;
   		str = ft_strjoin(str, buff);
   		if (s)
   		    free(s);
   		if (ft_strchr(str, '\n'))
   		    return(ft_cut_str(&str, line));
    }
    if (ft_strlen(str))
       return(ft_cut_str(&str, line));
    return(end < 0 ? -1 : 0);
}

/*
int main(int argc, char const *argv[]) {
	int fd = open(argv[1], O_RDONLY);
	char *file = NULL;
	int i;
	argc = 0;
	i = 0;
	while(i < 3)
	{
	    get_next_line(fd, &file);
	    ft_putstr(file);
	    ft_putstr("\n");
	    i++;
	}
	close(fd);
	return 0;
}
*/