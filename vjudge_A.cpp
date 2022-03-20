#include<bits/stdc++.h>
using namespace std;
int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie (0);

    unsigned long long int n;
    unsigned int t;
    cin>>t;
    while (t!=0)
    {
        cin>>n;
        cout<<(3 + (n-3)*n)<<endl;
        t--;
    }
    return 0;
}
