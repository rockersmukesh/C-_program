// check whther the triangle is 
// equilateral or iscoceles or scalene
#include<iostream>
using namespace std;

int main()
{
    int s1, s2, s3;
    cout << "Please enter 3 sides: ";
    cin >> s1 >> s2 >> s3;

    if(s1==s2 && s2==s3)
    {
        cout << "Equilateral Triangle..\n";
    }
    else if(s1==s2 || s1 == s3 || s2 == s3)
    {
        cout << "Isoceles Triangle\n";
    }
    else 
    {
        cout << "Scalene triangle\n";
    }
}
