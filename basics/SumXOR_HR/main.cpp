#include <bits/stdc++.h>

using namespace std;

// El resultado es la cantidad de 0s "x"
// Que al final es 2^x
long sumXor(long n){
    long res = 1;

    while(n){
        // Verifica si n es par o impar, si es par da 0, de lo contrario 1
        int type = n & 1;
        // Desplaza los bits de n a la derecha 1 vez
        n >>= 1;
        // Si es par, res lo multiplica por 2
        if(type == 0){
            res *= 2;
        }
    }
    return res;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    long result;

    long n; cin>>n;
    result = sumXor(n);
    cout<<result<<"\n";

    return 0;
}
