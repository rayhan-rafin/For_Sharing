#include<bits/stdc++.h>
using namespace std;
int main ()
{
    float h,m,hd,md,diff;
    cin>>h>>m;
    md = (360.0/60.0)*m;
    hd = h*(360.0/12.0) + (30.0/60.0)*m;
    diff = hd - md;
    diff = fabs(diff);
    if ( diff > 180){
        diff = 360 - diff;
    }
    cout<<diff<<endl;
}

