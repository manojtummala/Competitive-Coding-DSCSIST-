#include<stdio.h>
#include<stdlib.h>
//#include<limits.h>
int fastread()
{
int input;
char c=0;
while (c<33) c=getchar_unlocked();
input=0;
while (c>33)
{
input=input*10+c-'0';
c=getchar_unlocked();
}
return input;
}

int main()
{
int t=fastread();
int n,count,prev,cur,i;
while(t--)
{
n=fastread();
count=1;
prev=fastread();
for(i=1;i<n;i++)
{
cur=fastread();
if(prev>=cur)
{count++;
prev=cur;
}
}
printf("%d\n",count);
}
return 0;
}
