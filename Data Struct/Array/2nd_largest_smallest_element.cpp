#include<bits/stdc++.h>
using namespace std;
int second_smallest(vector <int> v, int n){
    int first = INT_MAX;
    int second = INT_MAX -1;
    for (size_t i = 0; i < n; i++)
    {
        if (first > v[i])
        {
            second = first;
            first = v[i];
        }
        else if (second > v[i])
        {
            second = v[i];
        }        
    }
    return second;

}

int second_largest(vector<int> v,int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN+1;
    for (size_t i = 0; i < n; i++)
    {
        if (max1 < v[i])
        {
            max2 = max1;
            max1 = v[i];
        }
        else if (max2 < v[i])
        {
            max2 = v[i];
        }
    }
    return max2;
    
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
    

    cout<<second_smallest(v,n)<<endl;
    cout<<second_largest(v,n)<<endl;

    
    return 0;
}