#include <iostream>

using namespace std;

int main()
{
    float pi = 3.14;
    float raio;
    float perimetro;
    float area;


    cout << "Digite o raio do circulo: ";
    cin >> raio;

    area = (pi * (raio * raio));
    perimetro = (2 * pi * raio);

    cout << "Um circulo de raio " << raio << " possui area " << area <<  " e perimetro " << perimetro << endl;

    return(0);
}
