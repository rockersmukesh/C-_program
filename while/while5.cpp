//print table of given number
#include<iostream>
using namespace std;
int main()
{
    int i=1,n,table;
    cout<<"Enter Number: ";
    cin>>n;
    while(i<=10)
    {
        table=i*n;
        cout<<n<<"*"<<i<<"="<<table<<endl;
        i++;
    }
}
