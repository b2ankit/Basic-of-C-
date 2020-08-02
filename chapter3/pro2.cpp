#include<iostream>

using namespace std;

int main(){

    int *arr=NULL;
    int size;
    cout << "Enter the size of array\n";
    cin >> size;

    arr = (int *)malloc(size*sizeof(int));
    if(!arr)
        cout << "failed to allocate memory\n";

    cout << "enter the value of array : \n";
    for(int i=0;i<size;i++)
        cin >> *(arr+i);

    cout << "Array : \n";
    for(int i=0;i<size;i++)
        cout << *(arr+i)<<'\t';
    
    cout <<"\n";
    
    free(arr);
    
    return 0;
}