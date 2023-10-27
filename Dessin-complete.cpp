#include <iostream>
using namespace std;

// Classe de base : Dessin
class Dessin {
public:
    // Constructeur
    Dessin() {}

    // Méthodes
    void tourner() {
      cout << "Tourner de Dessin\n";
    }

    void jouer_son() {
        cout << "Jouer son de Dessin\n";
    }
};

// Classe Carre dérivée de Dessin
class Carre : public Dessin {
public:
    Carre() : Dessin() {} // Constructeur
};

// Classe Cercle dérivée de Dessin
class Cercle : public Dessin {
public:
    Cercle() : Dessin() {} // Constructeur
};

// Classe Triangle dérivée de Dessin
class Triangle : public Dessin {
public:
    Triangle() : Dessin() {} // Constructeur
};

// Code de test
int main() {
    Carre c;
    c.tourner();
    c.jouer_son();

    Amibe a(10, 20);
    a.tourner();
    a.jouer_son();
    return 0;
}
