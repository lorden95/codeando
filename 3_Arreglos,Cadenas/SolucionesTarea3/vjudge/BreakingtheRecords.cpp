#include <iostream>
using namespace std;

int main(){
    int n; cin>>n; //number of games
    int score[n];
    int maximo, minimo;
    int cmax = 0;
    int cmin = 0;
    
    for(int i=0; i<n; i++){
        cin>>score[i];
    }

    maximo =    score[0]; 
    minimo =    score[0];
    
    for(int i=1; i<n; i++){
        if (score[i]>maximo)
        {
            maximo = score[i];
            cmax++;
        }
        if (score[i]<minimo)
        {
            minimo = score[i];
            cmin++;
        }   
    }
    
    cout<<cmax<<" "<<cmin;
    
    return 0;
}
