#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opocodes of itself.
 * @argc: The number of arguments supplied to the prigram.
 * @argv: An array of pointers to the arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
int bytes, index;
int (*address)(int, char **) = main;
unsigned char opocode;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
bytes = atoi(argv[1]);
if (bytes < 0)
{
printf("Error\n");
exit(2);
}
for (index = 0; index < bytes; index++)
{
opocode = *(unsigned int *)adress;
printf("%.2x", opocode);
if (index == bytes - 1)
	continue;
printf(" ");
adress++;
}
printf("\n");
return (0);
}
