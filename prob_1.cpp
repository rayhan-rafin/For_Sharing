#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s,t,x,i;
    cin>>s>>t>>x;
    for (i=s; i!=t; i++)
    {
        if (i==24)
        {
            i=0;
        }
        if (i==x)
        {
            cout<<"Yes"<<endl;
            break;
        }
    }
    if (i==t){
        cout<<"No"<<endl;
    }
    return 0;
}

