#include <iostream>

using namespace std;

int main()
{
    float voltageS;
    float amphre;
    float voltageO;
    float resistance;
    string cont;
    bool contBoolean = true;

    do
    {
        cout << "Resistance Calc\nEnter your Source Voltage: ";
        cin >> voltageS;
        cout << "Enter your desired output voltage: ";
        cin >> voltageO;
        cout << "Enter your output's required current(milliamps): ";
        cin >> amphre;
        amphre /= 1000; resistance = (voltageS - voltageO) / amphre;
        cout << "Your required resistance is: " << resistance << "omhs, or close to that." <<endl;
        cout << "Continue? (y or n)." <<endl;
        cin >> cont;
        if (cont == "n") {contBoolean = false;}
    }while (contBoolean);

}