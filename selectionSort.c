#include <stdio.h>

int selectionSort(int arr[],int n)
{
    int i,j;
    for(i=0;i<n-1; i++)
    {
        int minpos=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[minpos] > arr[j])
            {
             minpos = j;
            }
        }
        
        int temp= arr[minpos];
        arr[minpos] = arr[i];
        arr[i] = temp;
    }

    for(i=0; i<n; i++)
    {
        printf("%d",arr[i]);
    }
}

int main()
{
    int arr[]={5,4,3,2,7,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
}