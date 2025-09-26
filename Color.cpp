// COMSC-210 | Lab 14 | Diksha Tara Natesan
// IDE used: Vim (Terminal)


#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Color{
private:
    int red;
    int green;
    int blue;
public:
    //getters
    int getRed()		{ return red; }
    int getGreen()		{ return green; }
    int getBlue()		{ return blue; }
    
    //setters
    void setRed(int r)		{ red = r; }
    void setGreen(int g)	{ green = g; }
    void setBlue(int b)		{ blue = b; }

    //other methods
    void print(){
        cout << '\n' << setw(17) << "Color Values" << endl;
        cout << setw(15) << "Red Value: " << red << endl;
        cout << setw(15) << "Green Value: " << green << endl;
        cout << setw(15) << "Blue Value: " << blue << '\n' << endl;
    }
};

int main(){
    //first test
    Color lavender;
    lavender.setRed(204);
    lavender.setGreen(204);
    lavender.setBlue(255);
    lavender.print();

    Color skyBlue;
    skyBlue.setRed(153);
    skyBlue.setGreen(204);
    skyBlue.setBlue(255);
    skyBlue.print();

    Color magenta;
    magenta.setRed(204);
    magenta.setGreen(0);
    magenta.setBlue(102);
    magenta.print();

    Color turquoise;
    turquoise.setRed(0);
    turquoise.setGreen(102);
    turquoise.setBlue(102);
    turquoise.print();
}
