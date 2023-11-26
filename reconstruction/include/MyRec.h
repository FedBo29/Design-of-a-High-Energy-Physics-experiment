#ifndef MYREC_H
#define MYREC_H

#include<TH1D.h>
#include<TRandom3.h>

class MyRec : public TRandom3{

    public:
        MyRec();
        double GetZ(){return fZ;}
        double GetPhi(){return fPhi;}
        double GenZr();
        double GenPhir(double R);
        double TrackZ(double z1, double R1, double z2, double R2 );
        

    private:
        double fZ;
        double fPhi;
        double fZRec;
        double fPhiRec;
        


    ClassDef(MyRec,1)
};

#endif