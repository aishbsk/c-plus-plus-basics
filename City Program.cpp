//Aishwarya Balaji
//Into Into Comp Sci

#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<stdlib.h>
#include<iostream>
#include<vector>
#include<string>
#include <sstream>
#include <algorithm>
#include <cctype>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std;

struct city{
    string name;
};

void bsort(vector<city>& c, int counter){
for(int j = 0; j<counter;j++){
    for(int i = j+1; i<counter; i++){
        string comp = c[i].name;
    if(c[i].name<=c[j].name){
        c[i].name=c[j].name;
        c[j].name=comp;

        }
        }
        }



}

int main(){
  vector<city>capital;
    ifstream myfile;
    string line;
    int ctr = 0;
    int size = line.size();
    myfile.open("ShoppingList.txt");
    if(!myfile){
        cout<<"Error"<<endl;
    }
    else{
        getline(myfile, line);
    while(myfile)
    {

    string lo = line.substr(0,1);
    lo=topper(lo);
    //while(string auto& lo: line){
                lo = toupper(vector<string>& lo);

         int length = line.size();
        capital.push_back(city());
        capital[ctr].name= lo+line.substr(1,length);
        getline(myfile,line);


        ctr++;
         bsort(capital,ctr);


    }

    }
   for(int i = 0; i<ctr; i++){
        cout<<capital[i].name<<endl;
    }

    return 0;
}

