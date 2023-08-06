#include <iostream>

using namespace std;

int main()
{
    int weight;
    cout<<"inter weight ";
    cin >>weight;
    if(weight >=1 && weight<=100)
    {
        if (weight % 2 == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
        else
            cout<<"input error ";
        return 0;
    }
