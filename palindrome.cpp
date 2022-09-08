#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,j,m=1;
    cin>>n;
    char word[n];
    for (i=0; i<n;i++){
        cin>>word[i];
    }
    for (i=0,j=n-1; i<j ; i++,j--){
        if (word[i]!=word[j]){
            m=0;
            break;
        }
    }
    if (m==0){
        cout<<"NO";
    }
    else {
        cout<<"YES";
    }
    return 0;
}
