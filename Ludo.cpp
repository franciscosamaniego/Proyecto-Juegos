#include <iostream>
#include <conio.h>

using namespace std;

void initialize(char tablero[15][15]) {
    for(int i = 0; i <= 15; i++) {
        for(int j = 0; j < 15; j++) {
            if(j == 1 && i == 6 || j > 0 && j < 7 && i == 7) tablero[i][j] = ' '; // la b hace referencia  al azul para no confundir con el amarillo
            else if(j == 13 && i == 8 || j > 7 && j < 14 && i == 7) tablero[i][j] = ' ';
            else if(j == 8 && i == 1 || j == 7 && i > 0 && i < 7) tablero[i][j] = ' ';
            else if (j == 6 && i == 13 || j == 7 && i > 7 && i < 14) tablero[i][j] = ' ';
            else if ((i == 1 || i == 4)  && (j == 1 || j == 4)) tablero[i][j] = 'B';
            else if ((i == 1 || i == 4) && (j == 10 || j == 14)) tablero[i][j] = 'R';
            else if((i == 10 || i == 14) && (j == 1 || j == 4)) tablero[i][j] = 'A';
            else if ((i == 10 || i == 14) && (j == 10 || j == 14)) tablero[i][j] = 'V';
            else if(i > 5 && i < 9 || j > 5 && j < 9 ) tablero[i][j] = '*';
            else tablero[i][j] = ' ';
        }
    }
}

void print(char tablero[15][15]) {
    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 15; j++) {
            cout << tablero[i][j] << " ";
        }
        cout << endl;
    }
}

int main(void) {
    char tablero[15][15];
    initialize(tablero);
    print(tablero);
    return 0;
}