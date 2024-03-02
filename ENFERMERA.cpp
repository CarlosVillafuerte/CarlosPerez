#include <iostream>
#include <string>

using namespace std;

// Declaramos la clase Enfermera
class Enfermera {
public:
    // Atributos de la clase
    string edad;
    string area;
    string ayudar;
    string especialidades;

    // Constructor para inicializar atributos
    Doctor(string _edad, string _area, string _ayudar, string _especialidades) {
        edad = _edad;
        area = _area;
        ayudar = _ayudar;
        especialidades = _especialidades;

        /* Imprimimos mensaje para indicar que el objeto Enfermera se creó */
        cout << "Se creó el objeto Enfermera" << endl;
    }

    /* Destructor se ejecuta cuando se destruye un objeto de la clase */
    ~Enfermera() {
        // Imprimimos un mensaje
        cout << "Se destruyó el objeto Enfermera." << endl;
    }

    // Agregamos Método y acciones del objeto
    // Método que representa la acción de Enfermera ayudar al doctor
    void hacerCirugias() {
        cout << "El Enfermera ayudar al doctor." << endl;
    }
};

int main() {
    // Creamos un objeto Doctor llamado "miEnfermera"
    Enfermera miEnfermera("35", "area", "Operar", "Cirugía General");

    // Llamamos al método ayudar al doctor del objeto miEnfermera
    miEnfermera.ayudaraldoctor();

    return 0;
}
