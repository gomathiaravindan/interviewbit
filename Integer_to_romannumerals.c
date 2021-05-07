## Given an integer A, convert it to a roman numeral, and return a string corresponding to its roman numeral version

#include<stdio.h>
#include<string.h>
int main()
{
	char *roman[14] = {"I","IV","V","IX","X","XL","L","XC","C","XD","D","XM","M"};
	int n,i,rem,values[] = {1,4,5,9,10,40,50,90,100,400,500,900,1000};
	printf("Enter the integer:");
	scanf("%d",&n);
	i = 12;
	while(n > 0)
	{
		int rem = n/values[i];
		n = n % values[i];
		while(rem--)
		{
			printf("%s",roman[i]);
		}
		i--;
	}
	return 0;
	
}
