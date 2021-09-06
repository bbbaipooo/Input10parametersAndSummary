#include<stdio.h>
int main()
{
	int a[10],b=0;
	for (int i = 0; i < 10; i++)
	{
		scanf_s("%d",&a[i]);
	}
	printf("Data in array : ");
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	for (int j = 0; j < 10; j++)
	{
		b = b + a[j];
	}
	printf("\nsum=%d",b);
	
	return 0;
}