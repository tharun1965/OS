#include <stdio.h>
int main()
{
int pid[20],bt[20],wt[20],tat[20],ttat,twt,n,i,j,temp;
float awt,atat;
printf("enter no.of process:\n");
scanf("%d",&n);
printf("enter the process id for each process:\n");
for(i=0;i<n;i++)
{
scanf("%d",&pid[i]);
}
printf("Enter the burst time for each process:\n");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
 {
  if(bt[i]>bt[j])
  {
    temp=bt[i];
    bt[i]=bt[j];
    bt[j]=temp;
   }
  }
}
wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=bt[i-1]+wt[i-1];
}
for(i=0;i<n;i++)
{
tat[i]=bt[i]+wt[i];
}
twt=0;
ttat=0;
for(i=0;i<n;i++)
{
twt=twt+wt[i];
ttat=ttat+tat[i];
}
awt=(float)twt/n;
atat=(float)ttat/n;
printf("Average waiting time is: %f",awt);
printf("Avearage turn around time: %f",atat);


return 0 ;
}

OUT PUT


enter no.of processes:
5
enter the processes id for each process:
1
2
3
4
5
enter the burst time for each process
10
29
3
7
12
Average waiting time is: 13.000000Average turn around time: 25.200001




