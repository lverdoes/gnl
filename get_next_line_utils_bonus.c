/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line_utils.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/10 13:42:27 by lverdoes      #+#    #+#                 */
/*   Updated: 2020/01/08 12:46:23 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strchr(char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (s + i + 1);
		i++;
	}
	return (s);
}

char	*ft_reset_ptr(char *str)
{
	char *tmp;
	char *next_line;

	tmp = ft_strdup(str, '\0');
	if (!tmp)
		return (0);
	free(str);
	next_line = ft_strchr(tmp, '\n');
	str = ft_strdup(next_line, '\0');
	free(tmp);
	return (str);
}

size_t	ft_strlen(char *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *s1, char c)
{
	size_t	len;
	size_t	i;
	char	*dest;

	len = ft_strlen(s1, c);
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (0);
	i = 0;
	while (i < len)
	{
		if (s1[i] == c)
			break ;
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*str;
	size_t	len;

	len = ft_strlen(s1, '\0');
	str = malloc((len + ft_strlen(s2, '\0') + 1) * sizeof(char));
	if (!str)
		return (0);
	i = 0;
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	free(s1);
	while (j < ft_strlen(s2, '\0'))
	{
		str[i + j] = s2[j];
		j++;
	}
	str[i + j] = '\0';
	return (str);
}
