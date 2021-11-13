#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    string ans;
    getline(cin,s);
    for(char c: s){
        if (c >= 'A' && c <= 'Z')
        {
            c = c+32;
            ans.push_back(c);
        }
        else if (c>='a' && c<='z')
        {
            c =c-32;
            ans.push_back(c);
        }
    }
    cout<<ans;
    
    return 0;
}