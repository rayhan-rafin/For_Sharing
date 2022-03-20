#include<bits/stdc++.h>
using namespace std;
int main ()
{
    unsigned short int t,x,s;
    cin>>t;
    while (t!=0)
    {
        cin>>x;
        s=x%4;
        if (s==0){
            cout<<"North"<<endl;
        }
        else if (s==1){
            cout<<"East"<<endl;
        }
        else if (s==2){
            cout<<"South"<<endl;
        }
        else {
            cout<<"West"<<endl;
        }
        t--;
    }
    return 0;
}



