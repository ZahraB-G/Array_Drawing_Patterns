#include<iostream>
using namespace std;
int main()
{
    //Draw Cross Lower Triangle
    for(int i = 5; i > 0; i--)
    {
        for(int j = 0; j<=5;j++)
        {
            if(i > j)
                cout<<" ";
            else
                cout<<"*";
        }
        cout<<endl;
    }
}