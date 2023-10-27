#include <iostream>
using namespace std;

// Classe de base : Dessin
class Dessin {
public:
    Dessin() {}

    void tourner() {
      cout << "Tourner de Dessin\n";
    }

    void jouer_son() {
        cout << "Jouer son de Dessin\n";
    }
};

// Classe Amibe dérivée de Dessin, avec des attributs supplémentaires
class Amibe : public Dessin {
private:
    int x, y;    
public:
    Amibe(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }

    int get_x() const { return x; }
    int get_y() const { return y; }

    void tourner() {
        // Code spécifique pour tourner l'Amibe
        cout << "Tourner de Amibe\n"; 
    }

    void jouer_son() {
        // Code spécifique pour jouer le son de l'Amibe
        cout << "Jouer de Amibe\n"; 
    }
};

// Code de test
int main() {
    Amibe amibe(10, 20);
    amibe.tourner();
    amibe.jouer_son();
}
