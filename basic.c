#include <stdio.h>
#include <string.h>
#include <stdlib.h>


//#define N 50 //for mul program



int main()
{
    
//increment or decrement operator
    // int x = 10, y;
    //  y= ++x;
    // printf("prefix increment operator\n");
    // printf("%d\n",x);
    // printf("%d\n",y);

    // int z = 10, v;
    //  v = x++;
    // printf("postfix increment operator\n");
    // printf("%d\n",z);
    // printf("%d\n",v);

    // int b = 10, c;
    // c= --b;
    // printf("pre decremnt operator\n");
    // printf("%d\n",b);
    // printf("%d\n",c);

    // int d = 10, e;
    // e = d--;
    // printf("post decremnt operator\n");
    // printf("%d\n",d);
    // printf("%d\n",e);

//unformatted input funcation

    // char ch;
    // ch= getchar(); //read single character from the standard input device(keyword)
    // printf("%c",ch);

//switch case

    // int a,b;
    // char operator;

    // printf("enter operator(+,-,*,/) ");
    // scanf("%c",&operator);
    
    // printf("enter 1st no. ");
    // scanf("%d",&a);
    
    // printf("enter 2nd no. ");
    // scanf("%d",&b);

    // switch(operator){
    //     case '+': printf("sum is %d", a + b);
    //                 break;
    //     case '-': printf("substract  is %d", a - b);
    //                 break;
    //     case '/': printf("divide is %d", a / b);
    //                 break;
    //     case '*': printf("multiply is %d", a * b);
    //                 break;
    //     case '%': printf("modulo is %d", a % b);
    //                 break;
    //     default: 
    //                 printf("operation not valid");
    // }

//print a table

    // int number, i, table;
    // printf("enter number ");
    // scanf("%d",&number);

    // for(i=1;i<=10;i++){
    //     table = number*i;
    //     printf("%d\n",table);
    // }

//nested loop
    // for(int j=0; j<=5; j++){
    //     for(int i=0; i<=5; i++){
    //         printf("* ");
    //     }
    //     printf("\n");
    // }

//array

    // int a[5];
    // int i;

    // printf("enter array element\n");
    
    // for(i =0; i<5; i++){
    //     scanf("%d ", &a[i]);
    // }

    // for(i=5; i>=0; i--){
    //     printf("index = %d is %d\n  ",i,a[i]);
    // }

//wAP to calculate sum and average of student

    // int marks[5];
    // int sum=0, avg,i;
    // printf("enter values ");

    // for(i= 0; i<5; i++){
    //     scanf("%d", &marks[i]);
    //     sum =sum +marks[i];  //shortcut
    // }

    // // for(i=0; i<5; i++){
    // // sum = sum + marks[i];
    // // }
    // avg = sum/5;

    // printf("avg= %d \n sum= %d \n",avg,sum);

//WAP to array of 10 integer and count total even and odd elements
    
    // int array[10];

    // int even=0,odd=0;

    // printf("Enter 10 number to know how many odd and even  ");

    // for(int i=0; i<10; i++){
    //     scanf("%d",&array[i]);
    //     if(array[i]%2==0){
    //     even = even +1;   
    // }else{
    //     odd = odd + 1;
    // }
    // }
    // printf("%d even ",even);
    // printf("%d odd ",odd);
    
//WAP to read size of 5 array & store sum of these array in third array
    
    // int a[5], b[5],c[5];
    // int i;
    // printf("enter 5 values\n");
     
    // for(i= 0; i<5; i++){
    //     scanf("%d %d",&a[i]);
    // }
    // printf(" enter value\n");
    // for( i=0; i<5; i++){
    //     scanf("%d", &b[i]);
    //  }
    // for(i=0; i<5; i++){
    //     c[i] = a[i]+ b[i];
    //      printf("%d " , c[i]);
    // }
//2d array matrix & calculate sum

    // int i,j,sum=0, array[3][3];

    // printf("Enter values");
    // for(i=0; i<3 ;i++){
    //     for(j=0;j<3; j++){
    //         scanf("%d",&array[i][j]);
    //     }
    // }

    // printf("matrix is\n");

    // for(i=0; i<3; i++){
    //     for(j=0; j<3; j++){
    //     printf("%d ", array[i][j]);
        
    //     sum = sum + array[i][j]; 
        
    // }
    // printf("\n");
    // }
    
    //  printf("%d sum is ",sum);
   
//transpose a matrix

    // int a[3][2], i, j;

    // for(i =0; i<3; i++){
    //     for(j =0; j<2 ; j++){
    //         scanf("%d",&a[i][j]);
    //     }
    //     printf("\n");
    // }

    // for(i =0; i<2; i++){
    //     for(j =0; j<3 ; j++){
    //         printf("%d",a[j][i]);
    //     }
    //     printf("\n");
    // }

// program to print sum of invidual rows and column

    // int a[3][3],i,j,SR,SC;

    // printf("enter the values\n");

    // for(i=0; i<3; i++){
    //     for(j=0; j<3; j++){
    //         scanf("%d",&a[i][j]);
    //     }
    // }

    // for(i=0; i<3; i++){
    //     SR=SC= 0;
    //     for(j=0; j<3; j++){
    //     SR = SR + a[i][j];
    //     SC = SC + a[j][i];
    //     }
    //   printf("\nsum of 1st row = %d sum of column =  %d ", SR , SC);

    // }
     
//wap to print additon of two matrix

//     int a[3][3],b[3][4],i , j, sum[3][3];

//     printf("enter 1st 3*3 matrix \n ");

//     //read matrix
//     for(i =0; i<3; i++){
//         for(j =0; j<3; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("enter 1st 3*3 matrix \n ");
//      for(i =0; i<3; i++){
//         for(j =0; j<3; j++){
//             scanf("%d",&b[i][j]);
//         }
//     }
//     //print matrix
//     printf("1st matrix \n ");
//     for(i =0; i<3; i++){
//         for(j =0; j<3; j++){
//             printf("%d ",a[i][j]);
//         }
//         printf("\n");
//     }
//     printf("2nd matrix \n");
//     for(i =0; i<3; i++){
//         for(j =0; j<3; j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//    //addition of two matrix
//    printf("addition of two matric \n");
//     for(i =0; i<3; i++){
//         for(j =0; j<3; j++){  
//             sum[i][j] = a[i][j] + b[i][j];
//               printf("%d " , sum[i][j]);
//         }
//        printf("\n");
//     }

//mutiply of two matrix

//     int a[N][N],b[N][N],c[N][N]; // define macro in upper
//     int i,j,k, sum;
//     int m,n,p,q;

//     printf("enter the size of matrix\n");
//     scanf("%d%d",&m,&n);

//     printf("enter value of matrix\n");
//     for(i=0; i<m; i++){
//         for(j=0; j<n; j++){
//             scanf("%d",&a[i][j]);
//         }
//     }
//     printf("enter the size of 2nd matrix\n");
//     scanf("%d%d",&p,&q);

//     printf("enter the 2nd matrix\n");
//     for(i=0; i<p; i++){
//         for(j=0; j<q; j++){
//             scanf("%d",&b[i][j]);
//         }
//     }

//     printf("first matrix\n");
//     for(i=0; i<m; i++){
//         for(j=0; j<n; j++){
//             printf("%d ", a[i][j]);
//         }
//         printf("\n");
//     }

//     printf("second matrix\n");
//     for(i=0; i<p; i++){
//         for(j=0; j<q ; j++){
//             printf("%d ", b[i][j]);
//         }
//         printf("\n");
//     }
   
//    if(n!=p){    //logic
//      printf("can not multiply");
//    }else{
//     for(i=0; i<n; i++){
//         for(j=0; j<p; j++){
//             sum=0;
//             for(k=0; k<n; k++){
//                 c[i][j] = c[i][j]+ a[i][k] * b[k][j];
//             }
//              //c[i][j] = sum; //complimentary
//         }
//     }
//    }

//    printf("third matrix is \n");

//    for(i=0; i<n; i++){
//         for(j= 0; j<p; j++){
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//    }

//String

        // char name[10];
        // printf("enter name\n ");
        // scanf("%.5s", name);
        // printf("%s",name);
        // scanf("% 10.5", name);
        // puts(name);

//find the length of string

    // char name[20];
    // int len;
    // printf("enter name ");
    // gets(name);

    // len = strlen(name);
    // //printf("string length is %d",len);
    // //puts(len);

//without strlen fun count length

    // char name[30],i=0;
    // int len=0;

    // printf("enter name ");
    // gets(name);

    // while(name[i]!= '\0'){
    //      len++ ;
    //     i++;
    // }
    // printf("len without strlen %d ",len);

//conacatenation in string

    // char fname[15],lname[10];
    // //char con;
    // printf("enter name\n");
    // //gets(fname);
    // scanf("%s %s",fname,lname);
    // // printf("last name");
    // // gets(lname);
    // strcat(fname,lname);
     // printf("conact is %s", fname);

//without strcat concatenation
        // int len1,len2;
        // char fname[15],lname[15];

        // printf("enter fname ");
        // scanf("%s",fname);

        // printf("enter last name " );
        // scanf("%s",lname);

        // len1 = strlen(fname);
        // len2 = strlen(lname);

        // for(int i=0; i<len2; i++){
        //     fname[len1+i] = lname[i];
        // }
        // printf("concat is %s",fname);

//compare two string strcmp

        // int value;
        // char a[10]= "hii";
        // char b[10] = "Hii";

        // value = strcmp(a,b);

        // if(value == 0){
        //     printf("same\n");
        // }else{
        //     printf("not same\n");
        // }
        // printf("%d \n",value);

//without strcmp fn

        // int flag=0, i;
        // char a[10]="10";
        // char b[10]= "11";

        // for(i=0; a[i]!='\0' || b[i]!='\0';i++){
        //     if(a[i] != b[i]){
        //         flag =0;
        //         break;
        //     }
        // }
        // if(flag ==0 ){
        //     printf("not same");
        // }else{
        //     printf("same");
        // }

//reverse string 
        //  char temp;
        //  int l,i,j;
        // char name[10] = "nazish";
        //  l = strlen(name);

        //  /*for(int i=0; i<l/2; i++){
        //     temp = name[i];
        //     name[i] = name[l-1-i];
        //     name[l-1-i] = temp;
        //  }*/

        // for(i=0,j=l-1;i<j;i++,j--){
        //     temp = name[i];
        //     name[i] = name[l-1-i];
        //     name[l-1-i] = temp;
        // }
        // printf("%s",name);

//convert string from upper lowercase

        // char s1[10];
        // int i;

        // printf("enter string \n");
        // scanf("%s",s1);

        // for(i=0; s1[i] != '\0'; i++){
        //     if(s1[i] >= 'a' && s1[i] <='z'){
        //         s1[i] = s1[i] -32;
        //     }
            
        // }
        //  printf("string is %s",s1);
       
       
//Pointer
    // int a=10, b =a;
    // int *p, *q;
    // p =&a;
    // q=&b;
    // int c = *q;
    // *p= 20;
    // printf("value of a %d\n ",a);
    // printf("a %d",*p);
    // printf("address of a %x\n" ,&a );
    // printf("address of p %x\n", p);
    // printf("address of p %x\n", &p);
    // printf(" c= %d\n", c);
    // printf("address of a %x\n", a);
    // printf("address of p %x\n", p);

    // int a=10;
    // int *p= &a;
    // int **q= &p;
    // **q= 50;
    // int ***r =&q;

    // printf("%d  %d %d %d", a,*p,**q,***r);

    // return 0;

//pointer arithmetic

    // int a[5] = {1,0,-1,3,5};
    // int *p = &a[0];
 
    // printf("%d",*p);
    // p= p+1;
    // *p =2;
    // printf("%d",*p);

//pointer arithmetic substract

        // int a[5] ={0,2,3,-1,5};
        // int *p =&a[0];
        // int *q = &a[4];
        // int d =p-q;
        // int e = q-p;
        // printf("%d\n",d); //it tells how many element apart from this
        // printf("%d\n",e);
        // q = q-2;
        // printf("%d",*q); //it will give address
        // p =p-1;
        //  printf("%d",p);//garbage value

//pointer decrement/increment

        // int a[5]={3,2,67,0,56};
        // int *p;
        // p=a;
        // p++;
        // printf("post incre %d\n",*p);
        // printf("%d\n",*p);
        // ++p;
        // printf("pre incre%d",*p);
        // printf("%d\n",*p);

        //printf("%d %d %d", *--p, *--p,*--p);
        //printf("%d %d %d",--(*p),(*p)++,++(*p));

    //    printf(" pre incre %d\n",*++p);
    //     printf(" pre incre %d\n",*p);
        // printf(" post incre %d\n",*p++);
        // printf(" post incre %d\n",*p);

        // p= &a[3];
        // printf(" post decre %d\n",*p--);
        // printf(" post decre %d\n",*p);

       // p= &a[3];
        // printf(" pre decre %d\n",*--p);
        // printf(" pre decre %d\n",*p);


//problem in pointer

    // int a[7]={10,11,-1,56,67,5,4};
    // int *p,*q; 
    // p=a;

    // printf("%d\n",*p);
    //  printf("%d %d %d ",(*p)++,*p++,*++p);

//void pointer

            // void *vp;
            // int a=2; 
            // float b =2.0;
            // char c ='c';

            // vp =&a;
            // printf("a = %d\n",*(int *)vp);
            // vp =&b;
            // printf("b = %f\n",*(float *)vp);
            // vp =&c;
            // printf("c = %c\n",*(char *)vp);

//Null pointer
        // int *ptr = NULL;
        // printf("%d",ptr);

//Dangling Pointer

    // int *ptr;

    // {
    //     int a=9;
    //     ptr = &a;
    // } 
    //     printf("%d",*ptr);
    
    // int *ptr = (int *)malloc(sizeof(int));
    // *ptr =10;
    // printf("%d",*ptr);
    // *ptr = NULL;
    // printf("%d",ptr); //garbage
    

    

}