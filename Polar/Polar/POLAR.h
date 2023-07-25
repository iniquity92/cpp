#include<iostream>
#include<cmath>

class polar {

private:
	const float PI = 3.141592653897932;
	float x_cor = 0.0;
	float y_cor = 0.0;

	float r;
	float theta;

public:
	polar() : r(0.0),theta(0.0) {};

	polar(float r, float theta) : r(r), theta(theta*(PI/180)) {};

	float getXcomponent(){

		// theta should be in radians. To convert an angle to radians multiply with PI/180
		return r * cos(theta);
	}

	float getYcomponent() {

		// theta should be in radians. To convert an angle to radians multiply with PI/180
		return r * sin(theta);
	}

	void setFromPolarObject(polar ob) {

		r = ob.r;
		theta = ob.theta;
	}

	polar operator + (polar vec) {
		polar temp(0.0,0.0);

		temp.x_cor = this->getXcomponent() + vec.getXcomponent();

		temp.y_cor = this->getYcomponent() + vec.getYcomponent();
		
		temp.r = sqrt( ( pow(temp.x_cor, 2) + pow(temp.y_cor, 2) ) );

		temp.theta = atan2(temp.y_cor, temp.x_cor) * 180 / PI;

		return (temp);

	}

	friend std::ostream& operator << (std::ostream& out,polar& vec);
};

std::ostream& operator << (std::ostream& out, polar& vec) {
	out << "(" << vec.r << "," << vec.theta << ") \n";
	return out;
}

