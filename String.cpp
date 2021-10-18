#include <iostream>
#include <string.h>
using namespace std;

int main() {
    char **mass = new char *[8];


    for(int i = 0; i<3;i++) {
        mass[i] = new char[20];
        cin >> mass[i];
    }
    for(int i = 0 ; i < 3; i++){
        for(int j = i+1; j < 3; j++)
            if(strcmp(mass[i], mass[j]) > 0){
                char* tmp = mass[i];
                mass[i] = mass[j];
                mass[j] = tmp;
            }
    }
    for(int i = 0; i < 3; i++){
        cout << mass[i] << endl;
    }

        return 0;
}
