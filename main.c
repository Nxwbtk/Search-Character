/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   main.c                                           :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/08/01 16:31:29 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/08/01 16:31:30 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include "easylib.h"

int main(void)
{
	float	menu;
	char	any;
	t_node	*n_lst;

	n_lst = malloc(sizeof(t_node) + 1);
	n_lst = NULL;

    ft_welcome();
	main_menu:
	menu = ft_menu();
	if (menu == 1)
	{
		ft_traverse(n_lst);
		printf("Press anykey to continue...\n");
		scanf("%c", &any);
		goto main_menu;
	}
	else if (menu == 2)
	{
		t_node	*last;

		last = malloc(sizeof(t_node) + 1);
		last = ft_lstlast(n_lst);
		printf("Last node is %d\n", last);
	}
	else if (menu == 3)
	{
		int	new;
		t_node	*newlst;
	
		newlst = malloc(sizeof(t_node));
		printf("Please enter number : ");
		scanf("%d", &new);
		
		if (!n_lst)
			n_lst = ft_lstnew(new);
		else
		{
			newlst = ft_lstnew(new);
			n_lst = ft_lstadd_back(n_lst, newlst);
			printf("Add done\n");
		}
		system("sleep 0.5 && (clear || cls)");
		goto main_menu;
	}
	else if (menu == 0)
		ft_goodbye();
	else
	{
		printf("Please enter 1 or 2 only!!!\n");
		system("sleep 2.0");
		system("clear || cls");
		goto main_menu;
	}
}