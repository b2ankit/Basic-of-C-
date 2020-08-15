#include<iostream>
#include<math.h>

using namespace std;

int main(){

    int size;
    int *p = NULL,*n = NULL;
    double *r = NULL,*v = NULL;
    cout << "Enter the value of  Size : ";
    cin >> size;
    /*Allocating memory and filling value in it*/
    p = new int[size];
    cout << "Enter "<< size <<" different value of p"<<endl;
    for(int i=0;i<size;i++)
        cin >> *(p+i);

    /*Allocating memory and filling value in it*/
    r = new double[size];
    cout << "Enter "<< size <<" different value of r"<<endl;
    for(int i=0;i<size;i++)
        cin >> *(r+i);

    /*Allocating memory and filling value in it*/
    n = new int[size];
    cout << "Enter "<< size <<" different value of n"<<endl;
    for(int i=0;i<size;i++)
        cin >> *(n+i);

    /*Allocating memory for v*/
    v = new double[size];
    for(int i=0;i<size;i++){
        *(v+i) = (*(p+i))*(pow((1+*(r+i)),(*(n+i))));
    }

    for(int i=0;i<size;i++){
        cout << "|___________________________________________________________________________________|"<<endl;
        cout << "|"<<*(p+i)<<"    ||  "<<*(r+i)<<"   ||  "<<*(n+i)<<"    || "<<*(v+i)<<"            "<<endl;
        cout << "|___________________________________________________________________________________|"<<endl;
    }

    delete(p);
    delete(r);
    delete(n);
    delete(v);

    return 0;
}