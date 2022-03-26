#include <iostream>
#include <math.h> 

using namespace std;
void calculate(float a, float b){
    if(a == 0){
        cout << "Nie jest to rownanie kwadratowe";
        return;
    }
    float c = 1;
    b = 4*b;
    float delta = b*b - 4*a*c;
    if(delta < 0){
        cout << "Nie ma rozwiazan.";
    }
    else if(delta > 0){
        float x1 = (-b - (sqrt(delta)))/(2*a);
        float x2 = (-b + (sqrt(delta)))/(2*a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    else {
        float x = (-b)/(2*a);
        cout << "x = " << x << "\n";
    }

}



int main(){

    float c,b;
    cout << "Podaj c: ";
    cin >> c;
    cout << "Podaj b: ";
    cin >> b;
    calculate(c,b);






    return 1;
}
