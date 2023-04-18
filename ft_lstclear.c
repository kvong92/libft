/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvong <kvong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/27 19:16:26 by kvong             #+#    #+#             */
/*   Updated: 2021/01/30 17:07:13 by kvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *temp;
	t_list *current;

	current = *lst;
	while (current)
	{
		temp = current->next;
		if (del)
			del(current->content);
		free(current);
		current = temp;
	}
	*lst = NULL;
}
