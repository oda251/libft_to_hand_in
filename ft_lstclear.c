#include "libft.c"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*nex;

	tmp = *lst;
	nex = tmp->next;
	while (nex->next)
	{
		ft_lstdelone(tmp, del);
		tmp = nex;
		nex = tmp->next;
	}
	ft_lstdelone(nex, del);
	*lst = NULL;
}