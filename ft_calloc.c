/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvong <kvong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 09:50:06 by kvong             #+#    #+#             */
/*   Updated: 2021/02/04 12:30:21 by kvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*s;

	total = count * size;
	if (!(s = (void *)malloc(sizeof(void) * total)))
		return (NULL);
	ft_bzero(s, total);
	return ((void *)s);
}
