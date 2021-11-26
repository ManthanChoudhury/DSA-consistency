#include<bits/stdc++.h>
using namespace std;

vector<int> PairSum(vector<int> arr,int sum){
    
    sort(arr.begin(),arr.end());

    //! binary search

    int left = 0;
    int right = arr.size() -1;

    while (left < right)
    {
        int curr_sum = arr[left] + arr[right];

        if (curr_sum == sum)
        {
            return {arr[left] , arr[right]};
        }
        
        else if (curr_sum < sum )
        {
            left++;
        }
        
        else if (curr_sum > sum )
        {
            right --;
        }
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