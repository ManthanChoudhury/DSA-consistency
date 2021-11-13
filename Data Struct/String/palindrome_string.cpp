#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    int len = s.length();
    int same =0;
    int i;
    for (i = 0; i < s.length()/2; i++)
    {
        if(s[i] == s[len-i-1]){
            same ++;
        }
    }
    
    if (same == i)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}