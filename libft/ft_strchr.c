/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ealbert <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:43:51 by ealbert           #+#    #+#             */
/*   Updated: 2015/11/30 19:07:24 by ealbert          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int			i;
	char		*str;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	if (s[i] != c)
		return (0);
	str = (char *)s;
	return (&str[i]);
}
