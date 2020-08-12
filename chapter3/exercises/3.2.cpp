#include<iostream>

using namespace std;

int main(){
    int *arr = NULL;
    int size;
    cout << "Enter the value of Size : ";
    cin >> size;
    arr = new int[size];

    cout << "Fill the value in array "<<endl;
    for(int i=0;i<size;i++)
        cin >> *(arr+i);


    cout << "Array  : "<<endl;
    for(int i=0;i<size;i++)
        cout << *(arr +i) <<"\t";

    cout <<endl;
    delete arr;

    return 0;
}