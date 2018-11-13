/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flcarre <flcarre@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 15:25:37 by flcarre           #+#    #+#             */
/*   Updated: 2018/11/13 14:39:43 by flcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <get_next_line.h>

int	ft_file_size(int fd)
{
	int		i;
	char	c;

	i = 0;
	while (read(fd, &c, 1))
	{
		write(1, &c, 1);
		i++;
	}
	return(i);
}

char	*ft_file_str(int fd)
{
	int		i;
	char	c;
	char *str;

	str = malloc(400 * sizeof(char));
	i = 0;
	while (read(fd, &c, 1))
	{
		write(1, &c, 1);
		str[i] = c;
		i++;
	}
	close(fd);
	return(i);
}

int get_next_line(const int fd, char **line)
{

}


int main(int argc, char const *argv[]) {
	int fd = open(argv[1], O_RDONLY);
	printf("%s\n", ft_file_str(fd));
	return 0;
}
