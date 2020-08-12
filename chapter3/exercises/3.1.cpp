#include<iostream>

using namespace std;

void swap_2_int(int *x, int *y){
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
}

int main(){

    int x, y;
    cout << "Enter value of x : "<<endl;
    cin >> x;
    cout << "Enter value of y : "<<endl;
    cin >> y;
    cout << "value of x : "<<x<<" and y : "<<y<<endl;
    swap_2_int(&x,&y);
    cout << "value of x : "<<x<<" and y : "<<y<<endl;


    return 0;
}