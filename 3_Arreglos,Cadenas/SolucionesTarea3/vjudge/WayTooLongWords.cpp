#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int n; cin >> n;
    char palabra[102];
    int i, len;
    for(i=0; i<n; i++){
        cin>>palabra;
        
        len = strlen(palabra);
        
        if(len >= 10){
            cout<<palabra[0]<<len-2<<palabra[len-1]<<"\n";   
        }else {
            cout<<palabra<<endl;
        }
    }  
    
    
    
    return 0;
}
