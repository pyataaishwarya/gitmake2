#include<stdio.h>
//insertionsort12
void insertionsort(int a[],int n)
{
	int i,j,temp;
	for(i=0i;i<=n-1;i++)
	{
		j=i;
		while(j>0 && a[j-1]>a[j])
		{
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j--;
		}
	}

}
