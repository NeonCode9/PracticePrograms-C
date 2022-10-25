#include<stdio.h>
int main()
{
	int num;
	printf("Enter your age: ");
	scanf("%d", &num);
	if (num >18)
	{
		printf("You are eligble to vote");
	}
	else
	{
		printf("You are not eligble to vote");
	}
	return 0;
}
