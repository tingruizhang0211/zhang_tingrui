#include <iostream>

using namespace std;

int main()
{
    int total=0;
    int number;
    int value;
    cout<<"Enter the number of values:"<<"followed by the value:\n";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        cin>>value;
        total+=value;
    }
    cout<<"Sum is"<<total;


}
