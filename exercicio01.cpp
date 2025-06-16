//Código para gerar um arquivo 50%

#include <iostream>
#include <fstream>

using namespace std;

int main () {
    ofstream image_Input;
    image_Input.open("./images/Imagem.ppm");

    if (image_Input.is_open()) {
        //inicio da imagem
        image_Input << "P3" << endl;
        image_Input << "70 50" << endl; 
        image_Input << "255" << endl;

        //Altura e largura ( imagem de 50 de altura por 70 de largura)
        for (int y = 0; y < 50; y++) {
      
            for (int x = 0; x < 70; x++) {
                if (x < 35) {
                    image_Input << "255 0 0 "; 
                } else {
                    image_Input << "0 0 255 "; 
                }
            }
            image_Input << endl;
        }
    }

    image_Input.close();
    return 0;
}
