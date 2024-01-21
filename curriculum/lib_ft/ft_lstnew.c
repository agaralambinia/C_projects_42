/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: defimova <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 21:11:27 by defimova          #+#    #+#             */
/*   Updated: 2024/01/21 21:12:36 by defimova         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*elt;

	elt = (t_list *) malloc(sizeof(t_list));
	if (elt == NULL)
		return (NULL);
	elt->content = content;
	elt->next = NULL;
	return (elt);
}
