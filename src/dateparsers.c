/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dateparsers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 18:52:40 by rbeach            #+#    #+#             */
/*   Updated: 2020/05/26 13:28:10 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static void	ft_charmod(t_printf *x, t_spec *mod)
{
	unsigned char c;

	c = va_arg(x->argptr, int);
	ft_specschr(c, x, mod);
}

static void	ft_intmod(t_printf *x, t_spec *mod)
{
	if (mod->spec == 'd' || mod->spec == 'i')
		mod->str = ft_itoagr(va_arg(x->argptr, int), 10);
	if (mod->spec == 'u')
		mod->str = ft_itoagr(va_arg(x->argptr, unsigned int), 10);
	if (mod->spec == 'x' || mod->spec == 'X')
		mod->str = ft_itoagr(va_arg(x->argptr, unsigned int), 16);
	if (mod->spec == 'p')
		mod->str = ft_itoagr(va_arg(x->argptr, long long int), 16);
	if (!(mod->str))
		return (ft_error(x));
	if (mod->str[0] == '0' && mod->str[1] == '\0' &&
	ft_strchr("diupxX", mod->spec) && mod->acc_id && !mod->acc)
		mod->str[0] = '\0';
	ft_specsint(x, mod);
	if (mod->minus)
		mod->str--;
	free(mod->str);
}

static void	ft_strmod(t_printf *x, t_spec *mod)
{
	char	*result;

	result = va_arg(x->argptr, char*);
	ft_specstr(result, x, mod);
}

void		ft_modifier(t_printf *x, t_spec *mod)
{
	if (mod->spec == 'c')
		return (ft_charmod(x, mod));
	if (mod->spec == 's')
		return (ft_strmod(x, mod));
	if (mod->spec == '%')
		return (ft_specschr('%', x, mod));
	if (ft_strchr("dipuxX", mod->spec))
		return (ft_intmod(x, mod));
}
