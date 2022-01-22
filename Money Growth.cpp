#include<vector>
#include<iostream>
#include<math.h>
#include<cmath>
#include<iomanip>

using namespace std;

void input(double &principle, double &rate, int &howcompounded, double &goal){
    cout<<"P = ";
    cin>>principle;
    cout<<"r = ";
    cin>>rate;
    cout<<"n = ";
    cin>>howcompounded;
    cout<<"Goal = ";
    cin>>goal;
}
double calculation(double ra, int ho, int time){
        ra = ra/100;
        double A;
        double exp = pow((1+(ra/ho)),(ho*time));//add t
        return exp;
       }

void output(double &pri, double &rat, int &how, double &goa){
vector<double>money;

double value;
double ans;
int t=-1;
do{
    t++;
    double value = calculation(rat, how,t);
    ans = value*pri;
    money.push_back(ans);
}while((ans<goa)&&(t<10));

cout<<"Year"<<setw(10)<<"Amount"<<endl;
for(int i = 0; i<money.size();i++){
         cout.setf(ios::showpoint|ios::fixed);
    cout<<setprecision(2);
    if(i==10){
            cout.setf(ios::showpoint|ios::fixed);
        cout<<i<<setw(12)<<money[i]<<endl;
    }
    else{
        cout.setf(ios::showpoint|ios::fixed);
    cout<<i<<setw(13)<<money[i]<<endl;
    }
}

if((ans==goa)||(abs(ans-goa)<0.01)){
    cout<<"You EXACTLY met your goal!";
}

else if(ans>goa){
    cout<<"Congrats! You have met your goal and you have $"<<ans-goa<<" left";
}
else if(ans<goa){
    cout<<"You did not meet your goal... You still need $"<<goa-ans<<" more";
}
cout<<endl;
}

int main(){

    double p,r,g;
    int n;
    input(p,r,n,g);
    output(p,r,n,g);
    cout<<500*calculation(5,12,1);
return 0;
}