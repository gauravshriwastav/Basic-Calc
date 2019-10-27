#include <iostream>
using namespace std;
int main()
{
    //defining numbers
    int num1;
    int num2;
    int num3;
    int resultforaddition;
    int resultformultiplication;
    double resultfordivision;
    int resultforsubtraction;
    //taking inputs from users
    cout<<"num1"<<endl; 
    cin>>num1;
    cout<<"num2"<<endl;
    cin>>num2;
    cout<<"num3";
    cin>>num3;
    //defining calculations
    resultforaddition = num1+num2+num3;
    resultforsubtraction = (num1+num3)-num1;
    resultfordivision = (num1+num2)/num3;
    resultformultiplication = num1*num2*num3;
    //printing results
    cout<<endl<<endl<<"The addition of above numbers is"<<" "<<resultforaddition<<endl<<endl;
    cout<<endl<<endl<<"The subtraction of above numbers is"<<" "<<resultforsubtraction<<endl<<endl;
    cout<<endl<<endl<<"The multiplication of above numbers is"<<" "<<resultformultiplication<<endl<<endl;
    cout<<endl<<endl<<"The addition of first two and divided by third results"<<" "<<resultfordivision<<endl<<endl;
    return 0;
}
