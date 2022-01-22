//  Aishwarya Balaji
//  Computer Science
//  Ms. Patnaik
//  5/17/18


#include<iostream>
#include<string>
#include<time.h>
#include<stdlib.h>
using namespace std;

class Pet{
private:
    string name;
    int health;
    int experience;
public:
    Pet(); //constuctor
    void setName(string n);
    string getName();
    int getHealth();
    int getExp();
    void fight();
    void rest();
    void Attributes();
    void menu();
};

Pet:: Pet(){
    health=100;
    experience=0;
}
void Pet::setName(string n){
   name=n;
   name = getName();
   cout<<name;
}

int Pet::getHealth(){
    return health;
}

string Pet::getName(){
    return name;
}

int Pet::getExp(){
    return experience;
}
void Pet::Attributes(){
    string n = getName();
    int e = getExp();
    int h = getHealth();
    cout<<"Name: "<<n<<"Exp: "<<e<<", Health: "<<h;
}
void Pet::fight(){
    srand(time(NULL));
    int wld = rand()%2;

    if(wld==0) {//Lose
        experience = experience+5;
        health = health - 15;}

    if(wld==1) {//Win
        experience = experience+10;
        health = health-10;}

    if(wld==2) {//Tie
        experience = 15+experience;
        health = health-5;}
}

void Pet::rest(){
    if(health+10<=100){
        health=health+10;
    }
    experience = experience-5;
}

void Pet::menu(){
    int choice = 0;
    cout<<" enter your choice: attributes = 0, rest = 1, fight = 2, exit = 3"<<endl;
    cin>>choice;
    do{
        if(choice == 0){
          //print out attributes
          Attributes();
        }

        if(choice == 1){
          rest();
        }

        if(choice == 2){
          fight();
        }

        if(choice == 3){
          cout<<"You chose to exit";
          break;
        }
 cout<<" enter your choice: attributes = 0, rest = 1, fight = 2, exit = 3"<<endl;
    cin>>choice;


    }while(experience<100 && health>0);

if((experience>=100)){
    cout<<name<<" has evolved. ";
}

    if(health<=0){
    cout<<name<<" has fainted";}
}

int main(){

    Pet myPoke;
    string pokemon;
    cout<<"Enter your pokemon's name";
    cin>>pokemon;
    myPoke.setName(pokemon);
    myPoke.menu();
}