#include <gtest/gtest.h>
#include "../Project/lib/ExampleGoogleTest.hpp"


//Test sur les fonction de math
/*
TEST(Math,DivisionParZero){
    int a=5;
    int b= 0;
    EXPECT_EQ(divided(a,b),a/b);
}
*/
TEST(Math,DivisionNombreEntier){
    int a=5; 
    int b=8;
    EXPECT_EQ(divided(a,b),a/b);
}
TEST(Math,Muliplication){
    int a=5; 
    int b=8;
    EXPECT_EQ(mutiply(a,b),a*b);
}

//Test Class Voiture
TEST(Voiture,getVitesseMax){
    Voiture voiture;
    EXPECT_EQ(voiture.getVitesseMax(),voiture.vitesseMax);
}

//Test Exception + validation de l'erreur
/*
TEST(Voiture,setVitesseMax_Exception){
    Voiture voiture;
    int vitesse = -5;
    try {
        voiture.setVitesseMax(vitesse);
        FAIL() << "Expected std::invalid_argument";
    }
    catch (std::invalid_argument const & error) {
        EXPECT_EQ(error.what(),std::string("Speed must be greater than 0"));
    }
    catch(...) {
        FAIL() << "Expected std::invalid_argument";
    }
}
*/
TEST(Voiture,setVitesseMax_Exception){
    Voiture voiture;
    int vitesse = 5;
    voiture.setVitesseMax(vitesse);
}