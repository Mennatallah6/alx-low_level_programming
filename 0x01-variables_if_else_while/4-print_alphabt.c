#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Description: lowercase
 * Return: 0 (success)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch == 'e' || ch == 'q')
ch++;
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
