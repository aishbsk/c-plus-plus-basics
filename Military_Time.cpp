#include<iostream>
using namespace std;

class Time{
  public :       //Accessors - has access
                            // wherever the program has access to an object of class
  Time();
  Time(int, int, int, char);
  void setTime(int, int, int,char);
  void setMin(int);
  int getMin();
  int military(int);
  void print();
 private:       //Accessors that are only member to functions in the class
  int hour;
  int min;
  int sec;
  char ampm;
 };

Time::Time(){
 hour = 12;
 min=sec=0;
 ampm='a';
 }

Time::Time(int first, int second, int third, char fourth){
 hour=first;
 min=second;
 sec=third;
 ampm=fourth;
}
void Time::setTime( int h, int m, int s, char a){
 hour=h;
 min=m;
 sec=s;
 ampm=a;
 }

void Time::setMin(int stuff){
 min= stuff;
 }

int Time::getMin(){
 return min;}


int Time::military(int hour){
 return hour+12;
 }

void Time::print(){
 cout<<"The time in military time is ->";
 if (ampm=='p'){
  hour = military(hour);}
 cout<<hour<<":"<<min<<":"<<sec;
 }

int main(){
    Time d;
    d.print();
    cout<<endl;
    Time hello(5,34,20,'p'); //checks if military time works
    hello.print();
    cout<<endl;
    int mike,don,leo;
    char ralph;
    /*
    cout<<"Enter hour: ";
    cin>>mike;
    cout<<"Enter minute: ";
    cin>>don;
    cout<<"Enter second: ";
    cin>>leo;
    cout<<"Enter a for am or p for pm: ";
    cin>>ralph;
    Time turtle(mike,don,leo,ralph);
    turtle.print();
    cout<<endl;
    d.setTime(mike,don,17,'a');
    //d.print();
    */
    //cout<<d.getMin()<<endl;
    //cout<<d.min; //Private therefore cannot output private
    //cout<<hour;
    return 0;
 }
