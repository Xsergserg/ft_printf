/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 17:37:32 by rbeach            #+#    #+#             */
/*   Updated: 2020/05/26 14:06:29 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H
# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct
{
	char		flag[6];
	int			width;
	int			acc;
	int			acc_id;
	int			acc_len;
	char		spec;
	char		zero_sym;
	int			len;
	int			minus;
	char		*str;
	char		*acc_syms;
	char		*wid_syms;
	char		*sign_syms;
}				t_spec;

typedef struct
{
	va_list		argptr;
	const char	*str;
	int			len;
	int			error;
	int			fd;
}	t_printf;

int				ft_printf(const char *str, ...);
int				ft_checker (t_printf *x);
void			ft_error(t_printf *x);
int				ft_flagparser (int index, t_spec *mod, t_printf *x);
void			ft_modifier(t_printf *x, t_spec *mod);
void			ft_resulter(char *result, t_printf *x);
void			ft_specsint(t_printf *x, t_spec *mod);
char			*ft_itoagrx(unsigned int n, t_spec *mod);
void			ft_intunmod(t_printf *x, t_spec *mod);
void			ft_specstr(char *result, t_printf *x, t_spec *mod);
void			ft_specschr(char sym, t_printf *x, t_spec *mod);
void			ft_strprinter(t_printf *x, int index);
char			*ft_strscat(char *first, ...);

#endif
