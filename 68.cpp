#include<stdio.h>
int main()
{
    void digitsum();
	digitsum();
}
void digitsum()
{
	int n;
	printf("Enter a 4 digit number\n");
	scanf("%d",&n);
	int fd=n/1000;
	int ld=n%10;
	printf("The first and last digit of the no is %d and %d\n",fd,ld);
	int sum=fd+ld;
	printf("And their sum is %d",sum);
}