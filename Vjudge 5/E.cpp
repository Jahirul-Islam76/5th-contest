#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a1,b1;
    cin>>a1>>b1;
    if(a1==0 && b1==0)            cout<<"0"<<endl;
    else if(a1==0 && b1==1)       cout<<"1"<<endl;
    else if(a1==1 && b1==0)       cout<<"1"<<endl;
    else                        cout<<"0"<<endl;
    return 0;
}
