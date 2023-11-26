#include"MyRec.h"
#include<TH1D.h>


ClassImp(MyRec)

MyRec::MyRec(): TRandom3(),
    fZ(0),
    fPhi(0){
        //DEFAULT COSNTRUCTOR
    }

double MyRec::GenZr(){
    double u=Gaus(0,0.012);
    return u;
}

double MyRec::GenPhir(double R){
    double u=Gaus(0,0.003);
    return u/R;
}

double MyRec::TrackZ(double z1, double R1, double z2, double R2){
    return z1-R1*(z2-z1)/(R2-R1); 
    //calcola l'eq della retta per due punti e la inverte per trovare z vertice
}

