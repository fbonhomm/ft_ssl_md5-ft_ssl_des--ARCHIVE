/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base64_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonhomm <fbonhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 20:05:08 by fbonhomm          #+#    #+#             */
/*   Updated: 2018/11/26 21:51:17 by fbonhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ssl.h>

void	base64_init(t_base64 *s)
{
	s->opt_a = 0;
	s->len = 0;
	s->len_remain = 0;
	s->trans_data_len = 0;
	s->tmp_read_data_len = 0;
}
