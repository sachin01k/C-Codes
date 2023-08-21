//Q.Write a C Program to find ceiling of x number from sorted array using.

#include<stdio.h>

void accept(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("Enter Element : ");
		scanf("%d", &a[i]);
	}
}

void display(int a[],int n)
{
	for(int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\n");
}

void ceiling_of(int a[], int n, int x,int* ceiling, int* floor)
{
	//as array is sorted use binary search;

	int lb = 0; // lowerbound
	int ub = n - 1;// upperbound
	int mid = 0; 

	while(lb <= ub)
	{
		mid = (lb + ub)/ 2;

		if(a[mid] >= x)
		{
			ub = mid-1;
			*ceiling = a[mid];
		}
		else
		{
			lb = mid + 1;
			*floor = a[mid];
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[20];
	int n;
	int x; // ceiling of tobe finded.
	int ceiling = 0, floor = 0; // ceiling to return greatest or equal number than x and smallest in array.
								// floor returns value smallest or equal number than x and greatest in array.
	printf("Ceiling of X Number from Sorted Array\n");
	printf("How many Elements you want to store in Array 1 : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Array  : ");
	display(a,n);

	printf("Enter the Number to Check Ceiling : ");
	scanf("%d", &x);

	ceiling_of(a, n, x, &ceiling, &floor);

	printf("OUTPUT\n");
	printf("Ceiling and Floor of %d is %d and %d\n",x ,ceiling, floor);

	return 0;
}
