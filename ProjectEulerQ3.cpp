
#include<iostream>
#include<vector>
using namespace std;
int primenumberfinder(int num);

void MAX_Prime_Factorfinder(int a);


int main()
{

    int num;
    cin>>num;
    vector<int> vec(num);
    for(int i=0;i<num;i++)
    cin>>vec[i];

    for(int i=0;i<num;i++)
    {
        MAX_Prime_Factorfinder(vec[i]);
        cout<<endl;
    }
}  

int primenumberfinder(int num)
{ 
    int a=0;
    for(int i=2;i<num;i++)
    {
        if(num%i==0)
        {
            a++;
        } 
    }
     if(a==0)
    {
        return num;
    }
    else
    return 0;

}

void MAX_Prime_Factorfinder(int a)
{
    int Checker;
    int MAX=0;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
      Checker=primenumberfinder(i);
      if(Checker!=0)
      {
        if(Checker>MAX)
        MAX=Checker;
      }
      
    }
    cout<<MAX;
}

