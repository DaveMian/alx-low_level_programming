#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - programm will assign a random number to the variable n, each time excuted
 * print the last digit of the number stored in the variable n
 * Return: 0
 */
int main(void)
{
int n;
srand (time(0));
n = rand() - RAND_MAX / 2;
printf("Last digit of %d is %d", n, n % 10);
if (n % 10 > 5)
printf(" and is grater than 5\n");
else if (n % 10 == 0)
printf(" and is on 0\n");
else if (n % 10 < 6 && n % 10 != 0)
printf(" and is less than 6 and not 0\n");
return (0);
}