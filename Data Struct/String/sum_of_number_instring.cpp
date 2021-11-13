#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    int sum =0;
    for (char c : s)
    {
        if (c >= '0' && c<= '9')
        {
            sum += (c - '0');
        }
        
    }
    cout<<sum<<endl;
    
    return 0;
}