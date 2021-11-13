#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> v;
    int x =0;
    for (size_t i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
    }

    int start =0;
    int end = v.size() -1;

    for (size_t i = 0; i < n; i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}