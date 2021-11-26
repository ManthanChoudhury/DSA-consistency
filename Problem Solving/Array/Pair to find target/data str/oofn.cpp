#include<bits/stdc++.h>
using namespace std;

vector<int> PairSum(vector<int> arr,int sum){
    vector<int> result;
    unordered_set<int> s;

    for (size_t i = 0; i < arr.size(); i++)
    {
        int x = sum - arr[i];

        if (s.find(x) != s.end())
        {
            result.push_back(x);
            result.push_back(arr[i]);
            return result;
        }
        s.insert(arr[i]);
        
    }

    return {};
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> arr{10,5,2,3,-6,9,11};
    int sum = 4;
    auto p = PairSum(arr,sum);

    if (p.size() == 0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<p[0]<<","<<p[1]<<endl;
    }

    return 0;
}