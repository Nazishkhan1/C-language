#include <stdio.h>

//recursion

// int display(int n)
// {
//     if(n<1)
//     {
//         return 0;

//     }else{
//         printf("%d",n);
//         display(n-1);
//         printf("%d",n);

//         return 0;
//     }

// }

int sum(int x)
{
    int s=0;
    if(x==1)
        return x;
    
    s = x + sum ( x-1);
    return s;
}
int main()
{
    // int n=3;
    // display(n);

    int a;
    a  = sum(5);
    printf("%d",a);

    return 0;

}