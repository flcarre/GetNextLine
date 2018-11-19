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

#include <get_next_line.h>

char	*ft_full_str(int fd)
{
	int		i;
	int end;
	char* buff[BUFF_SIZE];
	char *str;

	str = malloc(BUFF_SIZE - 1 * sizeof(char));
	i = 0;
	if ((end = read(fd, buff, BUFF_SIZE)) == -1)
		return (-1);
	str = ft_strjoin(str, buff);
	while(end = read(fd, &buff, BUFF_SIZE))
	{
		i++;
		str = ft_strjoin(str, buff);
	}
	str[BUFF_SIZE * i] = 0;
	close(fd);
	return(str);
}

int get_next_line(const int fd, char **line)
{
	char **file;
	char *str;
	static int i;
    if (i == 0)
	    file = ft_strsplit(ft_full_str(fd), '\n');
	if (file[i] == NULL)
	    return(0);
	printf("i = %d %s\n",i, file[i]);
	i++;
}


int main(int argc, char const *argv[]) {
	int fd = open(argv[1], O_RDONLY);
	char **file;
	int i;
	i = 0;
	while(i < 3)
	{
	    get_next_line(fd, &file);
	    i++;
	}
	return 0;
}
