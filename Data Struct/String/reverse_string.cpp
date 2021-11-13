#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    for (int i = s.length()-1; i >= 0; i--)
    {
        cout<<s[i];
    }
    
    return 0;
}