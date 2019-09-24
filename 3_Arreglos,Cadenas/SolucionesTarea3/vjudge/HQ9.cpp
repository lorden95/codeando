#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char n[100];
    gets(n);
    int len = strlen(n);
    bool teencontre = false;
    
    for(int i=0; i<len; i++){
    
        if(n[i]=='H' or n[i]=='Q' or n[i]=='9'){
           teencontre = true;
           break;
        }
    }   
    if(teencontre){
        cout<<"YES";
    }else cout<<"NO";
    
    return 0;
}
