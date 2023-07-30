#include <iostream>

using namespace std;

int main()
{
    int num1,num2,num3;
    cin>>num1;
    cin>>num2;
    cin>>num3;
    int maximum=num1;
    if(maximum<num2)
        maximum=num2;
    if(maximum<num3)
        maximum=num3;
    cout<<"Maximum value:"<<maximum;
    return 0;
}
