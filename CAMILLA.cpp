#include <iostream>
#include <string>

using namespace std;

// Declaramos la clase Camilla
class Camilla {
public:
    // Atributos de la clase 
    string tamano;
    string comodidad;
    string color;
    string marcas;

    // Constructor para inicializar atributos
    Camilla(string _tamano, string _comodidad, string _color, string _marcas) {
        tamano = _tamano;
        comodidad = _comodidad;
        color = _color;
        marcas = _marcas;

        // Imprimimos mensaje para indicar que el objeto Camilla se creó
        cout << "Se creó el objeto Camilla" << endl;
    }

    // Destructor se ejecuta cuando se destruye un objeto de la clase
    ~Camilla() {
        // Imprimimos un mensaje
        cout << "Se destruyó el objeto Camilla." << endl;
    }

    // Agregamos Método y acciones del objeto
    // Método que representa la acción de la camilla llevando pacientes
    void llevaPacientes() {
        cout << "La camilla lleva pacientes." << endl;
    }
};

// Función principal Main
int main() {
    // Creamos un objeto Camilla llamado "MiCamilla"
    Camilla miCamilla("Grande", "Muy cómoda", "Blanca", "ABC");

    // Llamamos al método llevaPacientes del objeto miCamilla
    miCamilla.llevaPacientes();

    return 0;
}
