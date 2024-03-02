#include <iostream>
#include <string>

using namespace std;

// Declaramos la clase Pastilla
class Pastilla {
public:
    // Atributos de la clase
    string gel;
    string dolor;
    string pildora;
    string miligramos;

    // Constructor para inicializar atributos
    Pastilla(string _gel, string _dolor, string _pildora, string _miligramos) {
        gel = _gel;
        dolor = _dolor;
        pildora = _pildora;
        miligramos = _miligramos;

        // Imprimimos mensaje para indicar que el objeto pastilla se creó
        cout << "Se creó el objeto Pastilla" << endl;
    }

    // Destructor se ejecuta cuando se destruye un objeto de la clase
    ~Pastilla() {
        // Imprimimos un mensaje
        cout << "Se destruyó el objeto Pastilla." << endl;
    }

    // Agregamos Método y acciones del objeto
    // Método que representa la acción de tomar
    void tomar() {
        cout << "Tomar pastilla." << endl;
    }
};

// Función principal Main
int main() {
    // Creamos un objeto Pastilla llamado "miPastilla"
    Pastilla miPastilla("Azul", "Cabeza", "Aspirina", "500mg");

    // Llamamos al método tomar del objeto miPastilla
    miPastilla.tomar();

    return 0;
}

