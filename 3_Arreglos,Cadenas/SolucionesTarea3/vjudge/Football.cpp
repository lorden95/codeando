#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char jugada[100];

    cin>> jugada;

    int len = strlen(jugada);
    int contador = 1;
    
    for(int i=0; i<len-1; i++){
        if(jugada[i] == jugada[i+1]){
               contador++;
       }else contador = 1;
       
       if(contador >= 7){
        cout<<"YES";
        break;
       }
       
       if(i == len-2){
        cout<<"NO";
       } 
    
    }
    
    
    
        
            
    return 0;
}
