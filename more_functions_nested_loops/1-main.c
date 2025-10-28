/* 1-main.c */
#include "main.h"
#include <stdio.h>

int main(void)
{
char c;

c = '0';
printf("%c: %d\n", c, _isdigit(c));
c = 'a';
printf("%c: %d\n", c, _isdigit(c));
c = '9';
printf("%c: %d\n", c, _isdigit(c));
c = 'A';
printf("%c: %d\n", c, _isdigit(c));
return (0);
}
