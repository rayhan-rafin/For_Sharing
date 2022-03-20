#include<bits/stdc++.h>
using namespace std;
int main ()
{
    short int a,i,sum;
    sum =0;
    string s;
    cin>>s;
    a = s.size();
    for (i=0;i<a;i++){
        if (s[i]<=90){
            sum++;
        }
    }
    if (sum == a){
        for(i=0;i<a;i++){
            s[i] = s[i]+32;
        }
    }
    else if (s[0]>=97 && sum == (a-1)){
            s[0] = s[0] - 32;
        for (i=1;i<a;i++){
            s[i] = s[i] + 32;
        }
    }
    cout<<s<<endl;
    return 0;
}




