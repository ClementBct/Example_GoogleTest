#include "../lib/ExampleGoogleTest.hpp"
#include <iostream>
#include <stdexcept>
using namespace std;

int mutiply(int a, int b){
    return a*b;
}
double divided(int a, int b){
    return a/b;
}

int Voiture::getVitesseMax(void){
    return Voiture::vitesseMax;
}

void Voiture::setVitesseMax(int vitesseMax){
    if(vitesseMax <0){
        throw invalid_argument("Speed must be greater than 0");
    }else{
    Voiture::vitesseMax = vitesseMax;
    }
}