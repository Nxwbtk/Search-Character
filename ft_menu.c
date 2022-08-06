/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   ft_menu.c                                        :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/08/05 17:25:28 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/08/05 17:25:31 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include "easylib.h"

float	ft_menu(void)
{
	printf("========================================\n");
	printf("||                                    ||\n");
	printf("||             Menu                   ||\n");
	printf("||   1. Search character program      ||\n");
	printf("||       2. Exit the program          ||\n");
	printf("||                                    ||\n");
	printf("========================================\n\n");
	float	menu;
	printf("Enter your choice : ");
	scanf("%f", &menu);
	if (menu == 1 || menu == 2)
		return (menu);
	else
		return (0);
}