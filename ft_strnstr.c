/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkerkeni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 16:25:16 by mkerkeni          #+#    #+#             */
/*   Updated: 2022/11/14 13:04:10 by mkerkeni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == '\0')
		return ((char *)haystack);
	i = 0;
	j = 0;
	while (i < len && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			while (needle[j] == haystack[i + j])
			{
				j++;
				if (!needle[j])
					return ((char *)haystack + i);
			}
		}
		i++;
	}
	return (NULL);
}
