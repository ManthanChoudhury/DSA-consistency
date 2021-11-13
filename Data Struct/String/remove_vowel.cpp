#include<bits/stdc++.h>
using namespace std;
string extra_space(string s){
    string ans;
    for (char c : s)
    {
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' &&c != 'u' &&c != 'A' &&c != 'E' &&c != 'I' &&c != 'O' &&c != 'U')
        {
            ans.push_back(c);
        }
        
    }
    return ans;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    cout<<extra_space(s);
    
    return 0;
}