#include<bits/stdc++.h>
using namespace std;
void armstrong_no(int i){
    int n = i;
    int last_digit;
    int ans = 0;
    while (i>0)
    {
        last_digit = i % 10;
        ans = ans+ pow(last_digit,3);
        i = i /10;
    }
    //cout<<n<<"\t"<<ans<<endl;
    if (n == ans)
    {
        cout<<ans<<endl;
    }
    
    

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int s,e;
    cin>>s>>e;
    for (size_t i = s; i <= e; i++)
    {
        armstrong_no(i);
    }
    
    return 0;
}