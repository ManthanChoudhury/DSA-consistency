#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int rev = 0;
    
    
    while (n != 0)
    {
        int last_digit = n%10;
        rev = rev*10+last_digit;
        n = n/10;
    }
    cout<<rev<<endl;

    
    
    return 0;
}