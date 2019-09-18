#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a1,b1,sum=0,i;
    cin>>a1>>b1;
    for(i=a1;i<=b1;i++){
        sum +=(i*i);
    }
    cout<<sum<<endl;
    return 0;
}
