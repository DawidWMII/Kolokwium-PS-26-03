
#include <iostream>

using namespace std;
void foo(int n){
    cout << "Wczytaj liczby \n";
    int even = 0;
    int odd =0;
    int tmp = 0;
    for(int i =0;i<n;i++){
        cin >> tmp;
        if(tmp % 2 == 0) even++;
        else odd++;
    }
    cout << "Ilosc liczb parzystych: " << even << "\n";
    cout << "Ilosc liczb nieparzystych: " << odd;

}




int main(){

    int n;
    cout << "Podaj n:";
    cin >> n;
    foo(n);





    return 0;
}
