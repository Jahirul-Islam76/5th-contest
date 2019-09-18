#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test,n;
    cin>>test;
    while(test--){
        cin>>n;
        if(n % 2==0)   cout<<n<<" is even"<<endl;
        else           cout<<n<<" is odd"<<endl;
    }
    return 0;
}
