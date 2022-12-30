/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// Online C++ compiler to run C++ program online
#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

void convert(){
    double celcius;
    double fahrenheit;
    
    cout << "Enter the temperature in Celcius:";
    cin>>celcius;
    
    fahrenheit = (celcius * 1.8)+32;
    
    cout<<"Fahrenheit value is: ";
    cout<<fahrenheit<<endl;
    
}

int main() {
    char choice;
    
    do{
        convert();
        cout << "Would you like to convert another temperature from Celcius to Fahrenheit?\n";
        cout << "Enter Y if you would like to continue.\n";
        cin >> choice;
    }while(choice=='Y' || choice=='y');

    return 0;
}





