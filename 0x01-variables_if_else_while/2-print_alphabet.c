#include <stdio.h>
/**
* main - Outputs the alphabet in lowercase,
* Description - Simple program
* Return: 0 Always
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
