#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,i,max_count=0,count=0;
    cin>>n;
    char line[n];
    for (i=0;i<n;i++){
     cin>>line[i];
    }
    char first = line[0];
    for (i=0;i<n;i++){
        if (first==line[i]){
            count++;
        }
        else {
            first = line[i];
            count = 1;
        }
        if (count>max_count){
            max_count = count;
        }
    }
    cout<<max_count<<endl;
    return 0;
}
