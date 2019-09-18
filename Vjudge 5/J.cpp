#include <bits/stdc++.h>
using namespace std;
int main()
{
    int test1,num;
    cin>>test1;
    while(test1--){
        cin>>num;
        if(num == 0){ cout<<"No"<<endl;}
        else if (num %16 == 0) {cout<<"Yes"<<endl;}
        else              cout<<"No"<<endl;
    }
    return 0;
}
