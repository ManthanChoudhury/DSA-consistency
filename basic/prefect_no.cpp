#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans =0;
    for (size_t i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            ans += i;
        }
        
    }

    if (n == ans)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}