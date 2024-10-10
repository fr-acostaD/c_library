/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta- <facosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:00:07 by facosta-          #+#    #+#             */
/*   Updated: 2024/09/23 19:35:05 by facosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	lens1;
	size_t	lens2;
	size_t	size;

	if (!s1 || !s2)
	{
		return (NULL);
	}
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	size = lens1 + lens2 + 1;
	result = (char *) ft_calloc(size, sizeof(char));
	if (!result)
	{
		return (NULL);
	}
	ft_strlcpy(result, s1, size);
	ft_strlcat(result, s2, size);
	return (result);
}
