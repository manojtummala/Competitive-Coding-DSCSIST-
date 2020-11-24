#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    for(int k=0;k<T;k++)
    {
        int N,flag=0;
        scanf("%d",&N);
        if(N==1)
            {
                printf("1\n1 1\n");
                flag=1;
            }
        else if(N==2)
            {
                printf("1\n2 1 2\n");
                flag=1;
            }
        else if(N==3)
            {
                printf("1\n3 1 2 3\n");
                flag=1;
            }
        else if(N>3)
        {
            printf("%d\n3 1 2 3\n",N/2);
            for(int i=4;i<N-1;i=i+2)
                printf("2 %d %d\n",i,i+1);
        }
        if(N%2!=0&&flag==0)
            printf("2 %d %d\n",N-1,N);
        else if(N%2==0&&flag==0)
            printf("1 %d\n",N);
    }
}