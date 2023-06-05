#include <iostream>

using namespace std;

void initialize(char tablero[15][15]) {
    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 15; j++) {
            if(i > 5 && i < 9 || j > 5 && j < 9) tablero[i][j] = '*';
            else if()
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