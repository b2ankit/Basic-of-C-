#include<iostream>

using namespace std;

int main(){

    int size;
    cout << "Enter the size of loop"<<endl;
    cin >> size;
    for(int i=0;i<=size;i++){
        for(int j=0;j<i;j++)
            cout << i;
        cout  << endl;
    }
    return 0;
}