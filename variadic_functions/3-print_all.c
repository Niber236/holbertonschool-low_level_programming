#include "variadic_functions.h"
#include <stdarg.h>

/**
 * _putchar - affiche un caractère (déjà fourni par Holberton)
 * Prototype: int _putchar(char c);
 */

void print_number(int n)
{
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        num = -n;
    }
    else
        num = n;

    if (num / 10)
        print_number(num / 10);
    _putchar((num % 10) + '0');
}

void print_float(double f)
{
    int int_part = (int)f;
    double frac_part = f - int_part;
    int i;

    print_number(int_part);
    _putchar('.');
    if (frac_part < 0)
        frac_part = -frac_part;
    for (i = 0; i < 6; i++)
    {
        frac_part *= 10;
        _putchar(((int)frac_part % 10) + '0');
    }
}

/**
 * print_all - prints anything based on format
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
    va_list ap;
    unsigned int i = 0;
    char *s;
    char *sep = "";

    va_start(ap, format);

    while (format && format[i])
    {
        if (format[i] == 'c' || format[i] == 'i' ||
            format[i] == 'f' || format[i] == 's')
        {
            if (sep[0])
            {
                _putchar(',');
                _putchar(' ');
            }

            if (format[i] == 'c')
                _putchar(va_arg(ap, int));
            if (format[i] == 'i')
                print_number(va_arg(ap, int));
            if (format[i] == 'f')
                print_float(va_arg(ap, double));
            if (format[i] == 's')
            {
                s = va_arg(ap, char *);
                if (!s)
                {
                    _putchar('('); _putchar('n'); _putchar('i'); _putchar('l'); _putchar(')');
                }
                else
                {
                    while (*s)
                        _putchar(*s++);
                }
            }
            sep = ", ";
        }
        i++;
    }

    _putchar('\n');
    va_end(ap);
}
