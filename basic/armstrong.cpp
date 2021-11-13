#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int sum=1;
    int last_digit = 0;
    int check = n;
    while(n>0){
        last_digit = n%10;
        sum = sum + pow(last_digit,3);
        n = n/10;
    }
    if (sum == check)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}