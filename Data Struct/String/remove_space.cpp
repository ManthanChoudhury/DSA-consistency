#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    string ans;
    getline(cin,s);
    for (char c : s)
    {
        if(c != ' '){
            ans.push_back(c);
        }
    }
    cout<<ans<<endl;
    
    return 0;
}