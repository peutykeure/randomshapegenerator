#ifndef COLOR_H
#define COLOR_H

class Color {
private :
  int red, green, blue;

public :
	Color(int r=0, int g=0, int b=0) : red(r), green(g), blue(b) {}

	void setRGB(int r, int g, int b) {
		red=r; green=g; blue=b;
	}    
	void getRGB(int& r, int& g, int& b) const {
    	r=red; g=green; b=blue;
	}
};

#endif
