//Q.Write a C Program to find Smallest missing element from sorted array using
	//     input  0 1 3 4 5 6 7 9
	//     ouput  2

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

int missing_smallest_Element(int a[], int lb, int ub)
{	
	int mid = 0; 

	while(lb <= ub)
	{
		mid = (lb + ub)/ 2;

		if(a[mid] == mid)
		{
			lb = mid +1;	
		}
		else
		{
			ub = mid-1;
		}
	}

	if(lb > ub && a[lb] != lb)
		return lb;

	return -1;
}

int main(int argc, char const *argv[])
{
	int a[20];
	int n;
	int x; // ceiling of tobe finded.
	int ceiling = 0, floor = 0; // ceiling to return greatest or equal number than x and smallest in array.
								// floor returns value smallest or equal number than x and greatest in array.
	printf("Smallest Missing Element from Sorted Array\n");
	printf("How many Elements you want to store in Array 1 : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Array  : ");
	display(a,n);

	int val = missing_smallest_Element(a, 0, n-1);

	printf("OUTPUT\n");
	
	if(val != -1)
	{
		printf("%d is Smallest Missing Element\n",val);
	}
	else
	{
		printf("No Element is Missing from array!\n");
	}
	return 0;
}
