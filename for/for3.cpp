#include<iostream>
using namespace std;
int main()
{
    int i,fact=1,n;
    cout<<"Enter a Number: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"Factorial of "<<n<<" is "<<fact;
}
