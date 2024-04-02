#include <set>
#include <vector>
#include <iostream>

/**
 * Esta funcao imprime a string 'Hello, World!\n' na saida padrão.
 *
 * \return Essa funcao _nao_ retorna nada! Ela somente imprime algo na saida
 *   padrao.
 */
void hello_world(void) {
  // TODO
  std::cout << "Hello, World!\n";
}

/**
 * Esta funcao soma dois numeros inteiros e retorna o resultado da soma.
 * Exemplo:
 *   soma(2, 3) == 5
 * \param <a> O primeiro parametro da soma.
 * \param <b> O primeiro parametro da soma.
 * \return A soma dos parametros a e b.
 */
int soma(const int a, const int b) {
  // TODO
  return a+b;
}

/**
 * Esta funcao conta a quantidade de digitos em uma string.
 * Exemplos:
 *   digits("") == 0
 *   digits("OiBc") == 0
 *   digits("OiB2c") == 1
 *   digits("Oi1B2c") == 2
 * \param <str> A string que deve ser processada.
 * \return O numero de digitos na string. Note que esse valor eh sempre maior
 *   ou igual a zero.
 */
unsigned int digitos(std::string &str) {
  // TODO
  int cont = 0;
  for(char c : str){
    if(c >= '0' && c<= '9'){
        cont++;
    }
  }
  std::cout << '\n';;
  return cont;
}

/**
 * Esta funcao calcula o maior divisor comum de dois numeros inteiros.
 * Exemplo:
 *   gcd(18, 12) == 6
 *   gcd(6, 12) == 6
 *   gcd(7, 5) == 1
 * \param <a> O primeiro dos numeros. Nao precisa tratar o caso em que a for 0.
 * \param <b> O segundo dos numeros. Nao precisa tratar o caso em que b for 0.
 * \return O maior divisor comum de a e b.
 */
unsigned int gcd(const unsigned int a, const unsigned int b) {
  // TODO
  unsigned int divisor = 0;
  for(unsigned int i=1; i<=a && i<= b; i++){
    if(a%i==0 && b%i==0){
        divisor = i;
    }
  }
  return divisor;
}

///============================================================================
/// O Resto do arquivo contem somente codigo de testes. Fique a vontade para
/// ler a implementacao desses testes. Porem, nao modifique essas
/// implementacoes.
///============================================================================

void testa_soma() {
  int a = 0, b = 0;
  std::cin >> a >> b;
  std::cout << soma(a, b) << std::endl;
}

void testa_digitos() {
  std::string word;
  std::cin >> word;
  std::cout << digitos(word) << std::endl;
}

void testa_gcd() {
  int a = 0, b = 0;
  std::cin >> a >> b;
  std::cout << gcd(a, b) << std::endl;
}

int main() {
  char s;
  std::cin >> s;
  switch(s) {
    case 'h':
      hello_world();
      break;
    case 's':
      testa_soma();
      break;
    case 'd':
      testa_digitos();
      break;
    case 'g':
      testa_gcd();
      break;
    default:
      std::cout << "Teste invalido: " << s << std::endl;
  }
}