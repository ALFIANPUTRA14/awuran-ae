#include <iostream>
using namespace std;


double circleArea(double r){
    return 3.14 * r * r;
}

double cylinderVolume(double r, double h){
    return circleArea(r) * h;
}

double coneVolume(double r , double h){
    return cylinderVolume(r,h) * (1.0/3.0);
}
int main(){
    double t = 10.0;
    double p = 30.0;
    cout << "Circle area = " << circleArea(p) << endl;
    cout << "Cylinder volume = " << cylinderVolume(t,p) << endl;
    cout << "Cone volume = " << coneVolume(t,p) << endl;
}