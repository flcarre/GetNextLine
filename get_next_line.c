/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:25:37 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/27 15:09:10 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int     ft_cut_str(char **str, char **line)
{
    unsigned long i;
    char *tmp;

    i = 0;
		tmp = *str;
    while(*(tmp + i) && *(tmp + i) != '\n')
        i++;
    *line = ft_strsub(tmp, 0, i);
    if (line == NULL)
        return (-1);
    i += (tmp[i] == '\n') ? 1 : 0;
    *str = ft_strdup(tmp + i);
    free(tmp);
    //printf("%s\n", str);
    if (*str == NULL)
        return (-1);
    return(1);
}

int get_next_line(const int fd, char **line)
{
	long    end;
	char    buff[BUFF_SIZE + 1];
  static char    *str = NULL;
  char    *s;

  s = NULL;
  if (fd < 0 || !line || read(fd, buff, 0) < 0)
  	return(-1);
  while ((end = read(fd, buff, BUFF_SIZE)) > 0)
  {
  	buff[end] = 0;
  	s = str;
    str = ft_strjoin(str, buff);
		if (s)
			free(s);
    if (ft_strchr(str, '\n'))
      return(ft_cut_str(&str, line));
  }
  if (ft_strlen(str) && end == 0)
  	return(ft_cut_str(&str, line));
  return(end < 0 ? -1 : 0);
}

/*
int main(int argc, char const *argv[])
{
	char 	*line;
	int		out;
	int		p[2];
	char 	*str;
	int		len = 50;

	str = (char *)malloc(1000 * 1000);
	*str = '\0';
	while (len--)
		strcat(str, "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Curabitur in leo dignissim, gravida leo id, imperdiet urna. Aliquam magna nunc, maximus quis eleifend et, scelerisque non dolor. Suspendisse augue augue, tempus");
	out = dup(1);
	pipe(p);
	dup2(p[1], 1);

	if (str)
		write(1, str, strlen(str));
	close(p[1]);
	dup2(out, 1);
	get_next_line(p[0], &line);
	if (ft_strequ(line, str))
			printf("ok\n");
	else
			printf("ko\n");
	return 0;
}
*/
