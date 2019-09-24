#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[n][n];
    int i,j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int diagonal_1 = 0;
    i= 0;
    j= 0;
    while (i<n)
    {
        diagonal_1 += arr[i][j];
        i++;
        j++; 
    }
    int diagonal_2 = 0;
    i= 0;
    j= n-1;
    while (i<n)
    {
        diagonal_2 += arr[i][j];
        i++;
        j--;
    }
    
    cout<<abs(diagonal_1 - diagonal_2);
    
    return 0;
}
