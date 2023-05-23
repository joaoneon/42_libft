/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-a <jpedro-a@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:24:02 by jpedro-a          #+#    #+#             */
/*   Updated: 2023/05/23 19:41:28 by jpedro-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*map;
	t_list	*new;

	if (lst == NULL)
		return (NULL);
	tmp = lst;
	map = NULL;
	while (tmp != NULL)
	{
		new = ft_lstnew(f(tmp->content));
		if (new != NULL)
			ft_lstadd_back(&map, new);
		else
			ft_lstclear(&map, del);
		tmp = tmp->next;
	}
	return (map);
}
