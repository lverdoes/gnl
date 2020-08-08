/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   get_next_line.h                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lverdoes <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/12/10 13:45:52 by lverdoes      #+#    #+#                 */
/*   Updated: 2020/01/06 17:56:32 by lverdoes      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

typedef struct		s_list
{
	int				fd;
	char			*str;
	struct s_list	*prev;
	struct s_list	*next;
}					t_list;

int					free_list(t_list **head, t_list *node, int ret);
int					read_file(int fd, t_list *node);
t_list				*ft_new_elem(int fd);
t_list				*find_fd(int fd, t_list **head);
int					get_next_line(int fd, char **line);
char				*ft_strchr(char *s, char c);
char				*ft_reset_ptr(char *str);
size_t				ft_strlen(char *s, char c);
char				*ft_strdup(char *s1, char c);
char				*ft_strjoin(char *s1, char *s2);

#endif
