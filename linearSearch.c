#include <stdio.h>
#define N 10
    int main()
{
    int array[N],size,i,key;


    printf("Enter the size of array 1-10\n");
    scanf("%d", &size);

    printf("enter array\n ");

    for(i=0 ;i<size;i++)
    {
    scanf("%d",&array[i]);
    }

    printf("enter the key you want to search\n");
    scanf("%d",&key);


    for(i=0; i <= size;i++)
    {
        if(array[i] == key)
        {
            printf("key is found %d at index",i); 
            break;  
        }
       
         if(i==size)
        {
        printf("not found");
        }
    }   
   

}

