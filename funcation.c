#include <stdio.h>
#include <string.h>



//funcation
//    int fact(void)
//     {
//     int fact=1,num;
//     printf("enter the num");
//     scanf("%d",&num);

//     for(int i=1; i<=num ; i++)
//     {
//         fact = fact*i;
//     }
//      printf("num  %d factorial is  %d",num,fact);

//     return 0;
//     }

//passing argument as array

    // int avg(int array[],int size){
    // int i,sum=0;
    // float avg;
    // printf("enter the size of array");
    // scanf("%d",&size);

    // printf("enter the element of array");
    // for(i=0; i<size; i++){
    //     scanf("%d",&array[i]);
    // }
    // for(i=0; i<size;i++){
    //     sum = sum + array[i];
    // }
    // printf("sum is %d",sum);
    // avg = sum/size;

   
    // printf("avg is %f",avg);
    // return 0;
       
    // }

//passing strinf as an argumnt

    int str(char name[]){
        printf("%s",name);
        return 0;
    }


   
int main()
{
    // int size,array[size];
   
    // avg(array,size);

    //fact();

        char name[] ="nazu";
        str(name);

       

    return 0;
}

     