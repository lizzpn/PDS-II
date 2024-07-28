#include <string>
#include <list>
#include <iostream>

using namespace std;

int main(){
    list<string> Comprinhas_Liz;
    Comprinhas_Liz.push_back("Pizza");
    Comprinhas_Liz.push_back("Hamburguer");
    Comprinhas_Liz.push_back("Pudim");
    Comprinhas_Liz.push_back("Coxinha");
    Comprinhas_Liz.push_back("Bolo");

    auto it = Comprinhas_Liz.begin();

    while(it != Comprinhas_Liz.end()){
        cout << *it << endl;
        it++;
    }
}