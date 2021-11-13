#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int sum =0;
    while (n>0)
    {
        int last_digit = 0;
        last_digit = n%10;
        sum = sum +last_digit;
        n = n/10;
    }
    cout<<sum;
    
    
    return 0;
}