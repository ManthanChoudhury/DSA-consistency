#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,x;
    cin>>n>>x;
    int ans =0;
    while (n>0)
    {
        int last_digit =n%10;
        if (last_digit == x)
        {
            ans++;
        }
        n=n/10;
        
    }

    cout<<ans<<endl;
    
    return 0;
}