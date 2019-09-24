#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n; cin >> n;
    int cm[n];
    int min;
    for(int i=0; i<n; i++){
        cin >> cm[i];
    }
    
    int dif[n];
    dif[n-1] = abs(cm[n-1]-cm[0]);
    
    for(int i=0; i<n-1; i++){
        dif[i] = abs(cm[i] - cm[i+1]);
    }
    
    min = dif[0]
    for(int i=0; i<n; i++){
        if (min<dif[i])
        {
           min = dif[i];        
        }
    }
    do
    {
        
    } while ( );
    return 0;
}
