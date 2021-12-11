#include <iostream>
#include "lib.h"
using namespace std;
/*float massimo(const float gino[],int d){
    gino[d];
    float grande=gino[0];
    for(int i=0; i<d;i++){
        if(grande<gino[i]){
            grande=gino[i];
        }
    }
    return grande;
}*/
int main() {
    int d=0;
    cin>>d;
    float gino[d];
    for(int i=0;i<d;i++){
        cin>>gino[i];

    }
    cout<< massimo(gino,d)<<endl;
    return 0;
}
