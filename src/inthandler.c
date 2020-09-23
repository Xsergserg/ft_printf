/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inthandler.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 14:33:29 by rbeach            #+#    #+#             */
/*   Updated: 2020/05/26 17:14:25 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

static char	*ft_accint(t_spec *mod)
{
	int num;

	num = mod->acc - mod->len <= 0 ? 0 : mod->acc - mod->len;
	mod->acc_len = num;
	return (ft_symclone('0', num));
}

static char	*ft_widint(t_spec *mod)
{
	int num;
	int sign_len;

	sign_len = ft_strlen(mod->sign_syms);
	num = mod->width - (mod->acc_len + mod->len + sign_len) <= 0 ?
	0 : mod->width - (mod->acc_len + mod->len + sign_len);
	return (ft_symclone(mod->zero_sym, num));
}

static void	ft_strcalc(t_spec *mod, t_printf *x)
{
	char *result;

	if (ft_strchr(mod->flag, '-'))
		result = ft_strscat(mod->sign_syms, mod->acc_syms,
		mod->str, mod->wid_syms, NULL);
	else
	{
		if (mod->zero_sym == '0')
			result = ft_strscat(mod->sign_syms, mod->wid_syms,
			mod->acc_syms, mod->str, NULL);
		else if (mod->zero_sym == ' ')
			result = ft_strscat(mod->wid_syms, mod->sign_syms,
			mod->acc_syms, mod->str, NULL);
	}
	if (!result)
		return (ft_error(x));
	if (mod->spec == 'x' || mod->spec == 'p')
		ft_strlower(result);
	ft_resulter(result, x);
	free(result);
}

static void	ft_signdetector(t_spec *mod)
{
	mod->minus = 0;
	if ((ft_strchr(mod->flag, '#') && *mod->str != '0' && *mod->str &&
	ft_strchr("Xx", mod->spec)) || mod->spec == 'p')
		mod->sign_syms = ft_strdup("0X");
	else if (*mod->str == '-')
	{
		mod->minus = 1;
		mod->str++;
		mod->sign_syms = ft_strdup("-");
	}
	else if (ft_strchr(mod->flag, '+') && !ft_strchr("Xx", mod->spec))
		mod->sign_syms = ft_strdup("+");
	else if (ft_strchr(mod->flag, ' ') && !ft_strchr("Xx", mod->spec))
		mod->sign_syms = ft_strdup(" ");
	else
		mod->sign_syms = ft_strdup("");
}

void		ft_specsint(t_printf *x, t_spec *mod)
{
	ft_signdetector(mod);
	mod->len = ft_strlen(mod->str);
	if (!mod->sign_syms)
		return (ft_error(x));
	if ((mod->acc_syms = ft_accint(mod)))
	{
		if ((mod->wid_syms = ft_widint(mod)))
		{
			ft_strcalc(mod, x);
			free(mod->wid_syms);
		}
		else
			ft_error(x);
		free(mod->acc_syms);
	}
	else
		ft_error(x);
	free(mod->sign_syms);
}
