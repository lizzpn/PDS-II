#include <iostream>

using namespace std;

int main() {
    string teste;
    cin>>teste;
    int a=0, e=0, i=0, o=0, u=0;
    for(char c: teste){
        switch(c){
            case 'a':
            a++;
            break;
            case 'e':
            e++;
            break;
            case 'i':
            i++;
            break;
            case 'o':
            o++;
            break;
            case 'u':
            u++;
            break;
        }
    }
    if ( a > 0 ){
        cout<< "a "<<a << endl; 
    }
    if ( e > 0 ){
        cout<< "e "<<e << endl; 
    }
    if ( i > 0 ){
        cout<< "i "<<i << endl; 
    }if ( o > 0 ){
        cout<< "o "<<o << endl; 
    }if ( u > 0 ){
        cout<< "u "<<u << endl; 
    }
    return 0;
}