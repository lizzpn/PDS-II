#include <string>

using namespace std;

class Carro{
    private:
    float velocidade;
    string cor;
    float bateria;
    public:
    Carro(float velocidade, string cor){
        this->velocidade = velocidade;
        this->cor = cor;
        this->bateria = 100;
    }
    get_Speed() const { return velocidade; }
}