#include <iostream>
#include <vector>

using namespace std;

int main(){

    // 1) Declare uma variável do tipo inteiro e atribua o valor '10'
    int variavel_a = 10;
    // 2) Declare um ponteiro para inteiros e inicialize com valor nulo (aka 'nullptr')
    int* ponteiro = nullptr;
    
    // 3) Declare um vetor de inteiros e inicialze com valores de 9 a 0 (nessa ordem)
        //declarar um vetor
        vector<int> vetor;
        //inserir valores de 9 a 0 
        for (int i = 9; i >=0 ;i--){
            vetor.push_back(i);
        }
        
    // 4) Imprima o ENDEREÇO da variável declarada em (1)
    cout<<&variavel_a<<endl;

    // 5) Imprima o CONTEÚDO da variável declarada em (1)
    cout<<variavel_a<<endl;

    // 6) Imprima o ENDEREÇO da variável declarada em (2)
    cout<<&ponteiro<<endl;
    
    // 7) Imprima o CONTEÚDO da variável declarada em (2)
    cout<<ponteiro<<endl;
    
    // 8) Imprima o ENDEREÇO da variável declarada em (3)
    cout<<&vetor<<endl;
    
    // 9) Imprima o ENDEREÇO da primeira posição da variável declarada em (3)
    cout<<&vetor[0]<<endl;
    
    // 10) Imprima o CONTEÚDO da primeira posição da variável declarada em (3)
    cout<<vetor[0]<<endl;
    
    // 11) Atribua o ENDEREÇO da variável declarada em (1) à variável declarada em (2)
    ponteiro = &variavel_a;
    
    // 12) Imprima o CONTEÚDO da variável declarada em (2)
    cout<<ponteiro<<endl;
    
    // 13) Imprima o CONTEÚDO da varíavel que é apontada por (2)
    cout << *ponteiro<<endl;
    
    // 14) Imprima o resultado da comparação do ENDEREÇO de (1) e do CONTEÚDO de (2)
    cout << (&variavel_a == ponteiro)  << endl;
    
    // 15) Coloque o VALOR '5' na varíavel que é apontada pela variável de (2)
    *ponteiro = 5;
    
    // 16) Imprima o CONTEÚDO da variável declarada em (1)
    cout<< variavel_a<<endl;
    
    // 17) Atribua o CONTEÚDO da variável de (3) à variável de (2)
    *ponteiro = vetor[0];
    
    // 18) Imprima o CONTEÚDO da variável declarada em (2) 
    cout<<ponteiro<<endl;

    // 19) Imprima o CONTEÚDO da variável que é apontada pela variável de (2)
    cout<<*ponteiro<<endl;

    // 20) Atribua o ENDEREÇO da primeira posição de (3) à variável de (2)
    ponteiro = &vetor[0];
    
    // 21) Imprima o CONTEÚDO da variável declarada em (2) 
    cout<<ponteiro<<endl;
    
    // 22) Imprima o CONTEÚDO da variável que é apontada pela variável de (2) 
    cout<<*ponteiro<<endl;
    
    // 23) Imprima os elementos de (3) utilizando a notação [] (e.g. v[i])
    for(int i= 0; i <= 9;i++){
        cout<<vetor[i];
        if(i!=9){
            cout<<" ";
        }        
    }
    cout << endl;

    // 24) Imprima os elementos de (3) utilizando a notação ponteiro/deslocamento (e.g. *(v + i))
    for(int i : vetor){
        cout<< i;
        if(i != vetor.back()){
            cout << " ";
        }
    }
    cout<< endl;
    return 0;
}