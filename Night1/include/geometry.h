#include <iostream>
#include <string>

using namespace std;

class geometry{
    private:
    int  area = 0;
    int length;
     int breadth;
double height;
double sideAB;
double sideDC;
int volume =0;
 const double pi= 3.14;
 double surfaceArea=0;
 double radius;

     public:
 geometry();

   void  AreaOfRect();
    void PerimeterOfRect();


    void AreaOfCylinder();

 void VolumeOfCylinder();

        void VolumeOfCuboid();
void SurfaceAreaOfCuboid();

};





