\\look at header file
#include "E:\\myheader.h"
using namespace std;


const int N = 15;




int main(){
    ofstream myfile;
    myfile.open("testData.txt");


int intAry[N];
char charAry[N];
double doubAry[N];

int randomNumber;
char randomLetter;
double randomdNum;
srand(time(NULL));
for(int i = 0; i<N; i++){
    intAry[i] = rand()%30001;
    cout<<intAry[i]<<" ";
}

for(int i = 0; i<N; i++){
    charAry[i] = rand()%256;

}

for(int i = 0; i<N; i++){
    randomdNum = rand()%1001;
    randomdNum=randomdNum/1000;
    doubAry[i]=randomdNum;
}


BSort(intAry,N);
BSort(charAry,N);
BSort(doubAry,N);

for(int i = 0; i<N; i++){
    if(i%10==0 && i!=0){
      myfile<<endl;
    }
    myfile<<intAry[i]<<"\t";

}
myfile<<endl;
for(int i = 0; i<N; i++){
    if(i%10==0 && i!=0){
      myfile<<endl;
    }
    myfile<<charAry[i]<<"\t";

}
myfile<<endl;
for(int i = 0; i<N; i++){
    if(i%10==0 && i!=0){
      myfile<<endl;
    }
    myfile.setf(ios::showpoint|ios::fixed);
    myfile<<setprecision(3)<<doubAry[i]<<"\t";

}



    myfile.close();
    return 0;
}
