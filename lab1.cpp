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
//int main() {
//    int x, y, i, j, max = 0, count = 0;
//    int a[100][100];
//    cout << "Nr. linii: ";
//    cin >> x;
//    cout << "Nr. coloane: ";
//    cin >> y;
//
//    for (i=1; i<=x; i++) {
//        for (j=1; j<=y; j++) {
//            cout << "a[" << i << "][" << j << "] ";
//            cin >> a[i][j];
//            if (a[i][j] > max) {
//                max = a[i][j];
//            }
//        }
//    }
//
//    for (i=1; i<=x; i++) {
//        for (j=1; j<=y; j++) {
//            if (a[i][j] == max) {
//                count++;
//            }
//        }
//    }
//
//    cout << "max: " << max << endl;
//    cout << "numarul apare de " << count << " ori";
//}

//matrice
//x - student x(n) -media pe student
//y - disciplina - media pe disciplina
//note - 0(absent) -10


//int main () {
//    float total, medie;
//    int i, j, absente, restante, nrMaterii, nrStudenti;
//    float a[100][100];
//
//    cout << "nr materii: ";
//    cin >> nrMaterii;
//    cout << "nr studenti: ";
//    cin >> nrStudenti;
//
//    for (i=1; i <= nrMaterii; i++ ) {
//        for (j=1; j<=nrStudenti; j++) {
//            cout << "Nota:";
//            cin >> a[i][j];
//        }
//    }
//
//    for (i=1; i<=nrMaterii; i++) {
//        total = 0;
//        absente = 0;
//        restante = 0;
//        for (j=1; j<=nrStudenti; j++) {
//            if (a[i][j] >= 1) {
//                total += a[i][j];
//            } else if (a[i][j] == 0) {
//                absente++;
//            }
//            if (a[i][j] < 5) {
//                restante++;
//            }
//        }
//        medie = total / nrStudenti;
//        cout << "Media pentru materia " << i << " este " << medie << endl;
//        cout << "Numarul de absente pentru  materia " <<  i << " este " << absente << endl;
//        cout << "Numarul de restante pentru  materia " <<  i << " este " << restante << endl;
//        cout << "************************" << endl;
//        a[i][nrStudenti + 1] = medie;
//        a[i][nrStudenti + 2] = restante;
//        a[i][nrStudenti + 3] = absente;
//    }
//
//    for (j=1; j<=nrStudenti; j++) {
//        total = 0;
//        absente = 0;
//        restante = 0;
//        for (i=1; i<=nrMaterii; i++) {
//            if (a[i][j] >= 1) {
//                total += a[i][j];
//            } else if (a[i][j] == 0) {
//                absente++;
//            }
//            if (a[i][j] < 5) {
//                restante++;
//            }
//        }
//
//        medie = total / nrMaterii;
//        cout << "Media pentru studentul " << j << " este " << medie << endl;
//        cout << "Numarul de absente pentru  studentul " <<  j << " este " << absente << endl;
//        cout << "Numarul de restante pentru  studentul " <<  j << " este " << restante << endl;
//
//        a[nrMaterii+1][j] = medie;
//        a[nrMaterii+2][j] = restante;
//        a[nrMaterii+3][j] = absente;
//    }
//
//    for (i=1; i<= nrMaterii + 3; i++) {
//        for (j=1; j<=nrStudenti+3; j++) {
//            cout << a[i][j] <<"\t";
//        }
//        cout << endl;
//    }
//}


//functii

//ecuatii de gradul I
//void ecuatiegrad1 (float x, float y) {
//    if (x == 0) {
//        cout << "Ecuatia nu are solutie";
//    } else {
//        cout << "raspunsul este: ";
//        cout << -y/x;
//        cout << '\n';
//    }
//}
//
//int main() {
//    float a, b;
//    char r = 'y';
//
//    while (r == 'y') {
//        cout << "a = ";
//        cin >> a;
//        cout << "b = ";
//        cin >> b;
//        ecuatiegrad1(a, b);
//        cout << "Continue? (y/n): ";
//        cin >> r;
//        cout << '\n';
//    }
//}

//cmmdc cel mai mare divizor comun
//float cmmdc (float m, float n) {
//    while (n !=m) {
//        if (n>m) {
//            n = n-m;
//        } else {
//            m = m-n;
//        }
//    }
//    return n;
//}
//
//int main () {
//    int v[0], n, i;
//    cout << "introduceti dimensiunea sirului: ";
//    cin >> n;
//    for (i=1; i <=n; i++) {
//        cout << "v[" << i << "]=";
//        cin >> v[i];
//    }
//    for (i=1; i < n; i++) {
//        cout << cmmdc(v[i], v[i+1]) << "\n";
//    }
//};

//se introduce un numar n, sa se arate cel mai mare numar care se poate forma cu cifrele lui

float descSort(int v[100], int n) {
    int i, j, aux, m = 0;
    for (i=1; i < n; i++) {
        for (j=i+1; j<=n; j++) {
            if (v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
    for (i=1; i<=n; i++) {
        m = m * 10 + v[i];
    }
    return m;
}

int main () {
    int x, l=1, v[100];
    cout << "introduceti numarul: ";
    cin >> x;

    while (x != 0) {
        v[l] = x%10;
        l = l + 1;
        x=x/10;
    }

    cout << "nr maxim format este " << descSort(v, l-1);
}