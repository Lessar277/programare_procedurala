////
//// Created by Catalin on 02/04/17.
////
//
//#include <iostream>
//#include <string.h>
//#include <math.h>
//#include <stdio.h>
//#include <stdlib.h>
//
//using namespace std;
//
//
////structs
//int main() {
//
////    int i, j, n;
////    cout << "Studenti >> ";
////    cin >> n;
////    struct student {
////        int codMatricol;
////        int note[10];
////        float medie;
////    };
////    struct student aux;
////    struct student studenti[100];
////
////    for (i = 0; i < n; i++) {
////        cout << "cod matricol >> ";
////        cin >> studenti[i].codMatricol;
////        cout << "nota 1 >> ";
////        cin >> studenti[i].note[1];
////        cout << "nota 2 >> ";
////        cin >> studenti[i].note[2];
////        cout << "nota 3 >> ";
////        cin >> studenti[i].note[3];
////        studenti[i].medie = ((float) studenti[i].note[1] + studenti[i].note[2] + studenti[i].note[3]) / 3;
////        cout << "media studentului cu nr matricol " << studenti[i].codMatricol << " este " << studenti[i].medie << "\n";
////    }
////    for (i = 0; i < n; i++) {
////        for (j = i; j <= n; j++) {
////            if (studenti[i].medie < studenti[j].medie) {
////                aux = studenti[i];
////                studenti[i] = studenti[j];
////                studenti[j] = aux;
////            }
////        }
////    }
////    cout << "nr     | \t" << "Nr. Matricol     | \t" << "Medie \n";
////    cout << "---------------------------------------\n";
////    for (i = 0; i < n; i++) {
////        cout << i + 1 << "      | \t\t\t" << studenti[i].codMatricol << "     | \t" << studenti[i].medie << "\n";
////        cout << "---------------------------------------\n";
////    }
//
//    //==========================================================================================
//
////    int i, n;
////
////    struct interval {
////        int zi, luna, an;
////    };
////    struct interval intervale[100];
////    struct interval vechime;
////
////    cout << "cate intervale? ";
////    cin >> n;
////
////    for (i = 0; i < n; i++) {
////        cout << "Zi >> ";
////        cin >> intervale[i].zi;
////        cout << "luna >> ";
////        cin >> intervale[i].luna;
////        cout << "an >> ";
////        cin >> intervale[i].an;
////    }
////    for (i = 0; i < n; i += 2) {
////        vechime.an += intervale[i + 1].an - intervale[i].an;
////        vechime.luna += intervale[i + 1].luna - intervale[i].luna;
////        vechime.zi += intervale[i + 1].zi - intervale[i].zi;
////        if (vechime.zi < 0) {
////            vechime.zi += 30;
////            vechime.luna -= 1;
////        }
////        if (vechime.luna < 0) {
////            vechime.luna += 12;
////            vechime.an -= 1;
////        }
////        while (vechime.zi >=30) {
////            vechime.luna += 1;
////            vechime.zi -= 30;
////        }
////        while (vechime.luna >= 12) {
////            vechime.an += 1;
////            vechime.luna -= 12;
////        }
////    }
////    cout << "vechime totala: \n";
////    cout << vechime.an << " ani, " << (vechime.luna != 0) << " luni, " << vechime.zi << " zile";
//
//    //==========================================================================================
//
////    //STRINGS
////    char a[1000] = "";
////    char b[1000] = "";
////
////    cin.get(a, 4);
////    cout << a;
////
////    //length
////    strlen(a);
////
////    //copy (a = b)
////    strcpy(a, b);
////
////    //concat
////    strcat(a, b);
////
////    //ia primele n caractere din b si le lipeste la a
////    strncat(a, b, 5);
////
////    //cauta pe s in a,
////    strchr(a, 's');
////    strrchr(a, 's');
////
////    //compare
////    //< 0 - a < b
////    // = 0 - a = b
////    // > 0 - a > b
////    strcmp(a, b);
////
////    strlwr(a);
////    strupr(a);
//
//    //cauta vocale intr-un cuvant
//
////    char a[101], v[] = "aiueoAIUEO", aux[101];
////
////    cin.get(a, 100);
////
////    int i = 0, j;
////
////
////    for (j = 0; j < strlen(a); j++) {
////
////        if (strchr(v, a[j]) != 0) {
////            i = i + 1;
////            strcpy(aux, a + j);
////            strcpy(a + j + 1, aux);
////            a[j + 1] = '*';
////
////        }
////    }
////    cout << a << "\n";
////    cout << "sunt " << i << " vocale";
//
//    //SORTARE STRINGURI
//
////    char a[100][100], aux[100];
////    int i,j, n;
////    cout << "Cate nume?";
////    cin >> n;
////
////    for (i = 0; i < n; i++) {
////        cin.get();
////        cin.get(a[i], 50);
////
////    }
////
////    for (i = 0; i < n; i++) {
////        for (j = i+1; j < n; j++) {
////            if (strcmp(a[i], a[j]) > 0) {
////                strcpy(aux, a[i]);
////                strcpy(a[i], a[j]);
////                strcpy(a[j], aux);
////            }
////        }
////    }
////
////    for (j = 0; j < n; j++) {
////        cout << a[j] << "\n";
////    }
//
//    //cautare de substr
////
////    char s[100], c[10], b[10], *p, aux[100], aux2[100];
////    cout << "Introduceti textul: ";
////    cin.get(s, 100);
////    cin.get();
////
////
////    cout << "cuvantul cautat: ";
////    cin.get(c, 10);
////    cin.get();
////
////    cout << "cuvantul nou: ";
////    cin.get(b, 10);
////    cin.get();
////
////    p = strstr(s, c);
////
////    while (p) {
////        strcpy(aux, b);
////        strcat(aux, p + strlen(c));
////        strcpy(p, aux);
////        p = strstr(p,c);
////
////    }
////    cout << s;
//
//
//
//// FISIERE
////    char x[99999];
////
////    FILE *f;
////    f = fopen("/Users/catalin/Documents/facultate/programare_procedurala/dataset.txt", "r");
////
////    if (f == NULL) {
////        cout << "sorry bruh";
////    }
////    else {
////        while (fgets(x, 100, f) != NULL) {
////            cout << x;
////        }
////
////    }
////    fclose(f);
////
////    int i = 0, j = 0, n = 0, aux = 0;
////    int arr[100];
////    char x[1000];
////
////    FILE *intrare;
////    intrare = fopen("/Users/catalin/Documents/facultate/programare_procedurala/intrare.txt", "r");
////
////    FILE *iesire;
////    iesire = fopen("/Users/catalin/Documents/facultate/programare_procedurala/iesire.txt", "a");
////
////    //read numbers
////    if (intrare == NULL && iesire == NULL) {
////        cout << "unul din fisiere nu a putut fi deschis";
////    } else {
////        while (!feof(intrare)) {
////            fscanf(intrare, "%d", &arr[n]);
////            n++;
////        }
////    }
////
////    //sort
////    for (i = 0; i < n; i++) {
////        for (j = i + 1; j < n; j++) {
////            if (arr[i] > arr[j]) {
////                aux = arr[i];
////                arr[i] = arr[j];
////                arr[j] = aux;
////            }
////        }
////    }
////
////    for (i = 0; i < n; i++) {
////        cout << arr[i] << " ";
////    }
////
////    //write numbers
////    for (i=0;i<n;i++) {
////        fprintf(iesire, "%d ", arr[i]);
////    }
////    fputs("\nMinimul este ", iesire);
////    fprintf(iesire, "%d", arr[0]);
////    fputs("\nMaximul este ", iesire);
////    fprintf(iesire, "%d", arr[n-1]);
////
////    //close files
////    fclose(intrare);
////    fclose(iesire);
//
//    struct student {
//        char CNP[13];
//        char Nume[50];
//        float n1, n2, n3, media;
//        int varsta;
//    } studenti[100];
//}
//
//
//
//
//
//
//
