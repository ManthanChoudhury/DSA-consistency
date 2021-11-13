#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int ans = 1;

    if (n<0)
    {
        cout<<"XX";
    }
    else{
        for (int i = n; i > 0; i--)
        {
            ans = ans * i;
        }
        
    }
    

    cout<<ans<<endl;
    
    return 0;
}