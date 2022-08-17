/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   ft_traverse.c                                    :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/08/07 22:34:49 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/08/07 22:34:52 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#include "easylib.h"

void    ft_traverse(t_node *lst)
{
    if (!(lst))
        printf("List is empty\n");
    else
    {
        while (lst)
        {
            printf("%d-->", lst->content);
            lst = lst->next;
        }
        printf("NULL\n");
    }
}