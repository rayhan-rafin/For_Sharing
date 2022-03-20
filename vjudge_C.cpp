#include<bits/stdc++.h>
using namespace std;
int main ()
{
   unsigned short int x1,y1,x2,y2,i,t,c,a,b;
   cin>>t;
   for (i=1;i<=t; i++){
        cin>>x1>>y1>>x2>>y2;
        cin>>c;
        cout<<"Case "<<i<<":"<<endl;
        while(c!=0){
                cin>>a>>b;
        if (a>=x1 && a<=x2 && b>=y1 && b<=y2){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }
            c--;
        }
   }
   return 0;
}
