#include <iostream>
#include "funkcja_liniowa.h"
using namespace std;

double a, b, x;

void f_liniowa(){
    cout << "Podaj wspolczynnik a i b funkcji liniowej: ";
    cout << "\na nie moze byc 0\n";

    while(a == 0){
        cout << "a = ";
        cin >> a;

        cout << "b = ";
        cin >> b;

        cout << endl;
    }

    x = -b/a;

    cout << "Miejsce zerowe x = " << x;

}


int main(){

    f_liniowa();

    return 0;
}
