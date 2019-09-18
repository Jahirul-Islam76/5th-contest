#include <bits/stdc++.h>
using namespace std;
int main()
{
    long int a1,b1,sum=0;
    cin>>a1>>b1;
    for(int i=a1;i<=b1;i++){
        if(i%2==1){
            sum=sum+i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
