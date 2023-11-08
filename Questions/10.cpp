// Write a C++ program to implement a class called Shape with virtual member functions for calculating area and perimeter. Derive classes such as Circle, Rectangle, and Triangle from the Shape class and override virtual functions accordingly.

#include<bits/stdc++.h>
using namespace std;
const float pi = 3.14;

class Shape{
    virtual float calculateArea() = 0;
    virtual float calculatePerimeter() = 0;
};

class Circle : public Shape{
    private:
    float radius;

    public:
    Circle(float rad){
        radius = rad;
    }
    float calculateArea(){
        return pi*pow(radius, 2);
    }

    float calculatePerimeter(){
        return 2*pi*radius;
    }



};
class Rectange : public Shape{
    private:
    float length;
    float width;

    public:

    Rectange(float len, float wid){
        length = len;
        width = wid;
    }
    float calculateArea(){
        return length*width;
    }

    float calculatePerimeter(){
        return 2*(length+width);
    }
};
class Triangle : public Shape{
    private:
    float side1;
    float side2;
    float side3;

    public:
    Triangle(float s1, float s2, float s3){
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

    float calculateArea(){
        float s = (side1+side2+side3)/2;
        return sqrt(s*(s-side1)*(s-side2)*(s-side3));
    }

    float calculatePerimeter(){
        return side1+side2+side3;
    }

};



int main(){
    Circle c(7.0);
    Rectange r(4,2);
    Triangle t(1,2,3);

    cout<<"Circle "<<endl;
    cout<<"Area : "<<c.calculateArea()<<endl;
    cout<<"Perimeter : "<<c.calculatePerimeter()<<endl;

    cout<<"Rectangle "<<endl;
    cout<<"Area : "<<r.calculateArea()<<endl;
    cout<<"Perimeter : "<<r.calculatePerimeter()<<endl;

    cout<<"Triangel "<<endl;
    cout<<"Area : "<<t.calculateArea()<<endl;
    cout<<"Perimeter : "<<t.calculatePerimeter()<<endl;

    return 0;
}

/*#include<bits/stdc++.h>
using namespace std;
const float PI = 3.14159;
class Shape {
  public:
    // Virtual member function to calculate the area
    virtual float calculateArea() = 0;

  // Virtual member function to calculate the perimeter
  virtual float calculatePerimeter() = 0;
};

class Circle: public Shape {
  private: float radius;

  public:
    // Constructor
    Circle(float rad){
        radius = rad;
    }

  // Override the virtual member function to calculate the area
  float calculateArea()  {
    return PI * pow(radius, 2);
  }

  // Override the virtual member function to calculate the perimeter
  float calculatePerimeter()  {
    return 2 * PI * radius;
  }
};

class Rectangle: public Shape {
  private: float length;
  float width;

  public:
    // Constructor
    Rectangle(float len, float wid) 
    {
        length = len;
        width = wid;
    }

  // Override the virtual member function to calculate the area
  float calculateArea()  {
    return length * width;
  }

  // Override the virtual member function to calculate the perimeter
  float calculatePerimeter()  {
    return 2 * (length + width);
  }
};

class Triangle: public Shape {
  private: float side1;
  float side2;
  float side3;

  public:
    // Constructor
    Triangle(float s1, float s2, float s3) {
        side1 = s1;
        side2 = s2;
        side3 = s3;
    }

  // Override the virtual member function to calculate the area
  float calculateArea()  {
    // Using Heron's formula to calculate the area of a triangle
    double s = (side1 + side2 + side3) / 2;
    return sqrt(s * (s - side1) * (s - side2) * (s - side3));
  }

  // Override the virtual member function to calculate the perimeter
  float calculatePerimeter()  {
    return side1 + side2 + side3;
  }
};

int main() {
  // Create instances of different shapes
  // Can accept user inputs.
  Circle c(7.0);
  Rectangle r(4.2, 8.0);
  Triangle t(4.0, 4.0, 3.2);

  // Calculate and display the area and perimeter of each shape
  cout << "Circle: " <<endl;
  cout << "Area: " << c.calculateArea() <<endl;
  cout << "Perimeter: " << c.calculatePerimeter()<<endl;
  cout << "\nRectangle: " <<endl;
  cout << "Area: " << r.calculateArea() <<endl;
  cout << "Perimeter: " << r.calculatePerimeter()<<endl;
  cout << "\nTriangle: " <<endl;
  cout << "Area: " << t.calculateArea() <<endl;
  cout << "Perimeter: " << t.calculatePerimeter() <<endl;

  return 0;
}*/




