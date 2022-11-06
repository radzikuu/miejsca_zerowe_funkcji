#include <iostream>
#include <math.h>
using namespace std;

double a, b, c, delta, x1, x2;
int wybor;


void licz_funkcje(){
	cout << "Ktora funkcje chcesz obliczyc?" << endl;
	
	cout << "1) FUNKCJA LINIOWA ax + b" << endl;
    cout << "2) FUNKCJA KWADRATOWA  ax^2 + bx + c" << endl;
    
    cout << "\nWybieram: ";
    cin >> wybor;
    
    if(wybor == 1){
    	cout << "\nObliczam: FUNKCJA LINIOWA" << endl;
	
		cout << "\na = ";
    	cin >> a;
    
    	cout << "b = ";
    	cin >> b;	
		
		x1 = -b/a;
			
		if(a > 0){
			cout << "Miejsce zerowe: " << x1;
			cout << "\nFunkcja jest rosnaca";
			
		} else if(a == 0){
			cout << "Nie ma miejsca zerowego";
			cout << "\nFunkcja jest stala";
			
		} else if(a < 0){
			cout << "Miejsce zerowe: " << x1;
			cout << "\nFunkcja jest malejaca";
		}
    	
	}else if(wybor == 2){
		cout << "\nObliczam: FUNKCJE KWADRATOWA" << endl;
    	
    	cout << "\na = ";
    	cin >> a;
    
    	cout << "b = ";
    	cin >> b;
    	
    	cout << "c = ";
    	cin >> c;
    
    	if(a > 0 || a < 0){
			int pow_b = pow(b,2);
			delta = pow_b - 4 * a * c;
			double sqrt_d = sqrt(delta);
			
			cout << "\nDelta: " << delta << endl;
					
			if(delta > 0){
				x1 = (-b - sqrt_d) / (2*a);
				x2 = (-b + sqrt_d) / (2*a);
				
				cout << "x1 = " << x1;
				cout << "\nx2 = " << x2;
			
			} else if(delta == 0){
				x1 = -b / (2*a);
				cout << "x1 = " << x1;
				
			} else if(delta < 0){
				cout << "Funkcja nie ma miejsc zerowych.";	
			}	
		}
		
		else if(a == 0){
			cout << "\nFUNKCJA MA POSTAC LINIOWA: \n\n";
			x1 = -c/b;
			
			if(b > 0){
				cout << "Miejsce zerowe: " << x1;
				cout << "\nFunkcja jest rosnaca";
			
			} else if(b == 0){
				cout << "Nie ma miejsca zerowego";
				cout << "\nFunkcja jest stala";
			
			} else if(b < 0){
				cout << "Miejsce zerowe: " << x1;
				cout << "\nFunkcja jest malejaca";
			}	
		}
	}
}


int main(){

    licz_funkcje();

    return 0;
}
