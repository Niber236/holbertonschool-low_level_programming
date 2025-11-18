#include "variadic_functions.h"
#include <stdio.h>

void print_all(const char * const format, ...)
{
va_list ap;
unsigned int i = 0, printed = 0;
char *s;

va_start(ap, format);
while (format && format[i])
{
if (printed)
printf(", ");
switch (format[i])
{
case 'c':
printf("%c", va_arg(ap, int));
printed = 1;
break;
case 'i':
printf("%d", va_arg(ap, int));
printed = 1;
break;
case 'f':
printf("%f", (double)va_arg(ap, double));
printed = 1;
break;
case 's':
s = va_arg(ap, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
printed = 1;
break;
default:
printed = printed;
}
i++;
}
printf("\n");
va_end(ap);
}
