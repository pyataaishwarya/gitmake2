#include<stdio.h>
//selectionsort1
void selectionsort(int a[],int n)
{
	int temp,pos,i,j;
	for(i=0;i<n-1;i++)
	{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(a[pos]>a[j])
				pos=j;
		}
		if(pos!=i)
		{
			temp=a[i];
			a[i]=a[pos];
			a[pos]=temp;
		}
	}
}
