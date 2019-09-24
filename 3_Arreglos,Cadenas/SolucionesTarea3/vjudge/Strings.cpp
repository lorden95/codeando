#include <iostream>

using namespace std;

int main(){
    string a, b; cin>>a>>b;
    string c = a + b;
    char x = a[0];
    a[0] = b[0];
    b[0] = x;
    
    int lena = a.size();
    int lenb = b.size();  
    
    cout<<lena<<" "<<lenb<<endl;
    cout<<c<<endl;
    cout<<a<<" "<<b;
    
    
    return 0;
}
