
2

3

4

5

6

7

8

9

10

11

12

13

14

15

16

17

18

19

20

21

22

23

24

25

26

#include<stdio.h>

 

int main()

{

	int a[50],i,n,large,small;

	printf("How many elements:");

	scanf("%d",&n);

	printf("Enter the Array:");

 

	for(i=0;i<n;++i)

		scanf("%d",&a[i]);

	

	large=small=a[0];

	for(i=1;i<n;++i)

	{

		if(a[i]>large)

			large=a[i];

		if(a[i]<small)

			small=a[i];

	}

	

	printf("The largest element is %d",large);

	printf("\nThe smallest element is %d",small);

 

	return 0;

}

