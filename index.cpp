// Triangle Aerea 
#include <iostream> 
using namespace std;



double triangle_area(double a,double b)
{
    int c;
    c = (a * b) * (float).5; 
    return c;
}


 int main(){

double height, base,  area;


cout  << "Enter the dimensions of the base for this triangle: " << endl;
cin >> base; 


cout << "Enter the height of the triangle: " << endl; 
cin >> height;


area = triangle_area(height, base);

cout <<"The area for this triangle is: " << area << endl; 

    return 0;
 }
 