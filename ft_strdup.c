/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: erigonza <erigonza@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:09:26 by erigonza          #+#    #+#             */
/*   Updated: 2024/01/20 13:20:36 by erigonza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*c;
	char		*c_s1;
	size_t		i;

	c_s1 = (char *)s1;
	c = (char *)malloc(ft_strlen(c_s1) + 1);
	if (!c)
		return (NULL);
	i = 0;
	while (c_s1[i] != '\0')
	{
		c[i] = c_s1[i];
		i++;
	}
	c[i] = '\0';
	return (c);
}
