#include<iostream>

using namespace std;

class maths_opertn{
    int x, y,z;

    public:
        void set_value(void);
        void opertn_display(void);

};

void maths_opertn::set_value(void){
            cout << "Enter the value of x : ";
            cin >> x;
            cout << "Enter the value of y : ";
            cin >> y;
            cout << "Enter the value of z : ";
            cin >> z;
        };

void maths_opertn::opertn_display(void){        
    int out = (x/y-z);
    cout  << "value after operation (a/b -c) is : " << out <<"\n";
};

int main()
{
    class maths_opertn m1;
    m1.set_value();
    m1.opertn_display();

    return 0;
}