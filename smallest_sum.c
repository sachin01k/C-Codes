//Q.Write a C Program to find elements whose sum is smallest close to zero.
	// input  : 38 44 -35 -46
	// output : [44,-46]

#include<stdio.h>
#include<stdlib.h>

struct data
{
	int num1;
	int num2;
};

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

struct data smallest_sum(int a[], int n)
{	
  // Returns elements whose sum is closest to zero.
	struct data s;
	int i,j, sum = 0;
	int temp = a[0]; 

	for( i = 0; i < n-1; i++)
	{
		for( j = i+1; j < n; j++)
		{
			sum = abs(a[i] + a[j]);
			if(sum < temp)
			{
				temp = sum;
				s.num1 = a[i];
				s.num2 = a[j];
			}
		}
	}
	return s;
}

int main(int argc, char const *argv[])
{
	struct data s;
	int a[20];
	int n;

	printf("Return Elements whose sum is closest to zero Array\n");
	printf("How many Elements you want to store in Array : ");
	scanf("%d", &n);

	accept(a,n);
	printf("Array  : ");
	display(a,n);

	printf("OUTPUT\n");
	printf("Smallest sum close to zero : ");
	s = smallest_sum(a,n);
	printf("[ %d, %d]", s.num1, s.num2);

	return 0;
}
