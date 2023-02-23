#include <stdio.h>
int main()
{
int n,i=0,j,x,pos;
printf("Enter the size of bit strip\n");
scanf("%d",&n);
int a[n];
for(;i<=n;i++){
printf("enter the value 0 or 1 - ");
scanf("%d",&j);
a[i]=j;
}
for(i=0;i<=n;i++){
printf("[%d]",a[i]);
}
printf("\n");
int m=0,count=0;
for(m=0;m<=n;m++){
if (a[m]==1){
count=count+1;
Data Communication and Network: Experiment 2 2
if(count==6){
x=0;
pos=m;
n++;
for (m = n; m >= pos; m--){
a[m] = a[m - 1];
}
count=0;
a[pos] = x;
}
}
for(i=0,i≤n,i++)
{
printf(”[%d]”,a[i]);
}
return 0;
}
