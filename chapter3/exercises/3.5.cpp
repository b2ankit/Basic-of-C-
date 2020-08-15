#include<iostream>
#include <unistd.h>

using namespace std;
int c1,c2,c3,c4,c5,spoilt;


//counting function
void countung_votes(int vote){
    if(vote == 1)
        c1++;
    else if(vote == 2)
        c2++;
    else if(vote == 3)
        c3++;
    else if(vote == 4)
        c4++;
    else if(vote == 5)
        c5++;
    else
        spoilt++;
}

int main(){
    int total_votes,*ballot = NULL;
    cout << "Enter total number of Voters : "<<endl;
    cin >> total_votes;

    ballot = new int[total_votes];
    for(int i=0;i<total_votes;i++)
        cin >> *(ballot+i);

    //counting is start wait 2 min .......
    cout << "Counting  is going wait 2sec........... "<<endl;
    sleep(2);
    for(int i=0;i<total_votes;i++)
        countung_votes(*(ballot+i));

    cout << "Result of candidates is : " <<endl;
    cout << "candidates1 => "<<c1<<endl;
    cout << "candidates2 => "<<c2<<endl;
    cout << "candidates3 => "<<c3<<endl;
    cout << "candidates4 => "<<c4<<endl;
    cout << "candidates5 => "<<c5<<endl;
    cout << "spoilt ballot => "<<spoilt<<endl;

    

    delete(ballot);


    return 0;
}