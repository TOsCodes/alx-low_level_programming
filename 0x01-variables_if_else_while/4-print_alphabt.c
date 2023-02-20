 #include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";
	int vic;

	for (vic  = 0; vic < 24; vic++)
	putchar(alpha[vic]);
	putchar('\n');

return (0);
}
