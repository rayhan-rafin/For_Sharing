#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,a,s,x;
    cin>>n>>k>>a;
    if (k%n==0){
        x=n;
    }
    else {
        x = k%n;
    }
    s= x + (a-1);
    if (s>n){
        s=s%n;
    }
    cout<<s<<endl;
    return 0;
}
