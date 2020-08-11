#include<iostream>
#include<iomanip>   // for setw

using namespace std;

int main(){

    int basic = 950,Allowance = 95, Total = 1045;
    cout <<"Basic"<<setw(15)<<basic<<endl
         <<"Allowance"<<setw(11)<<Allowance<<endl
         <<"Total"<<setw(15)<<Total<<endl;

    return 0;
}