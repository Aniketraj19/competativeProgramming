#include<iostream>
#include<cmath>
using namespace std;
float boom(float y)
{
    float value = (int)(y *100 +0.5);
    return (float)value/100;
}

int main()
{
    float y,bal;
    float x;
    cout<<"Enter the balance of the account : "<<endl;
    cin>>y;
    y = boom(y);
    cout<<"Enter the amount you want to withdraw : "<<endl;
    cin>>x;
    if(y>0 && y<=2000)
    {
        if(y>x && x>0 && x<=2000)
        {
            bal = float(y-x);
            cout<<bal;
        }
        else
        {
            cout<<"The account balance is low"<<endl;
        }
    }
    else
    {
        cout<<"Enter amount between 2000 and try again"<<endl;
    }
    
    return 0;
}