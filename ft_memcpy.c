/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvong <kvong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:13:22 by kvong             #+#    #+#             */
/*   Updated: 2021/02/28 20:57:03 by kvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*s_dest;
	const char	*s_src;

	i = 0;
	s_dest = (char *)dest;
	s_src = (const char *)src;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		s_dest[i] = s_src[i];
		i++;
	}
	return (dest);
}
