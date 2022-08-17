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

		if (n_lst)
		{
			last = ft_lstlast(n_lst);
			printf("Last node is %c\n", last->content);
		}
		else
			printf("List is empty!!!\n");
		goto main_menu;
	}
	else if (menu == 3)
	{
		char	new[10];
		t_node	*newlst;

		printf("Please enter character: ");
		scanf("%s", new);
		if (!n_lst)
			n_lst = ft_lstnew(*new);
		else
		{
			newlst = ft_lstnew(*new);
			ft_lstadd_back(n_lst, newlst);
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
