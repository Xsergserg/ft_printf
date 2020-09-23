/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flagparser.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 18:34:33 by rbeach            #+#    #+#             */
/*   Updated: 2020/05/26 13:24:58 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static int	ft_numlen(int n)
{
	int i;

	if (!n)
		return (1);
	i = 0;
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static int	ft_flagwidparser(int index,
t_spec *mod, t_printf *x, int m)
{
	char *str;

	ft_bzero(mod->flag, 6);
	str = (char*)x->str;
	while (ft_strchr("-0+ #", str[index + m]))
		m += ft_strcatchr(mod->flag, str[index + m]);
	if (str[index + m] == '*')
	{
		mod->width = va_arg(x->argptr, int);
		if (mod->width < 0 && !ft_strchr(mod->flag, '-'))
			ft_strcatchr(mod->flag, '-');
		mod->width = mod->width < 0 ? mod->width * (-1) : mod->width;
		m++;
	}
	if (ft_isdigit(str[index + m]))
	{
		mod->width = ft_atoi(&str[index + m]);
		m += ft_numlen(mod->width);
	}
	return (m);
}

static int	ft_accspecparser(int index,
t_spec *mod, t_printf *x, int m)
{
	char *str;

	str = (char*)x->str;
	if (str[index + m] == '.')
	{
		mod->acc_id = 1;
		m++;
	}
	if (str[index + m] == '*')
	{
		mod->acc = va_arg(x->argptr, int);
		if (mod->acc < 0)
			mod->acc_id = 0;
		mod->acc = mod->acc < 0 ? 0 : mod->acc;
		m++;
	}
	if (ft_isdigit(str[index + m]))
		mod->acc = ft_atoi(&str[index + m]);
	while (ft_isdigit(str[index + m]))
		m++;
	mod->spec = str[index + m];
	return (m);
}

int			ft_flagparser(int index, t_spec *mod, t_printf *x)
{
	int		i;

	i = ft_flagwidparser(index, mod, x, 0);
	i = ft_accspecparser(index, mod, x, i);
	if (!(ft_strchr("csdipuxX%", mod->spec)))
		return (i - 1);
	mod->zero_sym = (ft_strchr(mod->flag, '0') &&	(!ft_strchr(mod->flag, '-')) &&
	(!mod->acc_id || ft_strchr("sc%",mod->spec))) ? '0' : ' ';
	return (i);
}

void		ft_error(t_printf *x)
{
	x->error = 1;
}
