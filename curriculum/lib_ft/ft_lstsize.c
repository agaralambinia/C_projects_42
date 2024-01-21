/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:13:55 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 21:14:40 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*n_lst;
	int		i;

	i = 0;
	n_lst = lst;
	while (n_lst != NULL)
	{
		n_lst = n_lst->next;
		i++;
	}
	return (i);
}
