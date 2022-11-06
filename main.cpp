#include <iostream>
using namespace std;

double a, b, c, x;

void f_liniowa(){
    cout << "Podaj wspolczynniki a, b, c funkcji liniowej: ";

		cout << "\na = ";
        cin >> a;

        cout << "b = ";
        cin >> b;
        
        cout << "c = ";
        cin >> c;
        

    if(a==0){
		if(b==0){
			if(c==0){
				cout << "Rownanie ma nieskonczenie wiele rozwiazan";
			} else {
				cout << "Rownanie jest sprzeczne";
			}
		} else {
			if(c==0){
				cout << "Rownanie ma nieskonczenie wiele rozwiazan";	
			} else {
				cout << "Rownanie nie ma miejsc zerowych";
			}
		}
	} else {
		int x;
		x = -c/a;
		cout << "Rownanie ma jedno miejsce zerowe: " << x;
	}

    
}


int main(){

    f_liniowa();

    return 0;
}
