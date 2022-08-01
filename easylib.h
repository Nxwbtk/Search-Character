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

typedef struct s_node
{
	void			*content;
	struct s_node	*next;
}				t_node;

#endif