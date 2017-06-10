//
// Created by Catalin on 14/05/17.
//

#include <iostream>
#include <string.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct student {
    char CNP[13];
    char Nume[30];
    int n1, n2, n3;
    float media;
    int varsta;
} studenti[100];

float calcul_medie(int a, int b, int c) {
    return (a+b+c)/3;
};

int calcul_varsta() {};
int sortare_alfabetica() {};
int sortare_medie() {
    
};

int main () {
    int x, n=0;
    char garbage[100];

    FILE *f, *g, *h;
    f = fopen("/Users/catalin/Documents/facultate/programare_procedurala/intrare.txt", "r");

    if (f == NULL) {
        cout << "eroare la deschiderea fisierului";
    } else {
        while(!feof(f)) {
            fgets(studenti[n].CNP, 14, f);
            cout << "CNP: " << studenti[n].CNP << "; ";
            fgets(garbage, 1, f);
            fgets(studenti[n].Nume, 31, f);
            cout << "Nume: " << studenti[n].Nume << "; ";
            fscanf(f, "%d", &studenti[n].n1);
            cout << "Matematica: "<< studenti[n].n1 << "; ";
            fscanf(f, "%d", &studenti[n].n2);
            cout << "Programare: "<< studenti[n].n2 << "; ";
            fscanf(f, "%d", &studenti[n].n3);
            cout << "Sport: "<< studenti[n].n3 << "; ";
            fgets(garbage, 2, f);
            studenti[n].media = calcul_medie(studenti[n].n1, studenti[n].n2, studenti[n].n3);
            cout << "Media: " << studenti[n].media << "\n";
            n++;
        }

    }
}