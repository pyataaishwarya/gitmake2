#include<stdio.h>
#include<time.h>
void sort(int a[],int n);
void insertionsort(int a[],int n);
void mergesort(int a[],int d,int n);
void quicksort(int a[],int d,int n);
void selectionsort(int a[], int n);


void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void compare(int a[],int n)
{
	int tout[5]={0},i;
	for(i=0;i<n;i++)
	{
		tout[i]=a[i];
		if(a[i]!=tout[i])
			break;
	}
	if(i<5)
		printf("failed\n");
	else
		printf("success\n");
}
int main()
{
	int a[50],n,i,a1[50],b;
	double timespent;
	time_t begin,end;
	printf("enter number of elements:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		a1[i]=a[i];
	printf("enter option for sorting:\n");
	scanf("%d",&b);
	switch(b)
		{
			case 0:timespent=0.0;
			       begin=clock();
			       sort(a,n);
			       printf("sorted elements of array using bubble sort\n");
			       printarray(a,n);
			       end=clock();
			       compare(a1,n);
			       timespent=((double)(end-begin))/CLOCKS_PER_SEC;
			       printf("time taken for bubblesort in sec:%f\n",timespent);
			       break;	
			case 1:timespent=0.0;
                               begin=clock();
                               insertionsort(a,n);
			       printf("sorted elements of array using insertionsort\n"); 
                               printarray(a,n);
                               end=clock();
			       compare(a1,n);
                               timespent=((double)(end-begin))/CLOCKS_PER_SEC;
                               printf("time taken for insertionsort in sec:%f\n",timespent);
			       break;
			case 2:timespent=0.0;
                               begin=clock();
                               selectionsort(a,n);
                               printf("sorted elements of array using selectionsort\n");
                               printarray(a,n);
                               end=clock();
			       compare(a1,n);
                               timespent=((double)(end-begin))/CLOCKS_PER_SEC;
                               printf("time taken for selectionsort in sec:%f\n",timespent);
			       break;
			case 3:timespent=0.0;
                               begin=clock();
                               mergesort(a,0,n-1);
                               printf("sorted elements of array using mergesort\n");
                               printarray(a,n);
                               end=clock();
			       compare(a1,n);
                               timespent=((double)(end-begin))/CLOCKS_PER_SEC;
                               printf("time taken for mergesort in sec:%f\n",timespent);
			       break;
			case 4:timespent=0.0;
                               begin=clock();
                               quicksort(a,0,n-1);
                               printf("sorted elements of array using quicksort\n");
                               printarray(a,n);
                               end=clock();
			       compare(a1,n);
                               timespent=((double)(end-begin))/CLOCKS_PER_SEC;
                               printf("time taken for quicksort in sec:%f\n",timespent);
                               break;

		}
	return 0;
}	              
