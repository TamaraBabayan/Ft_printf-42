/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 16:11:51 by tbabayan          #+#    #+#             */
/*   Updated: 2022/03/30 17:52:36 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

int	ft_puthex(unsigned long n, int t)
{
	int	len;

	len = 0;
	if (n > 15)
		len += ft_puthex(n / 16, t);
	n = n % 16;
	if (n > 9 && t == 0)
		len += ft_putchar(n + 87);
	else if (n > 9 && t == 1)
		len += ft_putchar(n + 55);
	else if (n < 10)
		len += ft_putchar(n + 48);
	return (len);
}
