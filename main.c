#include <stdio.h>
#include "main.h"

int main(void)
{
	int len, len2;

	len = _printf("This is a good day ");
	printf("Length of this: %d\n", len);
	len2 = printf("This is a good day ");
	printf("Length of this: %d\n", len2);

	len = _printf("This is a good day %c", '\0');
	printf("Length of this: %d\n", len);
	len2 = printf("This is a good day %c", '\0');
	printf("Length of this: %d\n", len2);

	len = _printf("%c", '\0');
	printf("Length of this: %d\n", len);
	len2 = printf("%c", '\0');
	printf("Length of this: %d\n", len2);

	return (0);
}
