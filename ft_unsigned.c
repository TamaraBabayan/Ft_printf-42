/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:36:01 by tbabayan          #+#    #+#             */
/*   Updated: 2022/03/30 19:12:39 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n > 9)
		len += ft_unsigned(n / 10);
	n = n % 10;
	if (n < 10)
		len += ft_putchar(n + 48);
	return (len);
}
