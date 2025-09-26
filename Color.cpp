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
        cout << setw(W15) 
    }
};
