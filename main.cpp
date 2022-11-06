#include <iostream>
#include <math.h>
using namespace std;

double a, b, c, delta, x1, x2;

void f_liniowa(){
    cout << "FUNKCJA KWADRATOWA  ax^2 + bx + c = 0";
    
	cout << "\na = ";
    cin >> a;
    
    cout << "b = ";
    cin >> b;
      
	cout << "c = ";
    cin >> c;
        

    if(a > 0 || a < 0){
		int pow_b = pow(b,2);
		delta = pow_b - 4 * a * c;
		int sqrt_d = sqrt(delta);
		
		cout << "\nDelta: " << delta << endl;
				
		if(delta > 0){
			
			x1 = (-b - sqrt_d) / 2*a;
			x2 = (-b + sqrt_d) / 2*a;
			
			cout << "x1 = " << x1;
			cout << "\nx2 = " << x2;
		
		} else if(delta == 0){
			
			x1 = -b / 2*a;
			cout << "x1 = " << x1;
			
		} else if(delta < 0){
			
			cout << "Funkcja nie ma miejsc zerowych.";
			
		}
	
	}

    
}


int main(){

    f_liniowa();

    return 0;
}
