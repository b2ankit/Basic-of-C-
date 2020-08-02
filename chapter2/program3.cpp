#include<iostream>

using namespace std;

class subject{
    int maths;
    int physics;
    int chemistry;

    public:
        void set_subject_value(void);
        void display_subject_value(void);
};

void subject ::set_subject_value(void){
    cout << "Enter maths marks : ";
    cin >> maths;
    cout << "Enter physics marks : ";
    cin >> physics;
    cout << "Enter chemistry marks : ";
    cin >> chemistry;
};

void subject :: display_subject_value(void){
    cout << "Your Marks are : \n" << "Maths : " << maths <<"\n" << "Physics : " << physics << "\n" << "Chemistry : " << chemistry <<"\n";
};


int main(){

    subject s1;
    s1.set_subject_value();
    s1.display_subject_value();
    return 0;
}