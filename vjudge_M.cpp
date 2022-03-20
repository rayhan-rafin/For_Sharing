#include<bits/stdc++.h>
using namespace std;
int main ()
{
    long double h,m,hd,md;
    char c;
    cin>>h>>c>>m;
    if (h>=12.00){
        h=h-12.0;
    }
    md = (360.0/60.0)*m;
    hd = h*(360.0/12.0) + (30.0/60.0)*m;
    cout<<hd<<" "<<md<<endl;
}

