#include <iostream>
#include<stdio.h>
#include<map>
using namespace std;
const int maxn=200008;
int a[maxn];
map<int,bool>p;
int main()
{
    int n,m;
    int r=0;
    int l=0;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
    {
        int x;
        scanf("%d",&x);
        if(!p[x])
        {
            p[x]=true;
            a[++r]=x;
            if(r-l>m)
            {
                p[a[++l]]=false;
            }
        }
    }
    printf("%d\n",r-l);
    while(r>l)
    {
        printf("%d ",a[r--]);
    }
    return 0;
}