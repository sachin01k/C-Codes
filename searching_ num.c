//Q.Write a C Program to Search second highest number in Array.

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

int second_high(int a[], int n)
{
	int i = 1;
	int j = n-2;
	int rmax = a[0];
	int lmax = a[n-1];

	while(i < j)
	{
		if(rmax < a[i])
		{
			rmax = a[i];	
		}
		if(lmax < a[j])
		{
			lmax = a[j];
		}
		i++;
		j--;
	}

	if(rmax < lmax)
	{
		return rmax;
	}

	else
	{
		return lmax;
	}
}

int main(int argc, char const *argv[])
{
	int a[50];
	int n = 0;

	printf("Insert New Element in Array\n");
	printf("How many Elements you want to store in Array : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Array  : ");
	display(a,n);

	printf("OUTPUT\n");
	
	int val = second_high(a, n);

	printf("%d is Second Highest value in Array\n",val);

	return 0;
}
