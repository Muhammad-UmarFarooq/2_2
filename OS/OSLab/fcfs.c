#include <stdio.h>
int main()
{
int pid[15];
int bt[15];
int n;
printf("Enter the number of processes: ");
scanf("%d",&n);
printf("Enter process id of all the processes");
for(int i=0;i<n;i++)
{
scanf("%d",&pid[i]);
}
printf("Enter burst time of all processes: ");
for(int i=0;i<n;i++)
{
scanf("%d",&bt[i]);
}
int i,wt[n];
wt[0]=0;
// Calculating waiting time of each process
for(i=1;i<n;i++)
{
wt[i]=bt[i-1]+wt[i-1];
}
printf("Process ID /t Burst Time /t Waiting Time /t TurnAround Time\n");
float twt=0.0;
float tat=0.0;
for(i=0;i<n;i++)
printf("%d \t",pid[i]);
printf("%d \t",bt[i]);
printf("%d \t",wt[i]);

// Calculating and printing turnaround time of each process
printf("%d \t",bt[i]+wt[i]);
printf("\n");
