#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,d,sum,n,ar[10001];
    sum=0;
    cin>>n;
    for (i=0;i<10001;i++){
        ar[i]=0;
    }
    for (i=0;i<n;i++){
        cin>>d;
        ar[d]=!ar[d];
    }
    for (i=0;i<10001;i++){
        sum=sum+ar[i];
    }
    cout<<sum<<endl;
    return 0;
}
