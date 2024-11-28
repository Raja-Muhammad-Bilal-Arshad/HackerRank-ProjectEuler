#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

int main()
{
    int t,sum=0;
    cin>>t;
    vector<int >a(t);

    for(int i=0;i<t;i++)
    cin>>a[i];

    for(int i=0;i<t;i++)
    {   sum=0;
        for(int j=0;j<a[i];j++)
        {
            if(j%3==0 || j%5==0 )
            sum+=j;
        }
        cout<<sum<<endl;
    }
      
}