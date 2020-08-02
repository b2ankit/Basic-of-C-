#include<iostream>

using namespace std;

class celcius_to_fahrenheit{
    float temp;
            
    public:
        void set_temp(void);
        void temp_fahrenheit(void);
};
void celcius_to_fahrenheit:: set_temp(void){
            cout << "Enter the temperature in celcius : ";
            cin >> temp;
        };

void celcius_to_fahrenheit :: temp_fahrenheit(){
    float f_temep = (((temp * 9)/5) + 32);
    cout << "Temperature in Fahrenheit : " << f_temep << "\n";
}

int main(){

    class celcius_to_fahrenheit c1;
    c1.set_temp();
    c1.temp_fahrenheit();
    return 0;
}
        