/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta- <facosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:00:07 by facosta-          #+#    #+#             */
/*   Updated: 2024/09/24 10:30:22 by facosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	lens2;

	if (s2[0] == '\0')
	{
		return ((char *)s1);
	}
	i = 0;
	lens2 = ft_strlen(s2);
	while (i < n && s1[i] != '\0')
	{
		if (s1[i] == s2[0])
		{
			if ((lens2 + i <= n) && (ft_strncmp(s1 + i, s2, lens2) == 0))
			{
				return ((char *)(s1 + i));
			}
		}
		i++;
	}
	return (NULL);
}
