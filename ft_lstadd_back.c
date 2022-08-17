#include "easylib.h"

void	ft_lstadd_back(t_node *lst, t_node *new)
{
	if (lst && new)
	{
		if (!(lst))
			lst = new;
		else
		{
			lst = ft_lstlast(lst);
			lst->next = new;
		}
	}
}
