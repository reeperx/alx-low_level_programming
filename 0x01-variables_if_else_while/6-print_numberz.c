#include <stdio.h>
/**
* main - Outputs all single digit numbers of base 10 starting from 0,
* Description - A new line using putchar
* Return: 0 Always
*/
int main(void)
{
int n;
for (n = 48; n < 58; n++)
{
putchar(n);
}
putchar('\n');
return (0);
}
