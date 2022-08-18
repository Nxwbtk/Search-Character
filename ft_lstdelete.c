/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelete.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsirikam <bsirikam@student.42bangkok.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 16:00:17 by bsirikam          #+#    #+#             */
/*   Updated: 2022/08/18 17:18:48 by bsirikam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easylib.h"

void	ft_lstdelete(t_node **lst, int c, int len)
{
	t_node	*tmp;
	int		i;

	i = 0;
	tmp = *lst;
	while (tmp && tmp->content != (char)c)
	{	
		lst = (*lst)->next;
		i++;
	}
	if (tmp->content == (char)c)
	{
		if (tmp == *lst)
		{
			*lst = (*lst)->next;
		}
		else
		{
			lst = tmp->next;
			free(tmp);
		}
	}
}
