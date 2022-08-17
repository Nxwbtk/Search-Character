/* ******************************************************************************* */
/*                                                                                 */
/*                                                     :::     ::: :::     :::     */
/*   easylib.h                                        :+:    :+:  :+:     +:+      */
/*                                                   +:+   +:+   +:+     +:+       */
/*   By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+        */
/*                                                 +#+ #+#     +#+     +#+         */
/*   Created: 2022/08/01 16:28:30 by nxwbtk       #+#   #+#   +#+     +#+          */
/*   Updated: 2022/08/01 16:28:33 by nxwbtk      ###     ###   ########.th         */
/*                                                                                 */
/* ******************************************************************************* */

#ifndef EASYLIB_H
# define EASYLIB_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <string.h>

void	ft_welcome(void);
float	ft_menu(void);
void	ft_goodbye(void);
typedef struct s_node
{
	char			content;
	struct s_node	*next;
}				t_node;
void    ft_traverse(t_node *lst);
t_node	*ft_lstlast(t_node *lst);
t_node	*ft_lstnew(char content);
void	ft_lstadd_back(t_node *lst, t_node *new);

#endif
