#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<vector<int>> vec;
    //? 4x4 matrix
    int n =5;
    for (size_t i = 0; i < 4; i++)
    {
        vector<int> v1;
        for (size_t j = 0; j < 4; j++)
        {
            v1.push_back(n);
            n+=5;
        }
        vec.push_back(v1);
        
    }

    //? displaying matrix
    for (size_t i = 0; i < vec.size(); i++)
    {
        for (size_t j = 0; j < vec[i].size(); j++)
        {
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}