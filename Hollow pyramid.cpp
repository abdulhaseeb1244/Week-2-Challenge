#include <iostream>
using namespace std;
int main(){
    int rows = 5;
    for(int i=0; i<rows; i++){
        
        for(int j=0; j<rows-i; j++){
            cout << " ";
        }
        
        for(int k=0; k<=i; k++){
            if(k==0 || k==i || i==rows-1)
                cout << "* ";
            else
                cout << "  ";
        }
        
        cout << endl;
    }
}




