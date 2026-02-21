#include <bits/stdc++.h>
using namespace std;

int main() {
    int jantan, betina;
    jantan = 63;
    betina = 192;

    // bulan ke 1
    betina = jantan + betina;
    jantan = 2 * jantan / 3;

    // bulan ke 2
    jantan = betina + jantan;
    betina = betina - 10;
    cout << jantan + betina << endl;
}