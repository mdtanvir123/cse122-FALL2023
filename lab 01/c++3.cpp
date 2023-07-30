#include <iostream>

using namespace std;

int main()
{
    int x;
    cin>>x;
    if(x>=0)
    {
        cout<<"x value is positive"<<endl;
        if(x%2==0)
        {
            cout<<"x value is even "<<endl;
            if(x>999&x<1000)
            {
                cout<<"x value contain 1 digits"<<endl;
            }
        }
    }
}
