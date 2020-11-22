#include <stdio.h>
#include<string.h>
int main(void) {
	int n,i,j,k,t;
	scanf("%d",&n);
	char a[n][10000000];
	for(i=0;i<n;i++)
	{
	    scanf("%s",a[i]);
	}
	for(i=0;i<n;i++)
	{
	    t=strlen(a[i])-1;
	    for(k=t;k>=0;k--)
	    {
	        if(a[i][k]=='0')
	        continue;
	        else
	        {
	            for(j=k;j>=0;j--)
	             {
	        
	                printf("%c",a[i][j]);
	             }printf("\n");
	             break;
	        }
	    }
	    
	    
	}
	return 0;
}