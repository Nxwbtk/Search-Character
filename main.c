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

    ft_welcome();
	main_menu:
	menu = ft_menu();
	if (menu == 1)
	{
		printf("wait to the program");
	}
	else if (menu == 2)
		ft_goodbye();
	else
	{
		printf("Please enter 1 or 2 only!!!\n");
		system("sleep 2.0");
		system("clear || cls");
		goto main_menu;
	}
}