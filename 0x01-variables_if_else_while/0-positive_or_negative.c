#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  * main - Generate random numbers to detect -ve or +ve
  *
  * Return: always (0)
  *
  */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is positive\n", n);
}
else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d negative\n", n);
}
return (0);
}
