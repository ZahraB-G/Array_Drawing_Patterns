#include <iostream>
using namespace std;
int main()
{
    //Draw Upper Triangle
    for (int i = 5; i>0; i--)
    {
        for (int j = 0; j < 5; j++)
        {
            if(i>j)
                cout<<"*";
        }
        cout<<endl;
    }
    
}