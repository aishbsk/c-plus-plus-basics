//Aishwarya Balaji
//Intro Into Computer Science
#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct book{
    string n;//name
    int sn; //serial number
    string c; //category
};

int main(){
int n;
cout<<"Enter 1 for n, 2 for sn, 3 for c";
cin>>n;
book a[3];

for(int i= 0; i<3;i++){
    cin>>a[i].n;
    cin>>a[i].sn;
    cin>>a[i].c;
}
if(n==2){
    vector<int>f;
    for(int i = 0; i<3; i++){
    f.push_back(a[i].sn);
    }

        for(int j = 0; j<f.size();j++){
    for(int i = j+1; i<f.size(); i++){
        int comp = f[i];
    if(f[i]<=f[j]){
        f[i]=f[j];
        f[j]=comp;

        }
        }
        }
        for(int i = 0; i<f.size();i++){
cout<<f[i]<<endl;
    }}

if(n==1){
    vector<string>v;
    for(int i = 0; i<3; i++){
    v.push_back(a[i].n);
    }

    for(int j = 0; j<v.size();j++){
    for(int i = j+1; i<v.size(); i++){
       string comp = v[i];
    if(v[i]<=v[j]){
        v[i]=v[j];
        v[j]=comp;

        }
        }
        }
    for(int i = 0; i<v.size();i++){
cout<<v[i]<<endl;
}}

if(n==3){
    vector<string>s;
    for(int i = 0; i<3; i++){
    s.push_back(a[i].c);
    }

    for(int j = 0; j<s.size();j++){
    for(int i = j+1; i<s.size(); i++){
       string comp = s[i];
    if(s[i]<=s[j]){
        s[i]=s[j];
        s[j]=comp;

        }
        }
        }
        for(int i = 0; i<s.size();i++){
cout<<s[i]<<endl;

}
}

}
