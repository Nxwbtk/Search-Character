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
	printf("||          1. Traverse               ||\n");
	printf("||        2. Show last node           ||\n");
	printf("||         3. Add new node            ||\n");
	printf("||       4. Search Character          ||\n");
	printf("||       5. Delete Character          ||\n");
	printf("||       0. Exit the program          ||\n");
	printf("||                                    ||\n");
	printf("========================================\n\n");
	float	menu;
	printf("Enter your choice : ");
	scanf("%f", &menu);
	if (menu > 0)
		return (menu);
	else
		return (0);
}