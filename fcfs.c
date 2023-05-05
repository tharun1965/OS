#include<stdio.h>
int main()
{
int pid[20],bt[20],wt[20],tat[20],ttat,twt,n,i;
float awt,atat;
 
printf("enter the number that processes:\n");
scanf("%d",&n);
printf("process id for each process:\n");
for(i=0;i<n;i++)
{
scanf("%d",&pid[i]);
}
printf("enter the burst time for each process:\n");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
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
printf("Avearage waiting time is: %f",awt);
printf("Average turn around time is: %f",atat);

return 0 ;
}

 
