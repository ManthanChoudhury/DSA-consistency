#include<bits/stdc++.h>
using namespace std;
void freq(string s){
    //!vector<int> f(size,value);
    vector<int> f(256,0);

    for (char c : s)
    {
        f[c]++;
    }

    for (size_t i = 0; i < 256; i++)
    {
        if (f[i] != 0)
        {
            cout<<char(i)<<" "<<f[i]<<endl;
        }
        
    }
    
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<char,int> mp;
    string s;
    getline(cin,s);
    for (char c: s)
    {
        mp[c]++;
    }

    for (auto it = mp.begin();it != mp.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }        

    cout<<endl;

    freq(s);
    return 0;
}