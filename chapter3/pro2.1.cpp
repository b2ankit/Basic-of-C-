#include<iostream>

using namespace std;

int main(){

    int *arr=NULL;
    int size;

    cout << "Enter the size of array\n";
    cin >>size;

    arr = new int[size];

    cout << "Enter the value in array\n";
    for(int i=0;i<size;i++)
        cin >> *(arr+i);

    cout << "Array : \n";
    for(int i=0;i<size;i++)
        cout << *(arr+i) << "\t";

    cout << "\n";

    delete arr;

    return 0;
}
