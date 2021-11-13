#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int check = n;
    int fact =1;
    int ans =0;
    int last_digit = 0;
    while (n != 0 )
    {
        last_digit = n % 10;
        fact =1;
        for (size_t i = last_digit; i >= 1; i--)
        {
            fact = fact *i;
        }
        ans +=fact;
        n = n/10;
    }

    
    if (check == ans)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}