#include<iostream>

using namespace std;

class num_cmp{
    int num1;
    int num2;

    public:
        void num_set(void);
        int num_compare(void);
};

void num_cmp :: num_set(void){
    cout << "Enter num 1 : ";
    cin >> num1;
    cout << "Enter num 2 : ";
    cin >> num2;
};
int num_cmp :: num_compare(void){
    return ((num1>num2)?num1:num2);
};

int main(){

    num_cmp num1;
    num1.num_set();
    cout << "Larger num : " << num1.num_compare() << "\n";
    return 0;
}