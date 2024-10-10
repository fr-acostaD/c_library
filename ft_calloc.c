/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta- <facosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 10:31:15 by facosta-          #+#    #+#             */
/*   Updated: 2024/09/23 19:36:29 by facosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	sized;

	sized = (count * size);
	result = malloc(sized);
	if (!result)
	{
		return (NULL);
	}
	ft_bzero(result, sized);
	return (result);
}
