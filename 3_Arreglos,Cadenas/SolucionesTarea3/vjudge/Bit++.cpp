#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n; cin >> n;
    int x = 0;
    char instruccion[100];
    int i,j, len;
    for(i=0; i<n; i++){
        cin>>instruccion;
        len = strlen(instruccion);
        for(j=0; j<len; j++){
            if(instruccion[j] == '+'){
                x++;
                break;
            }else if(instruccion[j] == '-'){
                x--;
                break;   
            }
        }
        
    }
    
    cout<<x;
       
    return 0;
}
