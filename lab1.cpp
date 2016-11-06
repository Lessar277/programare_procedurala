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

//ecuatii de gradul I
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
//    cout << "a = ";
//    cin >> a;
//    cout << "b = ";
//    cin >> b;
//    cout << "c = ";
//    cin >> c;
//
//    delta = powf(b, 2) - (4 * a * c);
//
//    if(a==0 || delta < 0) {
//        cout << "Ecuatia nu are solutii reale";
//    } else if (delta == 0) {
//        x1 = -(b / (2 * a));
//        cout << "Solutia ecuatiei este: x1 = x2 = " << x1;
//    } else {
//        x1 = (-b + sqrtf(delta)) / (2*a);
//        x2 = (-b - sqrtf(delta)) / (2*a);
//        cout << "Soluta ecuatiei este:" << endl;
//        cout << "x1 = " << x1 << endl;
//        cout << "x2 = " << x2 << endl;
//    }
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

//gaseste maximul dintr-un sir
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

//afla de cate ori apare x intr-un sir
//int main () {
//
//    int n, x, i, p = 0;
//    cout << "x este ";
//    cin >> x;
//    //sir de numere cu 100 de pozitii
//    int a[100];
//
//    cout << "dimensiunea sirului: ";
//    cin >> n;
//
//    for (i=1; i<= n ; i++) {
//        cout << "a[" << i << "] = ";
//        cin >> a[i];
//        if (x == a[i]) p = p+1 ;
//    }
//    cout << "x apare de " << p << " ori";
//}

//Matrici
//
//int main() {
//    int x, y, i, j;
//    int a[100][100];
//    cout << "Nr. linii: ";
//    cin >> x;
//    cout << "Nr. coloane: ";
//    cin >> y;
//
//    for (i=1; i<=x; i++) {
//        for (j=1; j<=y; j++) {
//            cout << "a[" << i << "][" << j << "]";
//            cin >> a[i][j];
//        }
//    }
//    cout << a;
//}

//maxim din matrice
int main() {
    int x, y, i, j, max = 0, count = 0;
    int a[100][100];
    cout << "Nr. linii: ";
    cin >> x;
    cout << "Nr. coloane: ";
    cin >> y;

    for (i=1; i<=x; i++) {
        for (j=1; j<=y; j++) {
            cout << "a[" << i << "][" << j << "] ";
            cin >> a[i][j];
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    for (i=1; i<=x; i++) {
        for (j=1; j<=y; j++) {
            if (a[i][j] == max) {
                count++;
            }
        }
    }

    cout << "max: " << max << endl;
    cout << "numarul apare de " << count << " ori";
}