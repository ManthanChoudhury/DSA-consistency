#include<bits/stdc++.h>
using namespace std;

string non_repeat(string s){
    string out;
    int f[256] = {0};
    for (char c: s)
    {
        f[c]++;
    }
    
    for (size_t i = 0; i < 256; i++)
    {
        if(f[i] == 1){
            out.push_back(char(i));
        }
    }
    
    return out;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    map<char,int> mp;

    for(char c: s){
        mp[c]++;
    }

    string ans;

    for (auto it = mp.begin(); it != mp.end() ; it++)
    {
        int key = it->second;
        if (key == 1)
        {
            ans.push_back(it->first);
        }
    }

    cout<<ans<<endl;
    cout<<endl;
    cout<<non_repeat(s)<<endl;

    
    return 0;
}