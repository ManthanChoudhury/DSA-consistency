#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    getline(cin,s);
    int len =0;
    for(char c: s){
        if (c != '\0')
        {
            len++;
        }
    }
    cout<<len<<endl;
    return 0;
}