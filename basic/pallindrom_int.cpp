#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int check = n;
    int rev =0;
    do
    {
        int last_digit = n%10;
        rev = rev *10 + last_digit;
        n = n/10; 
    }
    while (n!=0);
    if (check == rev)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    
    return 0;
}