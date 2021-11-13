#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unordered_map<char,int> umap1;
    unordered_map<char,int> umap2;

    string s;
    getline(cin,s);
    string d;
    getline(cin,d);

    for(char c : s){
        umap1[c]++;
    }

    for(char c : d){
        umap2[c]++;
    }

    int count =0;
    for (auto i = umap1.begin(); i != umap1.end(); i++)
    {
        for (auto j = umap2.begin(); j != umap2.end(); j++)
        {
            if (i->first == j->first)
            {
                if (i->second == j->second)
                {
                    count++;
                }
                
            }
            
        }
        
    }

    if (count == s.length() && count == d.length())
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    
    return 0;
}