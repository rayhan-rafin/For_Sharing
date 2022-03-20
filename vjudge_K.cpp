#include<bits/stdc++.h>
using namespace std;
int main ()
{
    short int i,t,m,l,s;
    cin>>t;
    for (i=1;i<=t;i++){
        cin>>m>>l;
        s = (m*4)+(abs(l-m)*4);
        s= s + 19;
        cout<<"Case "<<i<<":"<<" "<< s<<endl;
    }
    return 0;
}





