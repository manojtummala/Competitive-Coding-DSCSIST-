#include <bits/stdc++.h>

using namespace std;

int price [100000 + 10];
long long values [100000 + 10];   // use long long

int main()
{
    int n;
    long long ans = 0, tmp = 0;

    cin >> n;

    for(int i = 0; i < n; i++){
         cin >> price[i];
    }

    values[0] = 1;
                                        
    for(int i = 1; i < n; i++){         

        if(price[i] > price[i - 1]){

            values[i] = values[i - 1] + 1;  

        } else values[i] = 1;               
    }

    ans = values[n - 1];                

    for(int i = n - 2; i >= 0; i--){    

        if(price[i] > price[i + 1]){

            tmp = values[i + 1] + 1;        

        } else tmp = 1;                     

        ans += max(tmp, values[i]);   
        values[i] = tmp;
    }

    cout << ans;

    return 0;
}