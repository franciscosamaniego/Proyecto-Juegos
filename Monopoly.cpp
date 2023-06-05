#include <iostream>

using namespace std;

void initialize(char tablero[11][11]) {
    for(int i = 0; i < 11; i++) {
        tablero[0][i] = '*';
        tablero[10][i] = '*';
        tablero[i][0] = '*';
        tablero[i][10] = '*';
    }
    tablero[0][0] = 'E';
    tablero[10][10] = 'E';
    tablero[10][0] = 'E';
    tablero[0][10] = 'E';
    for(int i = 1; i < 10; i++) {
        for(int j = 1; j < 10; j++) {
            tablero[i][j] = ' ';
        }
    }
}

void print(char tablero[11][11]) {
    for(int i = 0; i < 11; i++) {
        for(int j = 0; j < 11; j++) {
        cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}

int main(void) {
    char tablero[11][11] = {' '};
    initialize(tablero);
    print(tablero);
    return 0;
}