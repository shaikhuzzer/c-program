#include<stdio.h>
int main()
{
//	int j,i;
//	for(i=1;i<=3;i++)
//	{
//		for(j=1;j<=5;j++)
//	{
//		printf("*");
//	}
//	printf("\n");
//}
// int j,i;
// for(i=1;i<=3;i++)
// {
// 	for(j=1;j<=3;j++)
// 	{
// 		printf("%d",i);
//	 }
//	 printf("\n");
// }


for(i=1;i<=3;i++)
{
	for(k=1;k<=3-i;k++)
	{
     printf("#");	
}
     for(j=1;j<=i;j++)
     {
     	printf("*");
	 }
	 printf("\n");
}
}



