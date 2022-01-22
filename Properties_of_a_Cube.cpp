#include<iostream>
#include <math.h>

using namespace std;

class Cube{
  private:
  double Side;

public:
  Cube();
  Cube(double);   //default constructor set at   “ – 2 “
  void setSide(double);
  double getSide();  // used in Properties
  double Diagonal(double);  // used in Properties
        double Area(double);   // used in Properties
  double Volume(double);  // used in Properties
  void Properties();  // Calls all functions and displays them
  void challenge(Cube);
  void operator +(Cube);
  void operator -();
};

Cube::Cube(){
    Side=-2;
}
Cube::Cube(double first){
    Side=first;
}
void Cube::setSide(double s){
    Side=s;
}
double Cube::getSide(){
    return Side;
}
double Cube::Diagonal(double Side){
    return Side*sqrt(2);
}
double Cube::Area(double Side){
    return 6*Side*Side;
}
double Cube::Volume(double Side){
    return Side*Side*Side;
}
void Cube::challenge(Cube temp){
        int value= Side+temp.getSide();
        cout<<"Classes: "<<value;
}
void Cube::Properties(){
    cout<<"Side is: "<<getSide()<<endl;
    cout<<"Diagonal is: "<<Diagonal(Side)<<endl;
    cout<<"Surface Area is: "<<Area(Side)<<endl;
    cout<<"Volume is: "<<Volume(Side)<<endl;
}
void Cube::operator +(Cube temp2){
    cout<<"Operator: "<<Side+temp2.getSide()<<endl;
    cout<<"Area: "<<Side+temp2.Area(temp2.getSide());
}
void Cube::operator -(){
    cout<<"Volume-Area: "<<Volume(Side)-Area(Side);
}
//Your main
int main(){
 Cube c;
 double myside;
 cout<<"Enter side: ";
 cin>>myside;
 c.setSide(myside);
 c.Properties();
 cout<<endl;
 Cube p(3);
 p.Properties();
 cout<<endl;
 Cube z(p.getSide()+c.getSide());
 z.Properties();
 cout<<endl;
 int value=c.getSide()+p.getSide();

 cout<<"Main: "<<value<<endl;
 cout<<"Challenge: ";
 c.challenge(p); //means C+P
 cout<<endl;
 c+p;
 cout<<endl;
 //cout<<c+p.getSide();
 -c;
 return 0;
 }
