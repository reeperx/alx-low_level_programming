#include <stdio.h>
/**
* main - Outputs the lowercase alphabet in reverse,
* Description - followed by a new line
* Return: 0 Always
*/
int main(void)
{
char ch;
for (ch = 'z'; ch >= 'a'; ch--)
{
putchar(ch);
}
putchar('\n');
return (0);
}
