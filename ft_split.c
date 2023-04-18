/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvong <kvong@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/30 10:01:53 by kvong             #+#    #+#             */
/*   Updated: 2021/03/03 16:01:07 by kvong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			i++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static int	ft_word_len(char const *s, char c)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (i);
		i++;
	}
	return (i);
}

static char	**ft_check_null(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	if (!(tab = malloc(sizeof(char *) * (ft_word_count(s, c) + 1))))
		return (NULL);
	return (tab);
}

char		**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	if ((tab = ft_check_null(s, c)) == NULL)
		return (NULL);
	while (s[i] == c && c != '\0')
		i++;
	while (s[i])
	{
		if (!(tab[j] = malloc(sizeof(char) * (ft_word_len(&s[i], c) + 1))))
			return (NULL);
		k = 0;
		while (s[i] != c && s[i])
			tab[j][k++] = s[i++];
		while (s[i] == c && c != '\0')
			i++;
		tab[j][k] = '\0';
		j++;
	}
	tab[j] = NULL;
	return (tab);
}
