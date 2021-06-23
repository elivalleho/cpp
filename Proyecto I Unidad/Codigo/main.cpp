#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
void ingresoDeInventario() {
    string seleccion = "";
    int cantidad = 0;

    system("cls");

    cout << endl;
    cout << "**************" << endl;
    cout << "MENU DE JUEGOS" << endl;
    cout << "**************" << endl;
    cout << "Seleccione un juego: ";
    cin >> starShip();
    cout << endl;
    cout << "Ingrese la cantidad del producto: ";
    cin >> snake();
    cout << endl;

    return 0;
}
