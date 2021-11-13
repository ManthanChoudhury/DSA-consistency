#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int base ;
    int exp;
    cin>>base>>exp;
    int ans =1;
    for (size_t i = 1; i <= exp ; i++)
    {
        ans *= base; 
    }
    
    cout<<ans<<endl;
    return 0;
}