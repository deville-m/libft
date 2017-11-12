/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rbnodenew.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 21:51:04 by mdeville          #+#    #+#             */
/*   Updated: 2017/11/10 10:54:04 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_rbnode	*ft_rbnodenew(void *content, size_t content_size)
{
	t_rbnode *new_elem;

	new_elem = (t_rbnode *)malloc(sizeof(t_rbnode));
	if (!new_elem)
		return (NULL);
	if (content)
		ft_memcpy(new_elem->content, content, content_size);
	new_elem->content_size = (content) ? content_size : 0;
	new_elem->color = NONE;
	new_elem->left = NULL;
	new_elem->right = NULL;
	return (new_elem);
}
