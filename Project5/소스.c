#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double CelToFah(double c)
{
	return 1.8 * c + 32;
}
double FahToCel(double f)
{
	return  (f - 32) / 1.8;
}

int main(void)
{
	int sel;
	double num;
	printf("1.¼·¾¾¿¡¼­ È­¾¾, 2.È­¾¾¿¡¼­ ¼·¾¾ \n");
	printf(">>¼±ÅÃ\n ");
	scanf("%d", &sel);
	
	if (sel == 1)
	{
		printf("¼·¾¾À» ÀÔ·ÂÇÏ¼¼¿ä : \n");
		scanf("lf", &num);
		printf("º¯È­µÈ È­¾¾: %f \n", CelToFah(num));
	}
	else if (sel == 2)
	{
		printf("È­¾¾À» ÀÔ·ÂÇÏ¼¼¿ä : \n");
		scanf("lf", &num);
		printf("º¯È­µÈ ¼·¾¾: %f \n ", FahToCel(num));
	}
	else
	{
		printf("Àß¸ø ¼±ÅÃÇÏ¼Ì½À´Ï´Ù.");
	}
	return 0;
}