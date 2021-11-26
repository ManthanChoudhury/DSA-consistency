#include<bits/stdc++.h>
using namespace std;

vector<int> PairSum(vector<int> arr,int sum){
    vector<int> result;
    for (size_t i = 0; i < arr.size(); i++)
    {
        for (size_t j = i+1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                result.push_back(arr[i]);
                result.push_back(arr[j]);
            }
            
        }
        
    }

    return result;
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