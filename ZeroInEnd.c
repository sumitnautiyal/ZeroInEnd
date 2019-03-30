#include <iostream.h>
void compute(int *arr, int size)
{
	int *result;
	int i,j=0;
	result=(int *)malloc(size*sizeof(int));
	for(i=0;i<size;i++)
	{
		if(arr[i]!=0)
		{
		 	result[j++]=arr[i];
		 }
	}
	for(i=0;i<j;i++)
	{
		arr[i]=result[i];
	}
	for(i=j;i<size;i++)
	{
		arr[i]=0;
	}
	free (result);
}

