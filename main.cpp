#include <iostream>
using namespace std;
int main()
{
    int numberlikh;
    int dosarnumber;
    int tesarnumber;
    int resultforaddition;
    int resultformultiplication;
    double resultfordivision;
    int resultforsubtraction;
    cout<<"numberlikh"<<endl;
    cin>>numberlikh;
    cout<<"dosarnumber"<<endl;
    cin>>dosarnumber;
    cout<<"tesarnumber";
    cin>>tesarnumber;
    resultforaddition = numberlikh+dosarnumber+tesarnumber;
    resultforsubtraction = (numberlikh+dosarnumber)-tesarnumber;
    resultfordivision = (numberlikh+dosarnumber)/tesarnumber;
    resultformultiplication = numberlikh*dosarnumber*tesarnumber;
    cout<<endl<<endl<<"The addition of above numbers is"<<" "<<resultforaddition<<endl<<endl;
    cout<<endl<<endl<<"The subtraction of above numbers is"<<" "<<resultforsubtraction<<endl<<endl;
    cout<<endl<<endl<<"The multiplication of above numbers is"<<" "<<resultformultiplication<<endl<<endl;
    cout<<endl<<endl<<"The addition of first two and divided by third results"<<" "<<resultfordivision<<endl<<endl;
    return 0;
}
