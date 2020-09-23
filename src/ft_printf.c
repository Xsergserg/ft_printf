/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 17:37:35 by rbeach            #+#    #+#             */
/*   Updated: 2020/05/26 12:03:57 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	ft_varprint(t_printf *x, int index)
{
	int		i;
	t_spec	mod;

	if (!x->str[index])
	{
		write(x->fd, "%", 1);
		x->len++;
		return ;
	}
	ft_bzero(&mod, sizeof(mod));
	i = ft_flagparser(index, &mod, x);
	if ((ft_strchr("csdiupxX%", mod.spec)))
		ft_modifier(x, &mod);
	ft_strprinter(x, i + index + 1);
}

void		ft_strprinter(t_printf *x, int index)
{
	int i;

	i = 0;
	if (!(x->str[index]))
		return ;
	while (x->str[i + index])
	{
		if (x->str[i + index] == '%')
		{
			write(x->fd, &(x->str[index]), i);
			return (ft_varprint(x, i + index + 1));
		}
		x->len++;
		i++;
	}
	write(x->fd, &(x->str[index]), i);
}

int			ft_printf(const char *str, ...)
{
	t_printf	x;

	if (!str)
		return (0);
	ft_bzero(&x, sizeof(x));
	x.str = str;
	x.fd = 1;
	va_start(x.argptr, str);
	ft_strprinter(&x, 0);
	va_end(x.argptr);
	return (x.error ? -1 : x.len);
}

static void	ft_lencounter(char *currentstr, va_list list, int *len)
{
	while (currentstr)
	{
		currentstr = va_arg(list, char*);
		(*len) += ft_strlens(currentstr);
	}
}

char		*ft_strscat(char *first, ...)
{
	va_list	list;
	char	*currentstr;
	int		len;
	char	*result;

	currentstr = first;
	va_start(list, first);
	len = ft_strlens(first);
	ft_lencounter(currentstr, list, &len);
	va_end(list);
	if (!(result = malloc(len + 1)))
		return (NULL);
	va_start(list, first);
	ft_strlcpy(result, first, len);
	while (currentstr)
	{
		currentstr = va_arg(list, char*);
		ft_strlcat(result, currentstr, len + 1);
	}
	va_end(list);
	return (result);
}
