/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fvonsovs <fvonsovs@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 14:52:07 by fvonsovs          #+#    #+#             */
/*   Updated: 2023/02/22 18:08:01 by fvonsovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

// finds the first line ending in \n from buffer
// this is the line for get_next_line to return
static char	*next_line(char *a)
{
	int		i;
	char	*buf;

	if (!a || !a[0])
		return (NULL);
	i = 0;
	while (a[i] && a[i] != '\n')
		i++;
	if (a[i] == '\n')
		i++;
	buf = (char *)malloc((sizeof(char) * i) + 1);
	if (!buf)
		return (NULL);
	i = 0;
	while (a[i] && a[i] != '\n')
	{
		buf[i] = a[i];
		i++;
	}
	if (a[i] == '\n')
		buf[i++] = '\n';
	buf[i] = '\0';
	return (buf);
}

// finds the end of the line we just returned in the buffer
// moves it to the end of new buffer
// changes the \n before it to '\0', so our new buffer does not contain it
// this offsets our buffer so 
//the buffer now starts at the next line to be printed
static char	*offset(char *a)
{
	char	*buf;
	int		i;
	int		x;

	i = 0;
	x = 0;
	if (!a)
		return (NULL);
	while (a[i] && a[i] != '\n')
		i++;
	if (a[i] == '\0')
	{
		free(a);
		return (NULL);
	}
	if (a[i] == '\n')
		i++;
	buf = (char *)malloc(ft_strlen(a) - i + 1);
	while (a[i])
		buf[x++] = a[i++];
	buf[x] = '\0';
	free(a);
	return (buf);
}

static char	*read_file(int fd, char *str, char *buf)
{
	char	*tmp;
	int		i;

	i = 1;
	while (!(ft_strchr(str, '\n')) && i != 0)
	{
		i = read(fd, buf, BUFFER_SIZE);
		if (i == -1)
		{
			free(buf);
			return (NULL);
		}
		buf[i] = '\0';
		tmp = ft_strjoin(str, buf);
		free(str);
		str = tmp;
	}
	free (buf);
	return (str);
}

// for bonus modified static buffer
// so we have an array for out file descriptors
char	*get_next_line(int fd)
{
	static char		*str[8192] = {NULL};
	char			*buf;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buf = (char *)malloc((sizeof(char) * BUFFER_SIZE) + 1);
	if (!buf)
		return (NULL);
	str[fd] = read_file(fd, str[fd], buf);
	if (!str[fd])
		return (NULL);
	buf = next_line(str[fd]);
	str[fd] = offset(str[fd]);
	return (buf);
}
