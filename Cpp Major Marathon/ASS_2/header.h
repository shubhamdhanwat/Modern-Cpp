#ifndef HEADER_H
#define HEADER_H

class Conversion
{
private:
    float xdistance;
    float ydistance;
    int arr[5];
public:
    Conversion();
    Conversion(float ,float , int *);
    ~Conversion();
    Conversion(const Conversion &);
    Conversion operator+(Conversion &);
    friend Conversion operator+(Conversion &,int);
    Conversion &operator++();
    Conversion operator++(int);
    float operator[](int index);
    int operator==(Conversion &);
    float operator()();
    void display()const;


    float getXdistance() const ;
    void setXdistance(float xdistance_) ;

    float getYdistance() const ;
    void setYdistance(float ydistance_) ;
    

};




#endif // HEADER_H

























