/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta- <facosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:31:15 by facosta-          #+#    #+#             */
/*   Updated: 2024/09/23 19:35:48 by facosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t size)
{
	unsigned char		*d;
	unsigned const char	*s;

	if (dst < src)
	{
		return (ft_memcpy(dst, src, size));
	}
	d = (unsigned char *)dst;
	s = (unsigned const char *)src;
	if (!size || dst == src)
	{
		return (dst);
	}
	while (size--)
	{
		d[size] = s[size];
	}
	return (dst);
}
