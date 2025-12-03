#include <iostream>
#include <string>
using namespace std;

// Clase Producto
class Producto {
protected:
    string color;

public:
    Producto(string color) : color(color) {}

    // GETTERS y SETTERS
    string getColor() { return color; }
    void setColor(string nuevoColor) { color = nuevoColor; }

    virtual void mostrarInfo() = 0;
};

// Clase Playera
class Playera : public Producto {
private:
    string talla;
    string material;

public:
    Playera(string color, string talla, string material)
        : Producto(color), talla(talla), material(material) {}

    string getTalla() { return talla; }
    string getMaterial() { return material; }
    void setTalla(string nuevaTalla) { talla = nuevaTalla; }
    void setMaterial(string nuevoMaterial) { material = nuevoMaterial; }

    void mostrarInfo() override {
        cout << "Playera - Talla: " << talla
             << ", Color: " << color
             << ", Material: " << material << endl;
    }
};

// Clase ShortDeportivo
class ShortDeportivo : public Producto {
private:
    string talla;
    bool tieneBolsas;
    string tipoTela;

public:
    ShortDeportivo(string talla, bool tieneBolsas, string tipoTela, string color)
        : Producto(color), talla(talla), tieneBolsas(tieneBolsas), tipoTela(tipoTela) {}

    string getTalla() { return talla; }
    bool getTieneBolsas() { return tieneBolsas; }
    string getTipoTela() { return tipoTela; }

    void setTalla(string nuevaTalla) { talla = nuevaTalla; }
    void setTieneBolsas(bool valor) { tieneBolsas = valor; }
    void setTipoTela(string nuevoTipoTela) { tipoTela = nuevoTipoTela; }

    void mostrarInfo() override {
        cout << "Short - Talla: " << talla
             << ", Color: " << color
             << ", Bolsas: " << (tieneBolsas ? "Sí" : "No")
             << ", Tela: " << tipoTela << endl;
    }
};

// Clase Accesorio
class Accesorio : public Producto {
private:
    string nombre;
    double precio;

public:
    Accesorio(string nombre, string color, double precio)
        : Producto(color), nombre(nombre), precio(precio) {}

    string getNombre() { return nombre; }
    double getPrecio() { return precio; }

    void setNombre(string nuevoNombre) { nombre = nuevoNombre; }
    void setPrecio(double nuevoPrecio) { precio = nuevoPrecio; }

    void mostrarInfo() override {
        cout << "Accesorio - Nombre: " << nombre
             << ", Color: " << color
             << ", Precio: $" << precio << endl;
    }
};

// Clase Main
int main() {

    cout << "CREAR PLAYERA\n";
    string tallaP, colorP, materialP;
    cout << "Talla: ";
    cin >> tallaP;
    cout << "Color: ";
    cin >> colorP;
    cout << "Material: ";
    cin >> materialP;

    Playera p1(colorP, tallaP, materialP);

    cout << "\nCREAR SHORT\n";
    string tallaS, colorS, telaS;
    int bols;

    cout << "Talla: ";
    cin >> tallaS;
    cout << "Color: ";
    cin >> colorS;
    cout << "¿Tiene bolsas? (1 = sí, 0 = no): ";
    cin >> bols;
    cout << "Tipo de tela: ";
    cin >> telaS;

    ShortDeportivo s1(tallaS, bols == 1, telaS, colorS);

    cout << "\nCREAR ACCESORIO\n";
    string nombreA, colorA;
    double precioA;

    cout << "Nombre: ";
    cin >> nombreA;
    cout << "Color: ";
    cin >> colorA;
    cout << "Precio: ";
    cin >> precioA;

    Accesorio a1(nombreA, colorA, precioA);

    cout << "\nPRODUCTOS CREADOS\n";
    p1.mostrarInfo();
    s1.mostrarInfo();
    a1.mostrarInfo();

    return 0;
}
