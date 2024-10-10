/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: facosta- <facosta-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:38:16 by facosta-          #+#    #+#             */
/*   Updated: 2024/09/25 17:21:44 by facosta-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*lstcheck;

	if (lst)
	{
		lstcheck = lst;
		while (lstcheck->next)
			lstcheck = lstcheck->next;
		return (lstcheck);
	}
	return (NULL);
}
