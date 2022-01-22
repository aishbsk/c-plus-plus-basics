//Aishwarya Balaji
//Teacher: Ms. Patnaik
//02/12/2018
//Intro Into CS


//Aishwarya Balaji

#include<iostream>
using namespace std;

int main() {
  int s,row,col;
  cout<<"Enter Seed: ";
  cin>>s;
  double a[5][5];
  a[0][0]=-1;
  int n = s+5;

  cout<<endl;
  for (int i = s; i<n; i++){
      for(int j = s; j<n; j++){
          a[i][j]=(j)/(i);
          cout<<a[i][j]<<"   ";
          if(j==n-1&&i==n-1){
              cout<<endl;
               cout<<"Input the row you want (1-5): ";
               cin>>row;
               cout<<"Input the column you want (1-5): ";
               cin>>col;
               cout<<"It is: "<<a[row+s-1][col+s-1];
              }
      }
      cout<<endl;
  }
}