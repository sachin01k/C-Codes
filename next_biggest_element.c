//Q.Write a C Program to find Next Biggest element from sorted array using
	//     input  5 3 10 9 6 13
	//     ouput  10 10 13 13 13 -1

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

void next_biggest_element(int a[], int n)
{	
	int i,j;
	for( i = 0; i < n-1; i++)
	{
		for( j = i+1; j < n; j++)
		{
			if(a[i] < a[j])
			{
				break;
			}
		}

		printf("Next Biggest Element of %d is %d\n", a[i],a[j]);
	}

	printf("Next Biggest Element of %d is %d\n", a[i], -1);
}

int main(int argc, char const *argv[])
{
	int a[20];
	int n;
	printf("Next Biggest Element from Sorted Array\n");
	printf("How many Elements you want to store in Array 1 : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Array  : ");
	display(a,n);

	printf("OUTPUT\n");
	printf("Next Biggest Element of Array\n");
	next_biggest_element(a,n);

	return 0;
}
