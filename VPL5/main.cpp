#include <iostream>
#include <vector>
using namespace std;


vector<vector<int>> FAZER_MATRIZ( int x, int y){


    vector<vector<int>> matriz(x, vector<int>(y));

    for(int i = 0; i < x; i++){
        for(int j = 0; j < y; j++){
            cin >> matriz[i][j];
        }
    }

    
    return matriz;
}
vector<vector<int>> MULTIPLICAR_MATRIZ(vector<vector<int>>A, vector<vector<int>>B){

    l1 = A.size();
    l2 = A[0].size();
    c2 = B[0].size();

    vector<vector<int>> matriz_c(l1, vector<int>(c2));
    for(int i = 0; i < l1; i++){
        for(int j = 0; j < c2; j++){
                for(int k = 0; k <l2; k++){
                
                
    }
        }
            }
    return matriz_c;
}
int main(){

 cin>>x,y,z;


    return 0;
}