#include <stdio.h>
/**
* main - prints the alphabet in lowercase
* Description - A new line except q and e
* Return: 0 Always
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
