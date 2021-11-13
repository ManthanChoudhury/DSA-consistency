#include<bits/stdc++.h>
using namespace std;
int smallest_ele(vector<int> v,int n){
    int smallest = INT_MAX;
    for (size_t i = 0; i < n; i++)
    {
        if (smallest > v[i])
        {
            smallest = v[i];
        }
        
    }
    return smallest;
    
}

int largest_ele(vector<int> v,int n){
    int largest = INT_MIN;
    for (size_t i = 0; i < n; i++)
    {
        if (largest < v[i])
        {
            largest = v[i];
        }
        
    }
    return largest;
    
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int n;
    cin>>n;
    int x=0;
    for (size_t i = 0; i < n; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    cout<<*min_element(v.begin(),v.end())<<endl;
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<smallest_ele(v,n)<<endl;
    cout<<largest_ele(v,n)<<endl;


    
    return 0;
}