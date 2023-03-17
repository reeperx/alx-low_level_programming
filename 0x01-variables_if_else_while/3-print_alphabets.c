#include <stdio.h>
/**
* main - Outputs the alphabet in lowercase, and then in uppercase
* Description - Simple program
* Return: 0 Always
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
