/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvong <kvong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 10:10:18 by kvong             #+#    #+#             */
/*   Updated: 2020/11/20 10:38:00 by kvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *needle, size_t len)
{
	unsigned int	i;
	unsigned int	tmp;
	unsigned int	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)s);
	while (s[i] && i < len)
	{
		tmp = i;
		j = 0;
		while (i < len && s[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return ((char *)&s[tmp]);
		}
		tmp++;
		i = tmp;
	}
	return (0);
}
