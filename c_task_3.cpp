#include<stdio.h>
#include<conio.h>
int main()
{
          int a,b,c,d,e;
          float f,g;
          
          printf("Enter the Marks Subject maths = ");
          scanf("%d",&a);
          printf("Enter the Marks Subject hindi = ");
          scanf("%d",&b);
          printf("Enter the Marks Subject punjabi = ");
          scanf("%d",&c);
          printf("Enter the Marks Subject english = ");
          scanf("%d",&d);
          printf("Enter the Marks Subject science = ");
          scanf("%d",&e);
          f=a+b+c+d+e;
          g=f/5;
         
          printf("\nTotal Marks = %f ",f);
          printf("\nAverage Marks = %f",g);
    return 0;
    }