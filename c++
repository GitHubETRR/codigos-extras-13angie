#include <iostream>
using namespace std; // para no tener q poner std:: repetidas veces

// creo función para reproducir una cancion
void ReproducirCancion() {
    cout << "Reproduciendo canción de Taylor Swift..\n";
}

int main() {
    cout << "Bienvenido al reproductor de música de Taylor Swift\n";//\n es lo mismo q endl; se usa para cuando necesito q la linea de salida este seguida de una nueva linea o que los datos se escriban de inmediato
    
    char opcion;
    do{
        cout << "Presione 1 para reproducir una cancion: ";
        cin >> opcion;
        
        if (opcion == '1') {
        ReproducirCancion();
        break;//sale del bucle si se cumple la condicion
        
        } else {
        cout << "Opción no válida.\n";
        }
        
    }while(true);//vuelve a preguntar(crea un bucle)
    

    return 0;
}
