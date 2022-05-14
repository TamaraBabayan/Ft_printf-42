/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbabayan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 13:09:16 by tbabayan          #+#    #+#             */
/*   Updated: 2022/03/30 19:06:13 by tbabayan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"ft_printf.h"

static int	ft_strchr(const	char *s, char c)
{
	char	*ptr;
	char	c1;

	ptr = (char *)s;
	c1 = c;
	while (*ptr && *ptr != c1)
	{
		ptr++;
	}
	if (*ptr == c1)
		return (1);
	return (0);
}

int	ft_check_what(char c, va_list *args)
{
	int	len;

	len = 0;
	if (c == 'c')
		len += ft_putchar(va_arg(*args, int));
	else if (c == 's')
		len += ft_putstr(va_arg(*args, char *));
	else if (c == 'i' || c == 'd')
		len += ft_putnbr(va_arg(*args, int));
	else if (c == 'p')
		len += ft_putpoint(va_arg(*args, void *));
	else if (c == 'u')
		len += ft_unsigned(va_arg(*args, unsigned int));
	else if (c == 'x')
		len += ft_puthex(va_arg(*args, unsigned int), 0);
	else if (c == 'X')
		len += ft_puthex(va_arg(*args, unsigned int), 1);
	else if (c == '%')
		len += ft_putchar('%');
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	va_list	args;

	len = 0;
	if (!str)
		return (0);
	va_start(args, str);
	while (*str != '\0')
	{
		if (*str == '%')
		{
			str++;
			if (ft_strchr("csidpuxX%", *str))
				len += ft_check_what(*str, &args);
		}
		else
		{
			ft_putchar(*str);
			len++;
		}
		str++;
	}
	return (len);
}
