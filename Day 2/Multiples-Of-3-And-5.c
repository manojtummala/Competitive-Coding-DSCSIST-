#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t; 
    scanf("%d",&t);
    for(int a0 = 0; a0 < t; a0++){
        int n; 
        scanf("%d",&n);
        long int counter=0,i,j,k,t3,t5,t15;
        t3=(n-1)/3;//number of terms of 3
        t5=(n-1)/5;//number of terms of 5
        t15=(n-1)/15;//number of terms of 15
        i=t3*(6+(t3-1)*3);//formula for sum of an AP- Sum= n/2 x (2a+(n-1)d)
        j=t5*(10+(t5-1)*5);
        k=t15*(30+(t15-1)*15);
        counter=(i+j-k)/2;//counter stores the final ans. IDK why I named it that XD
        printf("%ld\n",counter);
    }
    return 0;
}