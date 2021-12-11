//
// Created on 11/12/2021.
//
#include "lib.h"
float massimo(const float gino[],int d){
    gino[d];
    float grande=gino[0];
    for(int i=0; i<d;i++){
        if(grande<gino[i]){
            grande=gino[i];
        }
    }
    return grande;
}
