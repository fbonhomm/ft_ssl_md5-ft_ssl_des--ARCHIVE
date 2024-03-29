/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   or_exclusif.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonhomm <fbonhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 22:51:18 by fbonhomm          #+#    #+#             */
/*   Updated: 2018/11/17 22:51:28 by fbonhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ssl.h>

void	or_exclusif(uint64_t key, uint64_t *ext)
{
	key >>= 16;
	*ext ^= key;
}
