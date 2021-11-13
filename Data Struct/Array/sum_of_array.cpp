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
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        sum += v[i]; 
    }
    cout<<sum<<endl;
    
    return 0;
}