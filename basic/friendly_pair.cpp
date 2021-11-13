#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,y;
    cin>>x>>y;
    int sum1 =0;
    int sum2 =0;
    for (size_t i = 1; i < x; i++)
    {
        if(x%i == 0){
            sum1 = sum1 +i;
        }
    }
    for (size_t i = 1; i < y; i++)
    {
        if(y%i == 0){
            sum2 = sum2 +i;
        }
    }
    if (sum1 == y &&  sum2 == x)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}