#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct person {
    string name;
    int nameLen;
    int numvowels;
};
const int n = 9;
const char separator = ' ';

int NumberOfVowels(person d[])
{
    int vowels = 0;
    for (int x = 0; x < n; x++) {
        for (int j = 0; j < d[x].name.length(); j++) {
            if (d[x].name[j] == 'a' || d[x].name[j] == 'e' || d[x].name[j] == 'i' || d[x].name[j] == 'o' || d[x].name[j] == 'u') {
                vowels++;
            }
        }
        d[x].numvowels = vowels;
        vowels = 0;
    }
}

void input(person s[])
{
    //Asks for names

    for (int x = 0; x < n; x++) {
        cin >> s[x].name;
        s[x].nameLen = s[x].name.length();
        string hello = s[x].name;
        NumberOfVowels(s);
    }

    cout << endl;
}

void swipper(person switcher[], int& numx, int& numy)
{
    person temp;
    //Does the action of swapping
    temp.name = switcher[numy];

    switcher[numy] = switcher[numx];

    switcher[numx] = temp;

}
void output(person b[])
{
    cout <<setw(8)<< "Name"<<setw(8)<< "Length"<<setw(8)<<"Vowels" << endl;
    for (int x = 0; x < n; x++) {
        cout <<setw(8)<< b[x].name <<setw(8)<< b[x].nameLen <<setw(8)<<  b[x].numvowels << endl;
    }
}

void SortLength(person sl[],int k)
{
  if(k==2){
    for (int x = 0; x < k - 1; x++) {
        for (int y = x + 1; y < k; y++) {

            if (sl[x].nameLen < sl[y].nameLen) {
                swipper(sl, y, x);
            }

            else {
            }
        }
    }

  }
  else{
    //checks if needs to be swapped
    //calls on the swap function
    for (int x = 0; x < n - 1; x++) {
        for (int y = x + 1; y < n; y++) {

            if (sl[x].nameLen < sl[y].nameLen) {
                swipper(sl, y, x);
            }

        }
    }
}
}
void SortVowels(person sv[])
{
   person trial[2];
    for (int l = 0; l < n - 1; l++) {
        for (int c = l + 1; c < n; c++) {
            if (sv[l].numvowels < sv[c].numvowels) {
                swipper(sv, c, l);
            }
            if (sv[l].numvowels == sv[c].numvowels) {

             trial[0]=sv[l];
             trial[1]=sv[c];

             SortLength(trial,2);

             sv[l]= trial[0];
             sv[c]=trial[1];

            }
        }
    }
}

int main()
{
    person student[n];
    input(student);

    SortLength(student,n);
    output(student);
cout<<endl;
    SortVowels(student);
    output(student);

    return 0;
}