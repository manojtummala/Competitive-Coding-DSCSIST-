#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int T;
    cin>>T;
    while(T--)
    {
        int n,laddu=0;
        string nation;
        cin>>n>>nation;
        while(n--)
        {
            string str;
            cin>>str;
            int x;
            if(str=="CONTEST_WON")
            {
                cin>>x;
                laddu+=300;
                if(x<=20)
                {
                    laddu+=(20-x);    
                }
            }
            if(str=="TOP_CONTRIBUTOR")
            {
                laddu+=300;
            }
            if(str=="BUG_FOUND")
            {
                cin>>x;
                laddu+=x;
            }
            if(str=="CONTEST_HOSTED")
            {
                laddu+=50;
            }
        }
        
        //cout<<laddu<<"\n";
        
        if(nation=="INDIAN")
        {
            cout<<(laddu/200)<<"\n";
        }
        if(nation=="NON_INDIAN")
        {
            cout<<(laddu/400)<<"\n";
        }
    }
	return 0;
}
