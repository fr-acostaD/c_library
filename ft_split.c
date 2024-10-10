/* ************************************************************************** */
/*	                                                                        */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta- <facosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 18:00:07 by facosta-          #+#    #+#             */
/*   Updated: 2024/09/13 18:06:11 by facosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_counterpattern(char const *s, char c);
static void		ft_calculate(char const *s, char **result, char c);
static void		ft_freeresult(char **result, int index);
static void		ft_generate(char *s, char **result, size_t ind);

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**result;

	if (!s)
		return (NULL);
	if (*s == '\0')
	{
		result = (char **)malloc(sizeof(char *) * 1);
		if (!result)
			return (NULL);
		result[0] = NULL;
		return (result);
	}
	len = ft_counterpattern(s, c);
	result = (char **) malloc((len + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	ft_calculate(s, result, c);
	return (result);
}

static size_t	ft_counterpattern(char const *s, char c)
{
	size_t	i;
	size_t	counter;

	if (*s == '\0')
		return (0);
	i = 0;
	counter = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i -1] != c) && i != 0)
		{
			counter++;
		}
		i++;
	}
	if (s[i - 1] != c)
	{
		counter++;
	}
	return (counter);
}

static void	ft_calculate(char const *s, char **result, char c)
{
	int		ind;
	size_t	i;
	size_t	start;

	i = 0;
	start = i;
	ind = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && (s[i - 1] != c) && i != 0)
		{
			ft_generate(ft_substr(s, start, (i - start)), result, ind);
			ind++;
		}
		if (s[i] == c)
			start = i + 1;
		i++;
	}
	if (s[i - 1] != c && s[i - 1] != '\0')
	{
		ft_generate(ft_substr(s, start, (i - start)), result, ind);
		ind++;
	}
	result[ind] = NULL;
}

static void	ft_generate(char *s, char **result, size_t ind)
{
	result[ind] = s;
	if (!result[ind])
	{
		ft_freeresult(result, ind);
		return ;
	}
}

static void	ft_freeresult(char **result, int index)
{
	while (index >= 0)
	{
		free(result[index]);
		index--;
	}
	free(result);
}
