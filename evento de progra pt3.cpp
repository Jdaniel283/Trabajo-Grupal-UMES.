#include <iostream>
using namespace std;

void situacion5() {
    cout << "Situación 5: El autocorrector cambia una palabra clave.\n";
    cout << "1. Envío otro mensaje corrigiendo.\n2. Me río de mi error.\n3. Culpo al teclado.\n4. Me disculpo formalmente.\n5. Lo dejo pasar.\n";
    int opcion;
    cin >> opcion;
    switch (opcion) {
        case 1: cout << "El receptor entiende el error rápidamente.\n"; break;
        case 2: cout << "Generas una reacción positiva, si hay confianza.\n"; break;
        case 3: cout << "No siempre te creen, pero suaviza el error.\n"; break;
        case 4: cout << "Demuestras responsabilidad y seriedad.\n"; break;
        case 5: cout << "El mensaje es malinterpretado.\n"; break;
        default: cout << "Opción no válida.\n";
    }
}

void situacion6() {
    cout << "Situación 6: Encuentras dinero tirado en la calle.\n";
    cout << "1. Lo entregas a la policía.\n2. Lo gastas inmediatamente.\n3. Preguntas si alguien lo perdió.\n4. Lo ignoras y sigues caminando.\n5. Te lo guardas 'por si acaso'.\n";
    int opcion;
    cin >> opcion;
    switch (opcion) {
        case 1: cout << "Actúas con honestidad, aunque nunca reclamen el dinero.\n"; break;
        case 2: cout << "Disfrutas un rato, pero con cargo de conciencia.\n"; break;
        case 3: cout << "Alguien agradecido lo recupera.\n"; break;
        case 4: cout << "Otro lo encuentra y se lo lleva.\n"; break;
        case 5: cout << "Te quedas con él, pero con duda constante.\n"; break;
        default: cout << "Opción no válida.\n";
    }
}

int main() {
    int seleccion;
    do {
        cout << "\n--- SITUACIONES RANDOM ---\n";
    
        cout << "5. Autocorrector cambia mensaje\n";
        cout << "6. Encontrar dinero\n";
        cout << "0. Salir\n";
        cout << "Selecciona una situación (0, 5-6): ";
        cin >> seleccion;

        switch (seleccion) {
    
            case 5: situacion5(); break;
            case 6: situacion6(); break;
            case 0: cout << "Saliendo del programa.\n"; break;
            default: cout << "Opción inválida. Intenta de nuevo.\n";
        }
    } while (seleccion != 0);

    return 0;
}
