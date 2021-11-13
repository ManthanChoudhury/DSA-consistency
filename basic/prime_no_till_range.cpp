#include<bits/stdc++.h>
using namespace std;
void prime(int n){
    bool flag =0;
    for (size_t i = 2; i <=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            flag ++;
        }

    }
    if (flag ==0 )
    {
        cout<<n<<endl;
    }
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,e =0;
    cin>>s>>e;

    for (size_t i = s; i <= e; i++)
    {
        prime(i);
    }
        
    return 0;
}