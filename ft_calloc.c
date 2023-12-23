/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahaarij <ahaarij@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 11:14:26 by ahaarij           #+#    #+#             */
/*   Updated: 2023/12/01 14:20:57 by ahaarij          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;

	if (size && (count > (UINT32_MAX / size)))
		return (NULL);
	result = malloc(size * count);
	if (!result)
		return (NULL);
	ft_bzero(result, size * count);
	return (result);
}
