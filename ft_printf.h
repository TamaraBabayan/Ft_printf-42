/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:06:26 by tbabayan          #+#    #+#             */
/*   Updated: 2022/03/30 18:49:09 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef  FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdlib.h>
# include	<stdarg.h>
# include	<unistd.h>
# include	<limits.h>

int	ft_printf(const char *x, ...);
int	ft_putchar(int c);
int	ft_putnbr(int n);
int	ft_putstr(char *s);
int	ft_putpoint(void *p);
int	ft_puthex(unsigned long n, int t);
int	ft_unsigned(unsigned int n);

#endif
