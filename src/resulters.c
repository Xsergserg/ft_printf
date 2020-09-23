/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   resulters.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/17 15:21:31 by rbeach            #+#    #+#             */
/*   Updated: 2020/05/26 12:00:45 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void			ft_resulter(char *result, t_printf *x)
{
	int len;

	if (!result)
		return ;
	if (!*result)
		return ;
	len = ft_strlen(result);
	x->len += len;
	write(x->fd, result, len);
}

void			ft_resulterstr(char *result, t_printf *x, int len)
{
	x->len += len;
	write(x->fd, result, len);
}

void			ft_specstr(char *result, t_printf *x, t_spec *mod)
{
	int		len;
	char	null_res[7];
	char	*zerosyms;
	int		zero_len;

	ft_strlcpy(null_res, "(null)", 6);
	if (!result)
		result = null_res;
	len = ((ft_strlen(result) > mod->acc) && mod->acc_id) ?
	mod->acc : ft_strlen(result);
	if (ft_strchr(mod->flag, '-'))
		ft_resulterstr(result, x, len);
	zero_len = mod->width > len ? mod->width - len : 0;
	zerosyms = ft_symclone(mod->zero_sym, zero_len);
	write(x->fd, zerosyms, zero_len);
	free(zerosyms);
	x->len += (zero_len);
	if (!ft_strchr(mod->flag, '-'))
		ft_resulterstr(result, x, len);
	return ;
}

void			ft_specschr(char sym, t_printf *x, t_spec *mod)
{
	int		i;

	i = 0;
	if (ft_strchr(mod->flag, '-'))
		ft_resulterstr(&sym, x, 1);
	while (i++ < mod->width - 1)
		write(x->fd, &mod->zero_sym, 1);
	x->len += (i - 1);
	if (!ft_strchr(mod->flag, '-'))
		ft_resulterstr(&sym, x, 1);
	return ;
}
