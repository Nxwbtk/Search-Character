# ********************************************************************************* #
#                                                                                   #
#                                                      :::     ::: :::     :::      #
#    Makefile                                         :+:    :+:  :+:     +:+       #
#                                                    +:+   +:+   +:+     +:+        #
#    By: nxwbtk <bunthakan.s@ku.th>                 +#+  +:+    +#+     +#+         #
#                                                  +#+ #+#     +#+     +#+          #
#    Created: 2022/08/05 17:04:43 by nxwbtk       #+#   #+#   +#+     +#+           #
#    Updated: 2022/08/05 17:04:45 by nxwbtk      ###     ###   ########.th          #
#                                                                                   #
# ********************************************************************************* #

NAME = sc_program

SRC = main.c ft_welcome.c ft_menu.c ft_goodbye.c

CC = gcc
HEADER = libft.h

all: $(NAME)

$(NAME):
	@gcc $(SRC) -o $(NAME) && ./sc_program && make clean

clean:
	@rm -f $(NAME)

re: clean all

.PHONY: clean re all