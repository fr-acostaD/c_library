/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta- <facosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:38:24 by facosta-          #+#    #+#             */
/*   Updated: 2024/09/25 11:44:07 by facosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*lstcheck;

	i = 0;
	lstcheck = lst;
	while (lstcheck)
	{
		i++;
		lstcheck = lstcheck->next;
	}
	return (i);
}
