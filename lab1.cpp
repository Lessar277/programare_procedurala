#include <iostream>
#include <math.h>
using namespace std;

//int main() {
//    int n;
//    cout << "Baga un numar misto aici: ";
//    cin >> n;
//    cout << "n=" << n;
//    return 0;
//}

//int main () {
//    float a, b, x;
//    char r = 'y';
//    while (r == 'y') {
//        cout << "a = ";
//        cin >> a;
//        cout << "b = ";
//        cin >> b;
//
//        if (a == 0) {
//            cout << "Ecuatia nu are solutie";
//        } else {
//            x = -b / a;
//            cout << "x = " << x << endl;
//        }
//        cout << "Continue? (y/n) ";
//        cin >> r;
//    }
//}

// tema pentru acasa quadratic equation
//int main () {
//    float a, b, c, x1, x2, delta;
//    cout << "Input a, b and c";
//    cin >> a >> b >> c;
//
//    delta = b * b - 4 * a * c;
//
//}

//IS N PRIME?
//int main () {
//
//    int n, i;
//    char r = 'y';
//
//    while (r == 'y') {
//        bool isPrime = true;
//        cout << "Numarul dumneavoastra: ";
//        cin >> n;
//
//        for (i = 2; i <= sqrt(n); i++) {
//            if (n % i == 0) {
//                isPrime = false;
//            }
//        }
//
//        if(isPrime) {
//            cout << "Numarul este prim" << endl;
//        } else {
//            cout << "Numarul nu este prim" << endl;
//        }
//        cout << "Continue? (y/n) ";
//        cin >> r;
//    }
//
//}

//gaseste maximul dintr un sir
//int main () {
//
//    int n, i, max = 0;
//    //sir de numere cu 100 de pozitii
//    int a[100];
//
//    cout << "dimensiunea sirului: ";
//    cin >> n;
//
//    for (i=1; i<= n; i++) {
//        cout << "a[" << i << "] = ";
//        cin >> a[i];
//        if (max < a[i]) max = a[i];
//    }
//    cout << "Maximul acestui sir este" << max;
//}

//afla de cate ori apare x
int main () {

    int n, x, i, p = 0;
    cout << "x este ";
    cin >> x;
    //sir de numere cu 100 de pozitii
    int a[100];

    cout << "dimensiunea sirului: ";
    cin >> n;

    for (i=1; i<= n ; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
        if (x == a[i]) p = p+1 ;
    }
    cout << "x apare de " << p << " ori";
}