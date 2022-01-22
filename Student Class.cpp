#include<iostream>
#include<iomanip>
#include<vector>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main(){
vector<string>students; //vector of strings
vector<int>id(4,0); //vector4 filled with four integers with the value of 0;
string name;

//input the student's names. use pushback to add to the vector
    for(int i =0; i<4;i++){
        cout<<"enter a student's name"<<endl;
        cin>>name;
        students.push_back(name);

    }

//create a randomly generated four digit student id
//pushback is not needed to add to the vector because we declared it as having 4 entries
srand(time(NULL));//initialize a random seed
for(int i = 0; i<4;i++){
    id[i]=rand()%10000+1;
}

cout<<endl<<setw(12)<<"students"<<setw(6)<<"id"<<endl;
for(int i = 0; i<4; i++){
    cout<<setw(12)<<students[i]<<setw(6)<<id[i]<<endl;
}
return 0;

}