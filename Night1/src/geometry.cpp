#include <iostream>
#include <string>
#include "../include/geometry.h";
using namespace std;



geometry::geometry(){}

  void geometry::AreaOfRect(){
cout <<"CALCULATING THE AREA OF A RECTANGLE";
     cout <<"Enter the length of the rectangle"<<endl;
     cin >> length;
     cout <<"Enter the breadth of the rectangle"<<endl;
     cin >> breadth;
     area = (breadth * length)* 2;
    cout << "The area of the rectangle is :" << area;

      }
    void geometry::PerimeterOfRect(){
    cout <<"CALCULATING THE PERIMETER OF A RECTANGLE"<<endl;
     cout <<"Enter the value for length the rectangle"<<endl;
     cin >> length;
     cout <<"Enter the breadth of the rectangle"<<endl;
     cin >> breadth;
     area = (breadth * length)* 2;
    cout << "The area of the rectangle is :" << area;

      }


    void geometry::AreaOfCylinder(){
     cout <<"CALCULATING THE AREA OF A CYLINDER"<<endl;
cout <<"Enter value for the height"<<endl;
cin >> height;
cout <<"Enter value for the radius"<<endl;
cin >> radius;
area = (2*pi*(radius*radius))+ height*(2*pi*(radius*radius));
cout << "The area of cylinder of height "<<height<<"cm, and "<<radius <<"cm, "<< "is "<<area<<"cm";
     }

 void geometry::VolumeOfCylinder(){
     cout <<"CALCULATING THE VOLUME OF A CYLINDER"<<endl;
cout <<"Enter value for the height"<<endl;
cin >> height;
cout <<"Enter value for the radius"<<endl;
cin >> radius;
volume = (pi*(radius*radius))*height;
cout << "The volume of cylinder of height "<<height<<"cm, and radius "<<radius <<"cm, "<< "is "<<volume<<"cm";
 }

      void  geometry::VolumeOfCuboid(){
cout <<"CALCULATING THE VOLUME OF A CUBOID"<<endl;
cout <<"Enter value for the height"<<endl;
cin >> height;
cout <<"Enter value for the length"<<endl;
cin >> length;
cout <<"Enter value for the breadth"<<endl;
cin >> breadth;
volume = length*breadth*height;
cout << "The volume of cuboid of height "<<height<<"cm, and radius "<<radius <<"cm, "<< "is "<<volume<<"cm";
    };
    void   geometry::SurfaceAreaOfCuboid(){
cout <<"CALCULATING THE SURFACE AREA OF A CUBOID"<<endl;
cout <<"Enter value for the height"<<endl;
cin >> height;
cout <<"Enter value for the length"<<endl;
cin >> length;
cout <<"Enter value for the breadth"<<endl;
cin >> breadth;
surfaceArea = 2*(length*breadth+length*height+breadth*height);
cout << "The surface area of cuboid of height "<<height<<"cm,and breadth "<<breadth <<"cm,and length "<<length<< "is "<<surfaceArea<<"cm";

}








