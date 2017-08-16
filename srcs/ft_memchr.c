/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdeville <mdeville@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/16 22:48:40 by mdeville          #+#    #+#             */
/*   Updated: 2017/08/16 23:03:34 by mdeville         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(void *s, int c, size_t n)
{
	unsigned char *ptr;
	unsigned char target;

	ptr = (unsigned char *)s;
	target = (unsigned char)c;
	while (n)
	{
		if (*ptr == target)
			return (ptr);
		ptr++;
		n--;
	}
	return (NULL);
}
