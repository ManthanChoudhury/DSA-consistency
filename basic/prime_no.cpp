#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    bool flag =0;
    for (size_t i = 2; i <= sqrt(n); i++)
    {
        if (n%i == 0)
        {
            flag ++;
        }

    }
    if (flag ==0 )
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
    
    


    
    return 0;
}