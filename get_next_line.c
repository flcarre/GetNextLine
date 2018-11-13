/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:25:37 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/13 16:00:21 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

char	*ft_file_str(int fd)
{
	int		i;
	char* c[BUFF_SIZE];
	char *str;

	str = malloc(BUFF_SIZE + 1 * sizeof(char));
	i = 0;
	read(fd, &c, BUFF_SIZE);
	str = c;
	str[BUFF_SIZE] = 0;
	printf("%s\n", str);
	close(fd);
}

int get_next_line(const int fd, char **line)
{

}


int main(int argc, char const *argv[]) {
	int fd = open(argv[1], O_RDONLY);
	ft_file_str(fd);
	return 0;
}
