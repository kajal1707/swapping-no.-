#include<stdio.h>
 int main()
 {
 	int a,b;
 	printf("before swapping");
 	printf(" \n enter a =" );
 	scanf("%d",&a);
 	printf("\n enter b = ");
 	scanf("%d",&b);
 	a=a-b;
 	b=a+b;
 	a=b-a;    //swapping
 	printf("\n after swapping");
 	printf("\n a= %d",a);
 	printf("\n b= %d",b);
 	return 0;
 	
 }
