#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    for (size_t i = 1; i <= n; i++)
    {
        if (n%i == 0)
        {
            cout<<i<<endl;
        }
        
    }
    
    return 0;
}