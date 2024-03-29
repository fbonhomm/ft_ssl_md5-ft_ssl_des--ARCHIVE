/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonhomm <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 23:09:00 by fbonhomm          #+#    #+#             */
/*   Updated: 2017/08/05 23:14:32 by fbonhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_strrev(char **s)
{
	int		i;
	int		j;
	char	c;

	i = -1;
	j = strlen((*s));
	while (++i < --j)
	{
		c = (*s)[i];
		(*s)[i] = (*s)[j];
		(*s)[j] = c;
	}
}
