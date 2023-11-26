#ifndef MYINDEX_H
#define MYINDEX_H

class MyIndex: public TObject{
    public:
    MyIndex(); //debug
    MyIndex(double z, double phi, int index);

    void SetData(double z, double phi, int index);
    void SetData(double z, double phi);
    
    double GetZ(){return fz;}
    double GetPhi(){return fphi;}
    int GetIndex(){return findex;}

    private:
    double fz;
    double fphi;
    int findex;


    ClassDef(MyIndex,1)
};

#endif