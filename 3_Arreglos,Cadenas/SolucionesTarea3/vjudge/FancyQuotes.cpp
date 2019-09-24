#include <iostream>
#include <cstring>
using namespace std;

int main(){
    int T; cin >> T;
    
    string S;
    
    int i,j,len;
    
    getline(cin,S);
    
    for(j=0; j<T; j++){
        getline(cin,S);
        len = S.size();
        
        if (len <= 2) {
          cout << "regularly fancy\n";
          continue;
        }
        
        if (len == 3) {
          if (S[0] == 'n' and S[1] == 'o' and S[2] == 't') {
            cout << "Real Fancy\n";
            continue;
          } else {
            cout << "regularly fancy\n";
            continue;
          }
        }
        
        for(i=0; i < len; i++){
            if(len >= 4 and i == 0){
               if((S[i]=='n') and (S[i+1]=='o') and (S[i+2]=='t')){
                    if(S[i+3]>=97 and S[i+3]<=122){
                    continue;
                        
                    }else {
                      cout<<"Real Fancy\n"; 
                      break;
                    }
                }
            }
            
            if(len >= 5 and i>=1 and i<=len-4){
               if((S[i]=='n') and (S[i+1]=='o') and (S[i+2]=='t')){
                    if(S[i+3]>=97 and S[i+3]<=122){
                    continue;
                        
                    }else if(S[i-1]>=97 and S[i-1]<=122){
                      continue;

                    }else {
                      cout<<"Real Fancy\n"; 
                      break;
                    }
               }
            }
            
            if(len >= 4 and i == len-3){
               if((S[i]=='n') and (S[i+1]=='o') and (S[i+2]=='t')){
                    if(S[i-1]>=97 and S[i-1]<=122){
                       cout<<"regularly fancy\n";
                    }else {
                      cout<<"Real Fancy\n"; 
                    }
                }else {
                    cout<<"regularly fancy\n";
                }
            }
        }
    }
    
    return 0;
}
