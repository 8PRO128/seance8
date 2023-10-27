#include <iostream>
using namespace std;

class Batiment {
  private:
    string adresse;
    double superficie;
  
  public:
    Batiment(string a, double s): adresse(a), superficie(s) {}

    void set_adresse(string adresse) {
      this->adresse = adresse;
    }

    string get_adresse() {
      return adresse;
    }

    void set_superficie(double superficie) {
      this->superficie = superficie;
    }

    double get_superficie() {
      return superficie;
    }
};

class Maison: public Batiment {
  private:
    int nombre_de_pieces;

  public:
    Maison(string a, double s, int n) : Batiment(a, s) {
      this->nombre_de_pieces = n;
    }

    void afficher() {
      cout << "Adresse: " << this->get_adresse();
      cout << "Superficie: " << this->get_superficie();
      cout << "Pieces: " << nombre_de_pieces;
    }
};

int main() {
  Maison maison("Rue A", 40.4, 3);
  maison.afficher();

  return 0;
}