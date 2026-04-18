// main function of the program 
#include <iostream>
#include "Box.cpp"
using namespace std;

int main(){
    Box Box1;       // declera Box1 of type Box
    Box Box2;       // declare Box2 of type Box
    Box Box3;       //declare Box3 of type Box
    double Volume = 0.0;     //store the volume of the box here

    // box 1 specification
    Box1.SetLength(6.0);
    Box1.SetBreadth(7.0);
    Box1.SetHeight(5.0);

    // box 2 specification
    Box2.SetLength(12.0);
    Box2.SetBreadth(13.0);
    Box2.SetHeight(10.0);

    // volume of box 1
    Volume = Box1.GetVolume();
    cout << "Volume of Box1: " << Volume << endl;

    // volume of box 2
    Volume = Box2.GetVolume();
    cout << "Volume of Box2: " << Volume << endl;

    // volume of box 3
    Volume = Box3.GetVolume();
    cout << "Volume of Box3: " << Volume << endl;

    return 0;
}