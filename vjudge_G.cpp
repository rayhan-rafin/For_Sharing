#include<bits/stdc++.h>
using namespace std;
int main ()
{
    unsigned short int i,x,test;
    cin>>test;
    for (i=0; i<test; i++)
    {
        cin>>x;
        if (1<=x && x<100){
            cout<<"Easy"<<endl;
        }
        else if (100<=x && x<200){
            cout<<"Medium"<<endl;
        }
        else {
            cout<<"Hard"<<endl;
        }
    }
    return 0;
}

