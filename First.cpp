#include <iostream> //It is the library file Declaration
#include "admin.h" //Defined New Head File

using namespace std; //This program is based on the Built in Name space Standards

int main() //Main Methods
{
    string name;
    int a,b;
    cout<<"Hello world!"<<endl<<"Enter Your Name:\n";
    cin>>name;
    cout<<"Hi hello "<<name;
    cout<<"\n"<<"\nEnter two Number: \n";
    cin>>a>>b;
    sum(a,b);
    dif(a,b);
    division(a,b);
    mul(a,b);
    return 0;
}
