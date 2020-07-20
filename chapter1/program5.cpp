#include<iostream>

using namespace std;

class convt_ascii{
    char word;

    public:
        void set_char_value(void);
        void display_ascii(void);
};

void convt_ascii :: set_char_value(void){
    cout << "Enter a character : ";
    cin >> word;
};

void convt_ascii :: display_ascii(void){
    cout << "Ascii value of "<< word << " is : " << int(word) <<"\n";
}

int main(){

    class convt_ascii a1;
    a1.set_char_value();
    a1.display_ascii();
    return 0;
}