#include<bits/stdc++.h>
using namespace std;
int main ()
{
    short int i,t,n,a,sum;
    cin>>t;
    for (i=1; i<=t; i++)
    {
        sum =0;
        cin>>n;
        while (n!=0)
        {
            cin>>a;
            if (a<0)
            {
                a=0;
            }
            sum =sum +a;
            n--;
        }
        cout<<"Case "<<i<<":"<<" "<<sum<<endl;
    }

    return 0;
}


