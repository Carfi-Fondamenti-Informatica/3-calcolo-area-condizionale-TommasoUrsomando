#include <iostream>
using namespace std;

int main() {
    float a, b;
    int o;
    cin >> a >> b >> o;
    switch (o) {
        case 0:
            cout <<(a*b)/2;
            break;
        case 1:
            cout << a*a;
            break;
        case 2:
            cout << a*b;
            break;
        default:
            cout << "opzione non valida";
            break;
    }
   return 0;
}
