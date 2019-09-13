# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    libft_creator.sh                                 .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: yictseng <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/08/19 09:20:45 by yictseng     #+#   ##    ##    #+#        #
#    Updated: 2019/08/22 14:50:34 by yictseng    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

#!/bin/bash

gcc -c ft_swap.c ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c
ar rc libft.a ft_swap.o ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o
ranlib libft.a
