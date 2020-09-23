# ft_printf
 
Function emulates printf() function from standart library. 
It uses only malloc, free, write, va_start, va_arg, va_copy, va_end external functions.


It manages the following conversions: cspdiuxX%, any combination of the following flags: ’-0.\*’ and minimum field
width with all conversions
