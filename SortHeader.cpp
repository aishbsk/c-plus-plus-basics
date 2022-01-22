#include<iostream>
#include<iomanip>
#include<fstream>
#include<time.h>
#include<stdlib.h>
#include<stdio.h>   

template<class potter>
void BSort(potter iAry[],int N){
    for (int x = 0; x < N - 1; x++) {
        for (int y = x + 1; y < N; y++) {
            if (iAry[x] > iAry[y]) {
                potter tempi;
                tempi = iAry[y];
                iAry[y] = iAry[x];
                iAry[x] = tempi;
            }}}
}