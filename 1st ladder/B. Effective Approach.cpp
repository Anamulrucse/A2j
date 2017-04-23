#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,tem,m;
    int arra[100000];
    vector<int>v1;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&tem);
        arra[tem]=i+1;

    }

    cin>>m;
    long long int sum1=0,sum2=0;
    while(m--)
    {
        scanf("%d",&tem);
        sum1+=arra[tem];
        sum2+=n-arra[tem]+1;



    }
    printf("%I64d %I64d\n",sum1,sum2);
}
