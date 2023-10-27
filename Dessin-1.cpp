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

// Classe Triangle dérivée de Dessin
class Triangle : public Dessin {
public:
    Triangle() : Dessin() {} 
};

// Code de test
int main() {
    Triangle triangle;
    triangle.tourner();
    triangle.jouer_son();

    Dessin triangle2 = Triangle();
    triangle2.tourner();
    triangle2.jouer_son();
}
