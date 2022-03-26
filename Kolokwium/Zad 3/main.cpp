#include <iostream>


using namespace std;



int max(int ns[10]){
    int min_idx = -1;
    int min_val = 0;

    for(int i =0;i<10;i++){
        if(ns[i] < 0 && (ns[i] > min_val || min_val == 0)){
            min_idx = i;
            min_val = ns[i];
        }
    }
    if(min_idx != -1) return min_idx;

    return -1111;
}

int main(){

    int ns[10];
    cout << "Wczytaj 10 liczb: \n";
    for(int i =0;i<10;i++){
        cin >> ns[i];
    }

    int idx = max(ns);
    if(idx == -1111){
        cout << "Brak ujemnych liczb\n";
    }
    else{
        cout << "wartosc: " << ns[idx];
    }







    return 1;
}
