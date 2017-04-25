#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tem,count=0;
    cin>>n;

    int fingursum=0;
    for(int i=0;i<n;i++)
    {
        cin>>tem;
        fingursum+=tem;
    }
    n++;
    fingursum%=n;
    for(int i=1;i<=5;i++)
    {
        if(((fingursum+i)%n)==1)
            continue;
        count++;
    }

    cout<<count<<endl;

}
