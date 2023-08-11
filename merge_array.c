//Q.Write a C Program to Merge two given arrays of same size and sorting it in descending order.
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

void insertion_sort(int a[], int n)
{
	// Using insertion sort for sorting the array in descending order
	
	int i = 1;
	int j = 0;
	int temp = 0;

	for(i = 1; i < n; i++)
	{
		temp = a[i];

		for(j = i -1; j >= 0; j--)
		{
			if(a[j] < temp)
			{
				a[j+1] = a[j];
			}
			else
				break;
		}

		a[j+1] = temp;
	}

	printf("Sorted Array : ");
	display(a,n); 

}

int main(int argc, char const *argv[])
{
	int a[50];
	int b[50];
	int n = 0;

	printf("Merge Array and Sort in Descending Order\n");
	printf("How many Elements you want to store in Array : ");
	scanf("%d", &n);

	accept(a,n);
	printf("First Array  : ");
	display(a,n);

	accept(b,n);
	printf("Second Array : ");
	display(b,n);

	int i = 0;
	int j = 0;

	for(i = n; i < n*2; i++, j++)
	{
		a[i] = b[j];
	}

	insertion_sort(a,n*2);// Call function

	return 0;
}
