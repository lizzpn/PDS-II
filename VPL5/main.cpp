#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> FAZER_MATRIZ(int x, int y) {
    vector<vector<int>> matriz(x, vector<int>(y));
    for(int i = 0; i < x; i++) {
        for(int j = 0; j < y; j++) {
            cin >> matriz[i][j];
        }
    }
    return matriz;
}

vector<vector<int>> MULTIPLICAR_MATRIZ(vector<vector<int>> matriz_a, vector<vector<int>> matriz_b) {
    int l1 = matriz_a.size();
    int l2 = matriz_a[0].size();
    int c2 = matriz_b[0].size();

    vector<vector<int>> matriz_c(l1, vector<int>(c2, 0));
    
    for(int i = 0; i < l1; i++) {
        for(int j = 0; j < c2; j++) {
            for(int k = 0; k < l2; k++) {
                matriz_c[i][j] += matriz_a[i][k] * matriz_b[k][j];
            }
        }
    }
    return matriz_c;
}

int main() {
    int x, y, z;
    cin >> x >> y >> z;

    vector<vector<int>> matriz_a = FAZER_MATRIZ(x, y);
    vector<vector<int>> matriz_b = FAZER_MATRIZ(y, z);
    vector<vector<int>> matriz_c = MULTIPLICAR_MATRIZ(matriz_a, matriz_b);

    for(int i = 0; i < matriz_c.size(); i++) {
        for(int j = 0; j < matriz_c[0].size(); j++) {
            cout << matriz_c[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
