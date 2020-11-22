#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int t, i;
	char s[1000];
	scanf("%d", &t);
	for(i=0; i<t; i++){
	    scanf("%s", s);
	    int half1[26]= {0};
	    int half2[26]= {0};
	    int len=strlen(s);
	    for(int j=0;j<len/2;j++){
	       int index=s[j]-'a';
	       half1[index]++;
	    }
	    for(int j=(len+1)/2;j<len;j++){
	      int index=s[j]-'a';
	      half2[index]++;
	    }
	    
	    int c = 0;
	    for(int j = 0; j<26; j++){
	        if(half1[j] != half2[j]){
	            c++;
	            break;
	        }
	    }
	    if(c==0){
	        printf("YES\n");
	    }
	    else
	        printf("NO\n");

	}

	return 0;
}

