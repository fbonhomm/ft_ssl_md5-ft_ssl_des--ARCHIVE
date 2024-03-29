/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/01 17:33:52 by fbonhomm          #+#    #+#             */
/*   Updated: 2015/06/26 19:04:37 by fbonhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	char	*s2;
	int		size;

	if (!s1)
		return (NULL);
	if (!(s2 = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	size = 0;
	while (s1[size])
	{
		s2[size] = s1[size];
		size++;
	}
	s2[size] = '\0';
	return (s2);
}
