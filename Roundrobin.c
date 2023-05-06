INPUT:
#include<stdio.h>
int main()
{
	int pid[20],bt[20],at[20],temp[20],n,i,t,y,tat=0,wt=0,ct=0,count=0;
	float awt,atat;
	printf("enter the number of processes:\n");
	scanf("%d",&n);
	y=n;
	printf("enter the process id for each process:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&pid[i]);
	}
	printf("enter the arrival time for each process:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	printf("enter the burst time for each process:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	    temp[i]=bt[i];
	}
	printf("enter the time slot:\n");
	scanf("%d",&t);
	for(i=0;y!=0;)
	{
		if(temp[i]<=t && temp[i]>0)
		{
			ct=ct+temp[i];
			temp[i]=0;
			count=1;
		}
		else if (temp[i]>0)
		{
		   	temp[i]=temp[i]-t;
		 ct=ct+t;	
		}
		if(temp[i]==0 && count==1)
	    {
		y--;
		tat=tat+ct-at[i];
		wt=wt+ct-at[i]-bt[i];
		count=0;
	    }
        	if (i==n-1)
    	{
		i=0;
     	}
	   else if(at[i+1]<=ct)
 	 {
		i++;
   	 }
	   else
	 {
		i=0;
	 }
    }
     awt=(float)wt/n;
     atat=(float)tat/n;
     printf("average waiting time is :%f\n",awt);
     printf("average turn around time is:%f",atat);
     return 0;
}



OUTPUT:
enter the number of processes:
4
enter the process id for each process:
1
2
3
4
enter the arrival time for each process:
0
0
0
0
enter the burst time for each process:
4
1
8
1
enter the time slot:
1
average waiting time is :3.750000
average turn around time is:7.250000
--------------------------------
Process exited after 24.58 seconds with return value 0
Press any key to continue . . .
