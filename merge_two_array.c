//Q.Write a C Program to Merge Two sorted arrays using.

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

void merge_two_array(int a[], int b[], int n1, int n2)
{
	int i = n1-1;
	int j = n2-1;
	int k = n1 + n2 - 1;

	while(i >= 0 || j >= 0)
	{
		if(j == -1)
		{
			a[k] = a[i];
			i--;
			k--;
		}
		else if (i == -1)
		{
			a[k] = b[j];
			j--;
			k--;
		}
		else if(a[i] >= b[j])
		{
			a[k] = a[i];
			i--;
			k--;
		}
		else
		{
			a[k] = b[j];
			j--;
			k--;
		}
	}
}

int main(int argc, char const *argv[])
{
	int a[50];
	int b[25];
	int n1 = 0;
	int n2 = 0;

	printf("Merge Two Arrays\n");
	printf("How many Elements you want to store in Array 1 : ");
	scanf("%d", &n1);

	accept(a,n1);
	printf("Array  : ");
	display(a,n1);
	
	printf("How many Elements you want to store in Array 2 : ");
	scanf("%d", &n2);

	accept(b,n2);
	printf("Array  : ");
	display(b,n2);

	printf("OUTPUT\n");
	printf("Arrays Merged\n");
	
	int n3 = n1 + n2;

	merge_two_array(a,b,n1,n2);
	display(a,n3);	

	return 0;
}
