#include "easylib.h"

t_node	*ft_lstadd_back(t_node *lst, t_node *new)
{
	t_node	*new_lst;

	if (lst && new)
	{
		if (!(lst))
			lst = new;
		else
		{
			new_lst = ft_lstlast(lst);
			new_lst->next = new;
		}
	}
	return (new_lst);
}
