#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int sq = 0;
    bool flag =0;
    sq = n*n;
    while (n >0)
    {
        if (n % 10 != sq %10 )
        {
            flag =1;
            break;
        }
        n = n/10;
        sq = sq/10;
    }
    
    if (flag == 1)
    {
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }

    return 0;
}