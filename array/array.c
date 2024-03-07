#include<stdio.h>
int main()
{
	int n;
	printf("enter a number n:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0; i<n; i++)
	{
	int k;
	printf("enter a number k:");
	scanf("%d",&k);
	arr[i]=k;
	}
	 	int j=0;
		for(int i=0; i<n; i++)
		{
		if(arr[i]!=0)
		{
		arr[j]=arr[i];
		if(j!=i)
        	arr[i]=0;
        	j++;
		}     
		}
        for(int i=0; i<n; i++)
	{
	printf("%d ",arr[i]);
	}
return 0;
} 
