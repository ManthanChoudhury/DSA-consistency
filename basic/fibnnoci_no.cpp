#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int first = 0;
    int second = 1;
    int ans;
    int n ;
    cin>>n;
    for (size_t i = 0; i < n; i++)
    {
        if (i <= 1)
        {
            ans = i;
        }
        else
        {
            ans = first+second;
            first = second;
            second = ans;
        }
        cout<<ans<<endl;
        
    }
    
    
    return 0;
}