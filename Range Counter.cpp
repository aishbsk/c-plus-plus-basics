using namespace std;
#include<iostream>
int main(){
    int count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
    double data[50]={43,65,51,27,79,11,56,61,82,9,25,36,7,49,55,63,74,81,49,37,40,49,16,75,87,91,33,24,58,78,65,56,76,67,45,54,36,63,12,21,73,49,51,19,39,49,68,93,85,59};
for(int i=0;i<50;i++){
    if((data[i]>0)&&(data[i]<9)){
        count1=count1+1;
    }
    else if((data[i]>=10)&&(data[i]<=19)){
        count2=count2+1;
    }
    else if((data[i]>=20)&&(data[i]<=29)){
        count3=count3+1;
    }
    else if((data[i]>=30)&&(data[i]<=39)){
        count4=count4+1;
    }
    else if((data[i]>=40)&&(data[i]<=49)){
        count5=count5+1;
    }
    else if((data[i]>=50)&&(data[i]<=59)){
        count6=count6+1;
    }
    else if((data[i]>=60)&&(data[i]<=69)){
        count7=count7+1;
    }
    else if((data[i]>=70)&&(data[i]<=79)){
        count8=count8+1;
    }
    else if((data[i]>=80)&&(data[i]<=89)){
        count9=count9+1;
    }
    else if((data[i]>=90)&&(data[i]<=100)){
        count10=count10+1;
    }
    }
cout<<"The number of number in the range 0-9 is: "<<count1<<endl;
cout<<"The number of number in the range 10-19 is: "<<count2<<endl;
cout<<"The number of number in the range 20-29 is: "<<count3<<endl;
cout<<"The number of number in the range 30-39 is: "<<count4<<endl;
cout<<"The number of number in the range 40-49 is: "<<count5<<endl;
cout<<"The number of number in the range 50-59 is: "<<count6<<endl;
cout<<"The number of number in the range 60-69 is: "<<count7<<endl;
cout<<"The number of number in the range 70-79 is: "<<count8<<endl;
cout<<"The number of number in the range 80-89 is: "<<count9<<endl;
cout<<"The number of number in the range 90-100 is: "<<count10;
}