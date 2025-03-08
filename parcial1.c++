#include <iostream>
using namespace std;
int main() {
    int a = 0, b = 0;
    int i = 0;
    while (i <= 50) {
        if (i % 2 == 0) {
            b += i;
        } else {
            a += i;
        }
        i++;
    }
    cout << "la suma de los numeros impares (a): " << a << std::endl;
    cout << "la suma de los numeros empares (b): " << b << std::endl;


    for (int i = 0; i <= 30; i += 3) {
        cout << i << " ";
    }
    cout << 31 << " ";
    cout << endl;

    return 0;
}