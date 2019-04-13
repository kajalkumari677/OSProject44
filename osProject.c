#include<stdio.h>
int main()
{
    int a,BurstTime[20],WaitingTime[20],TurnAroundTime[20],AvgWT=0,AvgTAT=0,i,j;
    printf("Enter total number of processes(maximum 20):");
    scanf("%d",&a);
    printf("\nEnter Process Burst Time\n");
    for(i=0;i<a;i++)
    {
        printf("P[%d]:",i+1);
        scanf("%d",&BurstTime[i]);
    }
 
    WaitingTime[0]=0;    //waiting time for first process is 0
 	
    //calculating waitimg time
    for(i=1;i<a;i++)
    {
         WaitingTime[i]=0;
        for(j=0;j<i;j++)
         WaitingTime[i]+=BurstTime[j];
    }
 
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
 
    //calculating turnaround time
    for(i=0;i<a;i++)
    {
        TurnAroundTime[i]=BurstTime[i]+WaitingTime[i];
        AvgWT+=WaitingTime[i];
        AvgTAT+=TurnAroundTime[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,BurstTime[i],WaitingTime[i],TurnAroundTime [i]);
    }
 
    AvgWT/=i;
    AvgTAT/=i;
    printf("\n\nAverage Waiting Time:%d",AvgWT);
    printf("\nAverage Turnaround Time:%d",AvgTAT);
 
    return 0;
}
