#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int>pi;
int main()
{
    queue< pi >s;
    pair<int, int>foo;
    int n,m;
    scanf("%d%d",&n,&m);
    int k;
    int tem=0;
    while(n--)
    {
        scanf("%d",&k);
        tem++;
        s.push(make_pair(k,tem));
    }
    while(!s.empty())
    {
        foo=s.front();
        s.pop();
        if(foo.first<=m)
            k=foo.second;
        else
        {
            foo.first-=m;
            s.push(foo);
        }
        //cout<<k<<endl;
    }
    cout<<k<<endl;

}
