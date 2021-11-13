#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int check =n;
    int sum =0;
    while (n > 0)
    {
        int last_digit = n%10;
        sum = sum +last_digit;
        n =n/10;
    }
    if (check%sum == 0)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}