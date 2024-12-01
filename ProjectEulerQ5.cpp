#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int size;
    int num=1,a;
    cin>>size;
    vector<int> vec(size);

    for(int i=0;i<size;i++)
    {
    cin>>vec[i];
    }
    for(int i=0;i<size;i++)
    { a=0; num=1;
        while(a!=vec[i])
        {
        a=0;
        for(int j=1;j<=vec[i];j++)
       {
        if(num%j==0)
        a++;
       }
       if(a==vec[i])
        cout<<num<<endl;
        num++;
        }
    }
}