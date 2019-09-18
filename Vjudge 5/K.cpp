#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,i,sum1=0;
    cin>>a;
    if(a>0)
     for(i=1;i<=a;i++){
    sum1+=i;
    }
    else if(a<=1)
     for(i=1;i>=a;i--){
            sum1+=i;
    }
    cout<<sum1<<endl;
    return 0;
}
