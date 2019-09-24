#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

int main(){
    char a[101];
    char b[101];
    cin >> a;
    cin >> b;
    
    int lena = strlen(a);
    int lenb = strlen(b);
    int limite = 0;
    if(lena > lenb){
        limite = lenb;
    } else if(lena < lenb){
        limite = lena;
    }else limite = lena;
    
    int resultado = 0;
    int i;
    for(i = 0; i < limite; i++){
    
        resultado = abs(a[i] - b[i]);
        
        if(resultado == 0 or resultado == 32) continue;
        else break;
    }
    
    if(a[i]>=97 and a[i]<=122) a[i] -= 32;
    if(b[i]>=97 and b[i]<=122) b[i] -= 32;
    
    if(a[i]<b[i]) cout<<"-1";
    else if (a[i]>b[i]) cout<<"1";
    else cout<<"0";
       
    return 0;
}
