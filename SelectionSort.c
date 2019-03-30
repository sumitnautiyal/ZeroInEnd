#include<stdio.h>
void sort(int *arr,int size)
{
	int i,j,temp;
	for (int i = 0; i < size; i++)
	{
		/* code */
		for (int j = i+1; j < size; j++)
		{
			/* code */
			if (arr[i]>arr[j])
			{
				/* code */
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}

/*Time complexity of algorithm is O(n^2) where n is the size of the array*/