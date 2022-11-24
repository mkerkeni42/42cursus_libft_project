/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkerkeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 15:22:36 by mkerkeni          #+#    #+#             */
/*   Updated: 2022/11/24 15:54:59 by mkerkeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	int		i;

	i = 0;
	str = malloc(count * size);
	if (!str)
		return (NULL);
	if (size > SIZE_MAX / count)
		return (NULL);
	ft_memset(str, '\0', size * count);
	return (str);
}
