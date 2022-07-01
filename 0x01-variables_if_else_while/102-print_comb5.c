#include <stdio.h>
/**
<<<<<<< HEAD
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
=======
* main - prints all possible combinations of two two-digit numbers
* Return: 0
*/
>>>>>>> 85d71601f07dc7d281687fe027049f686f004d77
int main(void)
{
int i, j;
for (i = 0; i < 100; i++)
{
for (j = 0; j < 100; j++)
{
if (i < j)
{
putchar((i / 10) + 48);
putchar((i % 10) + 48);
putchar(' ');
putchar((j / 10) + 48);
putchar((j % 10) + 48);
if (i != 98 || j != 99)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
