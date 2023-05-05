#include <stdio.h>
int main()
{
int pid[20],bt[20],p[20],wt[20],tat[20],twt,ttat,i,n,j,temp;
float awt,atat;
printf("Enter the no. of processes:\n");
scanf("%d",&n);
printf("enter the process id for each process:\n");
for (i=0;i<n;i++)
{
scanf("%d",&pid[i]);
}
printf("Enter the burst time for each process\n");
for(i=0;i<n;i++)
{
scanf("%d",&bt[i]);
}
printf("Enter the priority for each process\n");
for(i=0;i<n;i++)
{
scanf("%d",&p[i]);
}
for(i=0;i<n;i++)
  {
for(j=i+1;j<n;j++)
 {
 if(p[i]>p[j])
{
     temp=bt[i];
     bt[i]=bt[j];
     bt[j]=temp;
     temp=p[i];
     p[i]=p[j];
     p[j]=temp;
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
printf("Average turn qaround time is: %f",atat);

return 0 ;
}

OUT PUT
 

Enter the no.of processes:
5
enter the process id for each process:
1
2
3
4
5
Enter the burst time for each process:
1
3
2
5
4
Enter the priority for each process
4
2
1
3
5
Average waiting time is: 5.600000 Average turn around time is:8.600000


     





