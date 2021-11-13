#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    int len = s.length();
    for(int i =0;i< len;i++){
        if (i == 0 || i == (len -1))
        {
            s[i] = toupper(s[i]);
        }
        else if (s[i] == ' ')
        {
            s[i-1] = toupper(s[i-1]);
            s[i+1] = toupper(s[i+1]);
        }
        
        
    }

    cout<<s;
    return 0;
}