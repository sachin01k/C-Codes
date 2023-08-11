//Q.Write a C Program to Insert a New Element in sorted Array.

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

void insert(int a[], int n, int key)
{
	int lb = 0;
	int ub = n-1;

	while(lb <= ub)
	{
		int mid = (lb + ub) / 2;

		if(key < a[mid])
		{
			ub = mid -1;
		}
		if(key > a[mid])
		{
			lb = mid + 1;
		}
	}

	while(lb < n)
	{
		int temp = a[lb];
		a[lb++] = key;
		key = temp;
	}

	a[lb] = key;

	printf("Array After Insertion : ");
	display(a,n+1);
}



int main(int argc, char const *argv[])
{
	int a[50];
	int n = 0;
	int num = 0;

	printf("Insert New Element in Array\n");
	printf("How many Elements you want to store in Array : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Array  : ");
	display(a,n);

	printf("Enter the Element you want to insert : ");
	scanf("%d", &num);

	printf("OUTPUT\n");
	
	insert(a, n, num);

	return 0;
}
