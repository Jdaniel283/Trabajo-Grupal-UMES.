#include <iostream>
using namespace std;

void situacion1() {
    cout << "Situación 1: Chocas un vehículo.\n";
    cout << "1. te escapas con todo y vehiculo\n2. sales a verificar \n3.llamas algun familiar o amigo.\n4.te desapareces y dejas el vehiculo.\n5. te haces responsable en el escenario.\n";
    int opcion;
    cin >> opcion;
    switch (opcion) {
        case 1: cout << "habra personal buscandote.\n"; break;
        case 2: cout << " revisas ambos vehiculos.\n"; break;
        case 3: cout << "Esperas mucho, pero al final alguien llega.\n"; break;
        case 4: cout << "sales asustado y te escondes en casa\n"; break;
        case 5: cout << "llegan a un acuerdo.\n"; break;
        default: cout << "Opción no válida.\n";
    }
}

void situacion2() {
    cout << "Situación 2: Te quedas atrapado en el ascensor.\n";
    cout << "1. Presionas el botón de emergencia.\n2. Golpeas la puerta.\n3. Te sientas a esperar.\n4. Llamas a alguien con tu celular.\n5. Entras en panico.\n";
    int opcion;
    cin >> opcion;
    switch (opcion) {
        case 1: cout << "La asistencia llega en pocos minutos.\n"; break;
        case 2: cout << "Te lastimas la mano y nadie responde.\n"; break;
        case 3: cout << "Esperas horas hasta que alguien se da cuenta.\n"; break;
        case 4: cout << "Tu contacto avisa a emergencias.\n"; break;
        case 5: cout << "Te desesperas y te cansas innecesariamente.\n"; break;
        default: cout << "Opción no válida.\n";
    }
}


int main() {
    int seleccion;
    do {
        cout << "\n--- SITUACIONES RANDOM ---\n";
        cout << "1. accidente vehicular\n";
        cout << "2. Atrapado en el ascensor\n";
        cout << "0. Salir\n";
        cout << "Selecciona una situación (0-2): ";
        cin >> seleccion;

        switch (seleccion) {
            case 1: situacion1(); break;
            case 2: situacion2(); break;
            case 0: cout << "Saliendo del programa.\n"; break;
            default: cout << "Opción inválida. Intenta de nuevo.\n";
        }
    } while (seleccion != 0);

    return 0;
}
