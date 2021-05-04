/*Given an array ‘A’ of sorted integers and another non negative integer k, find if there exists 2 indices i and j such that A[i] - A[j] = k, i != j.
Input : 
    A : [1 3 5] 
    k : 4
 Output : YES as 5 - 1 = 4 */





#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,i,j,k,*arr,flag = 0;
	
	printf("Enter the size of the array:");
	scanf("%d",&n);
	
	arr = (int*)malloc(n*sizeof(int));
	for(i = 0;i<n;i++)
	{
		scanf("%d",arr + i);
	}
	
	printf("Enter the element to find:");
	scanf("%d",&k);
	
    for(i = 0,j = 0;i < n && j<n;)
	{
		if(arr[j] - arr[i] == k && i!= j)
		{
			flag = 1;
			break;
		}
		else if(arr[j] - arr[i] <= k)
		{
			j++;
		}
		else 
		{
			i++;
		}
	}
	
	flag == 1 ? printf("1") : printf("0");
	return 0;

}
