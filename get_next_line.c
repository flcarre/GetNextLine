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
	char* buff[BUFF_SIZE];
	char *str;

	//str = malloc(BUFF_SIZE - 1 * sizeof(char));
	i = 0;
	while(read(fd, &buff, BUFF_SIZE) > 0)
	{
		i++;
		ft_strjoin(buff, str);
		printf("-%s\n", buff);
	}
	printf("___________%s\n", str);
	str[BUFF_SIZE * i] = 0;
	close(fd);
	return(str);
}

int get_next_line(const int fd, char **line)
{
	char **file;
	char *str;
	static int i;
	//printf("%s\n", file[0]);
	file = ft_strsplit(ft_full_str(fd), '\n');
	//printf("i = %d %s\n",i, file[i]);
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
