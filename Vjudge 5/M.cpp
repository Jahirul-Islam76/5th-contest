#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n1,x,cn=0;
    cin>>n1;
    while(n1--){
       cin>>x;
       if(x<0)
       cn++;
    }
    cout<<cn<<endl;
    return 0;
}
