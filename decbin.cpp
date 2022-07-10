#include <iostream>
#include <conio.h>
using namespace std;

int main() {

    int num;
    int bin[8] = {0, 0, 0, 0, 0, 0, 0, 0};
    int i = 0, j; //contadores


    cout << "digite un numero: "; cin >> num;

    /*
        rango limite

        [0, 255]

    */

    if(num > 0) {

        while(i < 8){

            //divirde el valor entre 2

            if(num % 2 == 1){

                bin[i] = 1;

            } else if(num % 2 == 0){

                bin[i] = 0;

            } else if(bin[i] / 2 == 1 && i == 7) {

                bin[i] = 1;

            } else if(bin[i] / 2 == 0 && i == 7){

                bin[i] = 0;

            }

            num /= 2;
            i++;

        }

        for(i = 7; i >= 0; i--){ //imprime el resultado

            if(bin[i] == 1) {
                for(j = i; j >= 0; j--){

                    cout << bin[j] << " ";

                }

                break;

            }
        }

        cout << "\n";

    } else { //en caso de que el usuario digite 0

        cout << 0 << endl;

    }

    getch();
    return 0;

}
