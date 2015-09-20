 #include <iostream>
using namespace std;
  int main()
    {

        float R = 3,D = 6;// This is the Radius and the Diameter
        float C ;// This is the Circumference
        float pi = 3.14159; // This is the Pi constant
        C = pi * D;

        for (R = 3; R<=180;R+= 3)
        {   D=2*R; // This is Diameter equals 2 times Radius
            C=D*pi; //This is circumference equals Diameter times Pi

    cout << "Radius = " << R << "      Diameter = "<< D << "      Circumference = "<<  C  <<endl;
   }
}
