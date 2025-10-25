// Lee los kilómetros desde la entrada y los convierte a millas.
// 1 kilómetro = 0.621 millas

#include <iostream>
using namespace std;

int main() {
    float km; 

    cout << "Ingrese los kilometros: ";
    cin >> km; 

    float miles = km * 0.621f; 

    cout << "Millas: " << miles << endl;

    return 0;
}

