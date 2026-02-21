#include<bits/stdc++.h>
using namespace std;

int main() {
    int luas_kandang = 12 ;
    int total_baris = 1;

    while ( total_baris <= 3) {
        luas_kandang += 7;

        cout << total_baris << ": " << luas_kandang << endl;

     total_baris += 1;
    }
}