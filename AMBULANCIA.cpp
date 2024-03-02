#include <iostream>
#include <string>

using namespace std;

// Declaramos la clase Vehiculo
class Vehiculo {
public:
    // Atributos de la clase
    string color;
    string marca;
    float Km;  // Agregué el atributo Km que faltaba en la declaración

    // Constructor para inicializar atributos
    Vehiculo(string _color, string _marca, float _Km) {
        color = _color;
        marca = _marca;
        Km = _Km;

        // Imprimimos mensaje para indicar que el objeto vehiculo se creó
        cout << "Se creó el objeto vehiculo" << endl;
    }

    // Destructor se ejecuta cuando se destruye un objeto de la clase
    ~Vehiculo() {
        // Imprimimos un mensaje
        cout << "Se destruyó el objeto vehiculo." << endl;
    }

    // Agregamos Métodos y acciones del objeto
    // Método que representa la acción de encender vehículo
    void encender() {
        cout << "El vehiculo está encendido." << endl;
    }

    // Método que representa la acción de apagar vehiculo
    void apagar() {
        cout << "El vehiculo está apagado." << endl;
    }
};

// Función principal Main
int main() {
    // Creamos un objeto
    Vehiculo miVehiculo("negro", "Subaru", 0);

    // Hacemos un llamado a los métodos creados
    miVehiculo.encender();
    miVehiculo.apagar();

    return 0;
}
