/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta- <facosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:25:12 by facosta-          #+#    #+#             */
/*   Updated: 2024/09/19 20:58:47 by facosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_calculate(char *result, int value, size_t len);

char	*ft_itoa(const int num)
{
	int		value;
	size_t	len;
	char	*result;

	if (num == -2147483648)
		return (ft_strdup("-2147483648"));
	if (num == 0)
		return (ft_strdup("0"));
	value = (int) num;
	len = ft_intlen(num);
	if (num < 0)
		len++;
	result = (char *) malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (num < 0)
	{
		result[0] = '-';
		value = -value;
	}
	ft_calculate(result, value, len);
	return (result);
}

static void	ft_calculate(char *result, int value, size_t len)
{
	while (value)
	{
		result[--len] = value % 10 + '0';
		value /= 10;
	}
}
