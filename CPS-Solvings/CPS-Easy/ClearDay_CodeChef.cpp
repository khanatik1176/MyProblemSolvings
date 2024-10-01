#include<iostream>

using namespace std;

int main()
{
    int x,y;

    int week = 7;

    cout<<"Give the rainy and cloudy days number"<<endl;
    cin>>x>>y;

    int notClearDays = x+y;

    int clearDays = week - notClearDays;

    cout<<clearDays;


    return 0;
}



