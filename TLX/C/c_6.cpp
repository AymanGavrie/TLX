#include <bits/stdc++.h>
using namespace std;

int main () {
    int luas = 12;
    int total_kandang = 1;
    int total_luas_kandang = luas;
    while (total_luas_kandang < 800){
        luas += 7;
        total_kandang += 1;
        total_luas_kandang += luas;
        
    }
    cout << total_kandang << endl;
}