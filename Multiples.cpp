using namespace std;
#include<iostream>

int main(){
    int a;
    double avg = 0, sum=0;
    cout<<"Please enter the number of perfect squares that you want: ";
    cin>>a;
    int PerfectSquare[a];
    for(int i=0; i<a; i++){
        PerfectSquare[i+1]=((i+1)*(i+1));
        cout<<PerfectSquare[i+1]<<"   ";
        sum = PerfectSquare[i+1]+sum;
    }
    cout<<endl<<"The average is: "<<endl;
    avg = sum/a;
    cout<<avg;
}