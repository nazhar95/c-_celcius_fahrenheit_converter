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





