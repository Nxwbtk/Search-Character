#include "easylib.h"

t_node	*ft_lstlast(t_node *lst)
{
	while (lst && lst->next != NULL)
		lst = lst->next;
	return (lst);
}