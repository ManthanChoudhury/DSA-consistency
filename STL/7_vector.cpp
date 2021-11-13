#include<iostream>
#include<vector>
//? benfits
/*
int func()
{
    int arr[100];

    return arr; // This is not valid, and will generate an error
}
*/
/*
int func(){
    vector<int> v;
    /dynamic
    return v;//
}
Dynamic Size: 
Rich Library Functions:  like insert, delete, find, sort, etc. 
No need to pass size: 
*/
using namespace std;
//! application
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    v.push_back(60);
    v.push_back(70);

    cout<<v.capacity()<<" capacity"<<endl;
    v.push_back(80);
    v.push_back(90);
    v.push_back(100);
    v.push_back(110);
    v.push_back(120);
    cout<<v.capacity()<<" capacity"<<endl;
    cout<<v.size()<<" size"<<endl;


    vector<int> :: iterator j;

    for ( j = v.begin(); j != v.end(); j++)
    {
        cout<<(*j)<<" "<<endl;
    }
    

    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout<<(*i)<<" ";
    }

    v.pop_back();
    v.pop_back();

    for(int x : v){
        cout<<x<<" ";
    }

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;








    return 0;
}