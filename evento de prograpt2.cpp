#include <iostream>
using namespace std;


void situacion3() {
    cout << "Situación 3: Envías un mensaje por error a otra persona.\n";
    cout << "1. Te disculpas inmediatamente.\n2. Lo ignoras.\n3. Inventas una excusa.\n4. Te ríes y haces chiste del error.\n5. Bloqueas a la persona.\n";
    int opcion;
    cin >> opcion;
    switch (opcion) {
        case 1: cout << "La persona lo entiende y no pasa a mayores.\n"; break;
        case 2: cout << "La otra persona queda confundida.\n"; break;
        case 3: cout << "Creen que eres poco confiable.\n"; break;
        case 4: cout << "Rompes el hielo, pero no siempre funciona.\n"; break;
        case 5: cout << "Evitas la confrontación, pero queda raro.\n"; break;
        default: cout << "Opción no válida.\n";
    }
}

void situacion4() {
    cout << "Situación 4: Tu PC se actualiza justo en un momento importante.\n";
    cout << "1. Esperas pacientemente.\n2. Maldices al sistema.\n3. Usas otro dispositivo.\n4. Cancelas la actualización a la fuerza.\n5. Entras en modo pánico.\n";
    int opcion;
    cin >> opcion;
    switch (opcion) {
        case 1: cout << "Pierdes tiempo, pero evitas problemas técnicos.\n"; break;
        case 2: cout << "Te desahogas, pero no cambia nada.\n"; break;
        case 3: cout << "Logras continuar con tu tarea por otro medio.\n"; break;
        case 4: cout << "Arruinas el sistema y empeora todo.\n"; break;
        case 5: cout << "No solucionas nada y solo te estresas más.\n"; break;
        default: cout << "Opción no válida.\n";
    }
}


int main() {
    int seleccion;
    do {
        cout << "\n--- SITUACIONES RANDOM ---\n";
        cout << "1. Encerrado en el baño\n";
        cout << "2. Atrapado en el ascensor\n";
        cout << "3. Mensaje enviado por error\n";
        cout << "4. PC se actualiza en mal momento\n";
        cout << "5. Autocorrector cambia mensaje\n";
        cout << "6. Encontrar dinero\n";
        cout << "0. Salir\n";
        cout << "Selecciona una situación (3-4): ";
        cin >> seleccion;

        switch (seleccion) {
          
            case 3: situacion3(); break;
            case 4: situacion4(); break;
          
       
            case 0: cout << "Saliendo del programa.\n"; break;
            default: cout << "Opción inválida. Intenta de nuevo.\n";
        }
    } while (seleccion != 0);

    return 0;
}
