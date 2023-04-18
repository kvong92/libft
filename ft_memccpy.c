/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvong <kvong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 14:23:55 by kvong             #+#    #+#             */
/*   Updated: 2020/11/27 09:35:46 by kvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t		i;
	char		*s_dest;
	const char	*s_src;
	char		letter;

	i = 0;
	letter = (char)c;
	s_dest = (char *)dest;
	s_src = (char *)src;
	while (i < n)
	{
		s_dest[i] = s_src[i];
		if ((char)s_src[i] == letter)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
