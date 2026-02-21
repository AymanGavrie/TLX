#include<bits/stdc++.h>
using namespace std;

int main() {
    int luas_kandang = 12;
    int total_baris = 0;
int total_luas_kandang = luas_kandang;
    while (total_baris < 10) {
        luas_kandang += 7;
        total_luas_kandang += luas_kandang;

total_baris += 1;
    }
    cout<< total_luas_kandang<< endl; 
}


