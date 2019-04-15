#include<conio.h>
#include<stdio.h>
int main()
{
 int a,Disk,sum=0,N,Arr[20],TM[20];
 printf("Enter the no. of location:\t");
 scanf("%d",&N);
 printf("Enter the position of head:\t");
 scanf("%d",&Disk);
 printf("Enter the elements of disk queue:\n");
 for(a=0;a<N;a++)
 {
 scanf("%d",&Arr[a]);
 TM[a]=Disk-Arr[a];
 if(TM[a]<0)
 {
 TM[a]=Arr[a]-Disk;
 }
 Disk=Arr[a];
 sum=sum+TM[a];
 }
 printf("\nTotal movement of cylinder-> %d",sum);
 getch();
 return 0;
}

