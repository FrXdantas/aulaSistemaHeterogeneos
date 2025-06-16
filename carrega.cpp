#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream image_file("./images/Imagem.ppm");

    string format;
    int width, height, max_val;

    if (!image_file.is_open()) {
        cerr << "Erro ao abrir o arquivo." << endl;
        return 1;
    }

    //Inicio
    image_file >> format;
    image_file >> width >> height;
    image_file >> max_val;

    cout << "Formato: " << format << endl;
    cout << "Largura: " << width << ", Altura: " << height << endl;
    cout << "Valor máximo: " << max_val << endl;

    //Carrega pixels
    int r, g, b;
    for (int y = 0; y < height; y++) {
        cout << "Linha " << y << ": ";
        for (int x = 0; x < width; x++) {
            image_file >> r >> g >> b;
            cout << "(" << r << "," << g << "," << b << ") ";
        }
        cout << endl;
    }

    image_file.close();
    return 0;
}
