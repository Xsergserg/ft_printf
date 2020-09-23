/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbeach <rbeach@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/18 18:24:30 by rbeach            #+#    #+#             */
/*   Updated: 2020/05/26 15:48:19 by rbeach           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/printf.h"
#include <stdio.h>

int	main(void)
{
	char line[] = "blabla";
	int or;
	int ft;

	ft_printf("Common tests\n\n");

				ft=ft_printf("long string with %s different types%s of values, %d%c%i, %x, %X, %p\n", "very", NULL, 15, '=', 15, 15, 15, line);
	or=printf("long string with %s different types%s of values, %d%c%i, %x, %X, %p\n", "very", NULL, 15, '=', 15, 15, 15, line);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

				ft=ft_printf("this number with stars %-*.*d|\n", 10, 5, 42);
	or=printf("this number with stars %-*.*d|\n", 10, 5, 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft_printf("Numeric tests\n\n");

				ft=ft_printf("this %d number %%d\n", 42);
	or=printf("this %d number %%d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

				ft=ft_printf("this %d number %%d\n", -42);
	or=printf("this %d number %%d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

				ft=ft_printf("this %.7d number %%.7d\n", 42);
	or=printf("this %.7d number %%.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %1.7d number %%1.7d\n", 42);
	or=printf("this %1.7d number %%1.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %7.7d number %%7.7d\n", 42);
	or=printf("this %7.7d number %%7.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %8.7d number %%8.7d\n", 42);
	or=printf("this %8.7d number %%8.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

				ft=ft_printf("this %+d number %%+d\n", 42);
	or=printf("this %+d number %%+d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %+.7d number %%+.7d\n", 42);
	or=printf("this %+.7d number %%+.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

	ft=ft_printf("this %+.7d number %%+.7d\n", 42);
	or=printf("this %+.7d number %%+.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %+1.7d number %%+1.7d\n", 42);
	or=printf("this %+1.7d number %%+1.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %+7.7d number %%+7.7d\n", 42);
	or=printf("this %+7.7d number %%+7.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %+8.7d number %%+8.7d\n", 42);
	or=printf("this %+8.7d number %%+8.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

				ft=ft_printf("this %.7d number %%.7d\n", -42);
	or=printf("this %.7d number %%.7d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %1.7d number %%1.7d\n", -42);
	or=printf("this %1.7d number %%1.7d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %7.7d number %%7.7d\n", -42);
	or=printf("this %7.7d number %%7.7d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %8.7d number %%8.7d\n", -42);
	or=printf("this %8.7d number %%8.7d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %d number %%d\n", -42);
	or=printf("this %d number %%d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %.7d number %%.7d\n", -42);
	or=printf("this %.7d number %%.7d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %1.7d number %%1.7d\n", -42);
	or=printf("this %1.7d number %%1.7d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %7.7d number %%7.7d\n", -42);
	or=printf("this %7.7d number %%7.7d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this %8.7d number %%8.7d\n", -42);
	or=printf("this %8.7d number %%8.7d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this %9.7d number %%9.7d\n", -42);
	or=printf("this %9.7d number %%9.7d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
				ft=ft_printf("this %10d number %%10d\n", -42);
	or=printf("this %10d number %%10d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this %-10d number %%-10d\n", -42);
	or=printf("this %-10d number %%-10d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this %010d number %%010d\n", -42);
	or=printf("this %010d number %%010d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this %0-10d number %%0-10d\n", -42);
	or=printf("this %0-10d number %%0-10d\n", -42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
		
		ft=ft_printf("this %-10d number %%-10d\n", 42);
	or=printf("this %-10d number %%-10d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this %0+10d number %%0+10d\n", 42);
	or=printf("this %0+10d number %%0+10d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this %0-+10d number %%0-+10d\n", 42);
	or=printf("this %0-+10d number %%0-+10d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this % d number %% d\n", 42);
	or=printf("this % d number %% d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this % .7d number %% .7d\n", 42);
	or=printf("this % .7d number %% .7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this % 1.7d number %% 1.7d\n", 42);
	or=printf("this % 1.7d number %% 1.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this % 2.7d number %% 2.7d\n", 42);
	or=printf("this % 2.7d number %% 2.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this % 7.7d number %% 7.7d\n", 42);
	or=printf("this % 7.7d number %% 7.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this % 8.7d number %% 8.7d\n", 42);
	or=printf("this % 8.7d number %% 8.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this % 9.7d number %% 9.7d\n", 42);
	or=printf("this % 9.7d number %% 9.7d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this % 10d number %% 10d\n", 42);
	or=printf("this % 10d number %% 10d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this % -10d number %% -10d\n", 42);
	or=printf("this % -10d number %% -10d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this %0 10d number %%0 10d\n", 42);
	or=printf("this %0 10d number %%0 10d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this %0- 10d number %%0- 10d\n", 42);
	or=printf("this %0- 10d number %%0- 10d\n", 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft =ft_printf("this |%.*d| number %%*d, * = -5\n", -5, 42);
	or=printf("this |%.*d| number %%*d, * = -5\n", -5, 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft =ft_printf("this |%*d| number %%*d, * = -5\n", -5, 42);
	or=printf("this |%*d| number %%*d, * = -5\n", -5, 42);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

	
	ft_printf("Zero tests\n\n");

				ft=ft_printf("this |%4.0d| zero %%4.0d\n", 0);
	or=printf("this |%4.0d| zero %%4.0d\n", 0);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this |%5.d| zero %%5.d\n", 0);
	or=printf("this |%5.d| zero %%5.d\n", 0);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this |%.d| zero %%.d\n", 0);
	or=printf("this |%.d| zero %%.d\n", 0);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this |%.1d| zero %%.1d\n", 0);
	or=printf("this |%.1d| zero %%.1d\n", 0);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%4.0x| zero hex %%4.0x\n", 0);
	or=printf("this |%4.0x| zero hex %%4.0x\n", 0);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this |%#5.x| zero hex %%#5.x\n", 0);
	or=printf("this |%#5.x| zero hex %%#5.x\n", 0);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this |%.x| hex zero %%.x\n", 0);
	or=printf("this |%.x| hex zero %%.x\n", 0);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this |%#.1x| hex zero %%#.1x\n", 0);
	or=printf("this |%#.1x| hex zero %%#.1x\n", 0);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#5x| zero hex %%#5x\n", 0);
	or=printf("this |%#5x| zero hex %%#5x\n", 0);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft_printf("String tests\n\n");

				ft=ft_printf("this |%32s| string %%32s\n", "test42test42");
	or=printf("this |%32s| string %%32s\n", "test42test42");
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%-32s| string %%-32s\n", "test42test42");
	or=printf("this |%-32s| string %%-32s\n", "test42test42");
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%-30.6s| string %%-30.6s\n", "test42test42");
	or=printf("this |%-30.6s| string %%-30.6s\n", "test42test42");
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%.6s| string %%.6s\n", "test42test42");
	or=printf("this |%.6s| string %%.6s\n", "test42test42");
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%-030.6s| string %%-030.6s\n", "test42test42");
	or=printf("this |%-030.6s| string %%-030.6s\n", "test42test42");
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%030.6s| string %%030.6s\n", "test42test42");
	or=printf("this |%030.6s| string %%030.6s\n", "test42test42");
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

	ft_printf("Char tests\n\n");

				ft=ft_printf("this |%c| char %%c\n", 'c');
	or=printf("this |%c| char %%c\n", 'c');
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%-32c| char %%-32c\n", 'c');
	or=printf("this |%-32c| char %%-32c\n", 'c');
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%-30.6c| char %%-30.6c\n", 'c');
	or=printf("this |%-30.6c| char %%-30.6c\n", 'c');
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%.6c| char %%.6c\n", 'c');
	or=printf("this |%.6c| char %%.6c\n", 'c');
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%-030.6c| char %%-030.6c\n", 'c');
	or=printf("this |%-030.6c| char %%-030.6c\n", 'c');
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%030.6c| char %%030.6c\n", 'c');
	or=printf("this |%030.6c| char %%030.6c\n", 'c');
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

	ft_printf("HEX tests\n\n");

		ft=ft_printf("this |%010x| hex number %%010x\n", -100);
	or=printf("this |%010x| hex number %%010x\n", -100);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#010x| hex number %%#010x\n", 500);
	or=printf("this |%#010x| hex number %%#010x\n", 500);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#x| hex number %%#x\n", 700);
	or=printf("this |%#x| hex number %%#x\n", 700);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%010X| hex number %%010X\n", -100);
	or=printf("this |%010X| hex number %%010X\n", -100);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#010X| hex number %%#010X\n", 500);
	or=printf("this |%#010X| hex number %%#010X\n", 500);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#X| hex number %%#X\n", 700);
	or=printf("this |%#X| hex number %%#X\n", 700);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%0 X| hex number %%#0 X\n", 15);
	or=printf("this |%0 X| hex number %%#0 X\n", 15);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |% 010X| hex number %%# 010X\n", 15);
	or=printf("this |% 010X| hex number %%# 010X\n", 15);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |% 3X| hex number %%# 3X\n", 15);
	or=printf("this |% 3X| hex number %%# 3X\n", 15);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#- 6X| hex number %%#- 6X\n", 15);
	or=printf("this |%#- 6X| hex number %%#- 6X\n", 15);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%010X| hex number %%010X\n", -100);
	or=printf("this |%010X| hex number %%010X\n", -100);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#010X| hex number %%#010X\n", 500);
	or=printf("this |%#010X| hex number %%#010X\n", 500);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#X| hex number %%#X\n", 700);
	or=printf("this |%#X| hex number %%#X\n", 700);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

	printf("Memory tests\n\n");

					ft=ft_printf("this |%010p| memory adress %%010p\n", line);
	or=printf("this |%010p| memory adress %%010p\n", line);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#010p| memory adress %%#010p\n", line);
	or=printf("this |%#010p| memory adress %%#010p\n", line);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#p| memory adress %%#p\n", line);
	or=printf("this |%#p| memory adress %%#p\n", line);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%0 p| memory adress %%#0 p\n", line);
	or=printf("this |%0 p| memory adress %%#0 p\n", line);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |% 010p| memory adress %%# 010p\n", line);
	or=printf("this |% 010p| memory adress %%# 010p\n", line);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |% 3p| memory adress %%# 3p\n", line);
	or=printf("this |% 3p| memory adress %%# 3p\n", line);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#- 6p| memory adress %%#- 6p\n", line);
	or=printf("this |%#- 6p| memory adress %%#- 6p\n", line);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%010p| memory adress %%010p\n", -100);
	or=printf("this |%010p| memory adress %%010p\n", -100);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#010p| memory adress %%#010p\n", line);
	or=printf("this |%#010p| memory adress %%#010p\n", line);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

		ft=ft_printf("this |%#p| memory adress %%#p\n", line);
	or=printf("this |%#p| memory adress %%#p\n", line);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
	ft=ft_printf("this |%#p| NULL memory adress %%#p\n", NULL);
	or=printf("this |%#p| NULL memory adress %%#p\n", NULL);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
	ft=ft_printf("this |%.3p| NULL memory adress %%.3p\n", NULL);
	or=printf("this |%.3p| NULL memory adress %%.3p\n", NULL);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this |%.p| NULL memory adress %%.p\n", NULL);
	or=printf("this |%.p| NULL memory adress %%.p\n", NULL);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this |%.8p| NULL memory adress %%.8p\n", NULL);
	or=printf("this |%.8p| NULL memory adress %%.8p\n", NULL);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
	ft=ft_printf("this |%8p| NULL memory adress %%8p\n", NULL);
	or=printf("this |%8p| NULL memory adress %%8p\n", NULL);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
	
		ft=ft_printf("this |%08p| NULL memory adress %%08p\n", NULL);
	or=printf("this |%08p| NULL memory adress %%08p\n", NULL);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);
		
		ft=ft_printf("this |%-8p| NULL memory adress %%-8p\n", NULL);
	or=printf("this |%-8p| NULL memory adress %%-8p\n", NULL);
	or == ft ? printf("OK\n\n") : printf("fail: ft: %d, or: %d", ft, or);

	ft_printf("Other tests\n\n");
		
	ft_printf("Sega test\n\n");
	ft_printf("%5 sega test %%5\n");
	ft_printf("%05");
	ft_printf("this %05 sega test %%05\n");
	ft_printf("%05");
	ft_printf("this %-05 sega test%%-05\n");
	ft_printf("%-05");
	ft_printf("this %-5 sega test %%-5\n");
	ft_printf("%-5");
	ft_printf("%*");


	return (1);
}
