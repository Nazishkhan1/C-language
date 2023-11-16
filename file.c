#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    FILE *fp=NULL;
    char ch='a';

    fp= fopen("nanu.txt","w"); 

    if(fp == NULL)
    {
        printf("error");
        exit(1);
    }
    fputc(ch,fp);

    fclose(fp);

    //string

    FILE *fp1=NULL;
    int i;
    char str[10];

    fp1= fopen("nanu.txt","w"); 

    if(fp1 == NULL)
    {
        printf("error");
        exit(1);
    }
    printf("enter the string");
    gets(str);

    for(i=0; i!=strlen(str);i++)
        fputc(str[i],fp1);

    fclose(fp1);
}