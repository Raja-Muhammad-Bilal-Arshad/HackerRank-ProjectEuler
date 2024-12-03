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
    int sum;
    int size;
    int b=0;
    int num=2;
    cin>>size;
    vector<int> vec(size);
    for(int i=0;i<size;i++)
    cin>>vec[i];
    for(int i=0;i<size;i++)
    { sum=0;
       for(int j=2;j<=vec[i];j++)
       {
           if(Primenumber_finder(j)==1)
           sum+=j;
       }
         cout<<sum<<endl;

    }
    
}