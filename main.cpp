
using namespace std;
int main() {
    int g, i;
    real h, hm;

    i = 0;
    for (g = 1; g <= 7;) 
    {
        i = i + 1;
        cout << "Altezza acqua: ";
        cin >> h;
        hm = (h + h) / i;
        if (hm > 0) {
            cout << "Acqua alta"  ;
        } else {
            cout << "Livello normale" ;
        }
    }

    cout << "Altezza media è di " << hm ;

  
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
