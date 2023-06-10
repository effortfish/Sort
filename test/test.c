#include<stdio.h>

//bubble_Sort
void bubble_Sort(int arr[], int length)
{
	int index = 0;
	int temp = 0;
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
}

//selection_Sort
void selection_Sort(int arr[], int length)
{
	int min_index = 0;
	for (int i = 0; i < length - 1; i++)
	{
		min_index = i;
		for (int j = i + 1; j < length; j++)
		{
			if (arr[j] < arr[min_index])
			{
				min_index = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min_index];
		arr[min_index] = temp;
	}
}

//Print
void Print(int arr[], int length)
{
	for (int index = 0; index < length; index++)
	{
		printf("%d ", arr[index]);
	}
}

//insertion_Sort
void insertion_Sort(int arr[] ,int length)
{
	int temp = 0;
	for (int i = 1; i < length; i++)
	{
		int preIndex = i - 1;
		int current = i;
		if(arr[current] > arr[preIndex])
		{
			continue;
		}
		while (preIndex >= 0 && arr[preIndex] > arr[current])
		{
			temp = arr[preIndex];
			arr[preIndex] = arr[current];
			arr[current] = temp;
			current--;
			preIndex--;
		}
		current = i;
	}
}

int main()
{
	int arr[10]={2,1,3,4,10,8,777,666,555,1000};
	int length = sizeof(arr) / sizeof(arr[1]);
	bubble_Sort(arr, length);
	Print(arr, length);
	printf("\n");
	selection_Sort(arr, length);
	Print(arr, length);
	printf("\n");
	insertion_Sort(arr, length);
	Print(arr, length);
	return 0;
}