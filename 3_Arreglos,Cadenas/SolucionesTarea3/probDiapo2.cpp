#include <iostream>
using namespace std;
// prob : almacenar las 51 primeras filas del triangulo de Pascal en una matriz de enteros de 64 bits.
int main(){
    
    long long pascal[51][51];
    pascal[0][0]=1;
    cout<<pascal[0][0]<<endl;
    
    for(int i=1; i<51; i++){
        pascal[i][0] = 1;
        cout<<pascal[i][0]<<" ";
        if(i>=2){
            for(int j=1; j<i; j++){
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
            cout<<pascal[i][j]<<" ";
            }
        }    
        pascal[i][i] = 1;
        cout<<pascal[i][i]<<'\n';
    }
    return 0;
}
