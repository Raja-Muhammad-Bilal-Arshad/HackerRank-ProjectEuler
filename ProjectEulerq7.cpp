#include<iostream>
#include<vector>

using namespace std;
bool Primenumber_finder(int a)
{
    int b=0;
    for(int i=2;i<a;i++)
    {
        if(a%i==0)
        {
            b++;
        }
    }
        if(b==0)
        return 1;
        else
        return 0;
}
int main()
{
    int size;
    int b=0;
    int num=2;
    cin>>size;
    vector<int> vec(size);
    for(int i=0;i<size;i++)
    cin>>vec[i];
    for(int i=0;i<size;i++)
    { num=2;b=0;
        while(b!=vec[i])
        {
             if(Primenumber_finder(num)==1)
             b++;

             if(b==vec[i])
             {cout<<num<<endl;break;}
             num++;

        }
    }
    
}