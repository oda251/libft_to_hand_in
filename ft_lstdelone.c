#include "libft.c"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst);
	free(lst);
}
