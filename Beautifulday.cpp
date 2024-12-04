#include<iostream>
#include<cmath>
using namespace std;

int reverse(int num);

int main()
{
    int num,rev;
    cout<<"Enter your Number: ";
    cin>>num;
    reverse(num);
    rev=reverse(num);
    cout<<endl;
    cout<<rev; 
}
int reverse(int num)
{
     int b=0,rem=0,rev=0;
      b=num;
    while(b!=0)
    {
        rem=b%10;
        rev=rev*10+rem;
        b=b/10;
    }
    return rev;
}