/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   des_ecb_encrypt.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbonhomm <fbonhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/17 23:45:45 by fbonhomm          #+#    #+#             */
/*   Updated: 2018/11/26 19:50:41 by fbonhomm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_ssl.h>

void			des_ecb_encrypt(t_des *s)
{
	encrypt_des(s, s->buf, s->key);
}
