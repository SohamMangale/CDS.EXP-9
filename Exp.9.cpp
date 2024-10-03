//soham
//entc B1
//23070123084
//experiment 9
#include <iostream>
using namespace std;
int main ()
{
    int var=150;
    // declare pointer c=variable
    int *ptr;
    //note that data type of ptr and var must be same
    ptr =&var;
    //assign the address of variable of a variable to a pointer 
    cout<<"Value at ptr=" << ptr <<  "\n";
    cout<<"Value at var=" << var <<  "\n";
    cout<<"Value at *ptr=" << *ptr <<  "\n";
    return 0;
}
