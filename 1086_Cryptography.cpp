#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

#define MX 170001
bool num[MX];
int main ()
{
    int i,j,t;
    int n = sqrt(MX);
    vector<int>prime;
    num [0] = true;
    num [1] = true;
    for (i=3; i<n; i=i+2)
    {
        if (num[i]==false)
        {
            for (j=2*i; j<MX; j=j+i)
            {
                num[j]=true;
            }
        }
    }
    prime.push_back(2);
    for (i=3;i<MX;i=i+2){
        if(num[i]==false){
            prime.push_back(i);
        }
    }
    //cout<<prime.size()<<endl;
    cin>>t;
    int input[t];
    for(i=0;i<t;i++){
        cin>>input[i];
    }
    for(i=0;i<t;i++){
        cout<<prime[input[i]-1]<<endl;
    }
    return 0;
}
