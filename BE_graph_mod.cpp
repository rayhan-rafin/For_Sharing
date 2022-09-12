#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    float v[15];
    float id[15];
    cout<<"input vd :"<<endl;
    for (int i=0 ; i<15 ;i++)
    {
        cin>>v[i];
    }
    cout<<"input Id :"<<endl;
    for (int i=0 ; i<15 ;i++)
    {
        cin>>id[i];
    }
    for (int i=0; i<15;  i++)
    {
       cout<<i+1<<"    =    "<<v[i]*5 <<" - "<<id[i]*4<<endl; // change miltiplier(2) according to your need
    }
    return 0;
}
