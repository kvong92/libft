/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvong <kvong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/27 09:41:28 by kvong             #+#    #+#             */
/*   Updated: 2021/01/30 11:42:32 by kvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		count;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	count = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
		return (NULL);
	ft_memcpy(str, s1, ft_strlen(s1) + 1);
	ft_memcpy(str + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (str);
}
