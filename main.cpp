#include <iostream>
using namespace std;

double a, b, x;

void f_liniowa(){
    cout << "Podaj wspolczynnik a i b funkcji liniowej: ";

		cout << "\na = ";
        cin >> a;

        cout << "b = ";
        cin >> b;

    if(a == 0){
   		cout << "\nFunkcja nie ma miejsc zerowych (stala)";
    }else{
    	cout << endl;
		x = -b/a;

 	    cout << "Miejsce zerowe x = " << x;
	
	}

    
}


int main(){

    f_liniowa();

    return 0;
}
