#include <stdio.h>

/* тема - конструкция ветвления */
/* https://github.com/by-axen/DZ-number-2 */

main() 

{
	int a,b;
	printf("a=");
	scanf("%i",&a);
	printf("b=");
	scanf("%i",&b);
	if(a>b)
	{
		printf("A bol'she");
	}
	else
	{
		if(a==b)
		{
			printf("A ravno B");
		}
		else
		{
			printf("B bol'she");
		}
}
}