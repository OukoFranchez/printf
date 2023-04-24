#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(va_list parg);
int print_int(va_list parg);
int print_string(va_list parg);
int print_rev(char *s);
int _strlen(char *s);
int switch_case(char c, va_list parg);
int print_uint(va_list parg, int base);
int hexa_decimal(va_list parg, int base);

#endif
