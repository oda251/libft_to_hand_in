#include "libft.h"

int	ft_lstsize(t_list **lst)
{
	t_list	*tmp;
	int		size;

	tmp = *lst;
	size = 0;
	while (tmp->next)
	{
		tmp = tmp->next;
		size++;
	}
	return (size);
}
