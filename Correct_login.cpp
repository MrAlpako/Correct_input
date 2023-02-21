#include <stdio.h>

int main()
{
	long long int pin1,pin2;
	printf("pin1=");
	scanf("%lli",&pin1);
	printf("pin2=");
	scanf("%lli",&pin2);

	if (((pin1 == 12) && (pin2 == 34)) || ((pin1 == 1111111111111111111) && (pin2 == 2222222222222222222)))
	{
		printf("OK");
	}
	else
	{
		printf("ERROR");
	}
}
