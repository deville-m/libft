/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_basename.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/19 16:32:22 by mdeville          #+#    #+#             */
/*   Updated: 2017/12/19 16:39:15 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_basename(char *path)
{
	size_t i;

	if (!path || !*path)
		return (path);
	i = ft_strlen(path);
	while (i > 0 && path[i] != '/')
		i -= 1;
	return (path + i + 1);
}
