/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 13:27:23 by ahaarij           #+#    #+#             */
/*   Updated: 2023/11/06 14:43:29 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	j;
	unsigned int	i;
	char			*dest;

	i = 0;
	j = ft_strlen(s1);
	dest = (char *)malloc(sizeof(*dest) * (j + 1));
	if (!dest)
		return (NULL);
	while (i < j)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
