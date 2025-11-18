#include <iostream>
#include <string>
using namespace std;

// -------------------- Clase 1: Playera --------------------
class Playera {
private:
    string talla;
    string color;
    string material;

public:
    Playera(string talla, string color, string material)
        : talla(talla), color(color), material(material) {}

    void mostrarInfo() {
        cout << "Playera - Talla: " << talla 
             << ", Color: " << color 
             << ", Material: " << material << endl;
    }
};

// -------------------- Clase 2: Short --------------------
class ShortDeportivo {
private:
    string talla;
    bool tieneBolsas;
    string tipoTela;

public:
    ShortDeportivo(string talla, bool tieneBolsas, string tipoTela)
        : talla(talla), tieneBolsas(tieneBolsas), tipoTela(tipoTela) {}

    void mostrarInfo() {
        cout << "Short - Talla: " << talla 
             << ", Bolsas: " << (tieneBolsas ? "Sí" : "No")
             << ", Tela: " << tipoTela << endl;
    }
};

// -------------------- Clase 3: Accesorio --------------------
class Accesorio {
private:
    string nombre;
    string color;
    double precio;

public:
    Accesorio(string nombre, string color, double precio)
        : nombre(nombre), color(color), precio(precio) {}

    void mostrarInfo() {
        cout << "Accesorio - Nombre: " << nombre
             << ", Color: " << color
             << ", Precio: $" << precio << endl;
    }
};

// -------------------- MAIN --------------------
int main() {

    Playera p1("M", "Negro", "Algodón");
    ShortDeportivo s1("L", true, "Dry-Fit");
    Accesorio a1("Muñequera", "Rojo", 150.0);

    cout << "=== Productos creados ===" << endl;
    p1.mostrarInfo();
    s1.mostrarInfo();
    a1.mostrarInfo();

    return 0;
}
