#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    string ans;
    for (char c : s)
    {
        if ((c >= 'a' && c <= 'z') || (c>= 'A' && c <= 'Z') || c == '\0')
        {
            ans.push_back(c);
        }
        
    }
    cout<<ans;
    
    return 0;
}