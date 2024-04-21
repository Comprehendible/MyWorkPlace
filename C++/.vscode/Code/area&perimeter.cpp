#include<iostream>
#include<string>

using namespace std;

namespace Geometry{
	const float PI = 3.14;
	
	class Circle {
		public:
			Circle(float r = 0);
			float GetArea();
			float GetPerimeter();
			void OutputArea();
			void OutputPerimeter();	
			
		private:
			float radius;
	};
	class Rectangle{
		public:
			Rectangle(float l = 0,float w = 0);
			float GetArea();
			float GetPerimeter();
			void OutputArea();
			void OutputPerimeter(); 
		private:
			float length,width;
	};
	
	Circle::Circle(float r){
		radius = r;
	}
	float Circle::GetArea(){
		return (PI * radius *radius);
	}
	float Circle::GetPerimeter(){
		return (2 *PI * radius);
	}
	void Circle::OutputArea(){
		cout<<"Circle area = "<<GetArea()<<endl;
	}
	void Circle::OutputPerimeter(){
		cout << "Circle perimeter = " <<GetPerimeter()<<endl;
	}
	
	Rectangle::Rectangle(float l, float w){
		length= l;
		width = w;
	}
	float Rectangle::GetArea(){
			return (width * length);
	}
	float Rectangle::GetPerimeter(){
		return (2 *(width + length));
	}
	void Rectangle::OutputArea(){
		cout<<"Rectangle area = "<<GetArea()<<endl;
	}
	void Rectangle::OutputPerimeter(){
		cout << "Rectangle perimeter = " <<GetPerimeter()<<endl;
	}
}

int main(){
	using namespace Geometry;
	float length,width,radius;
	cin >> radius;
	cin >> length >> width;
	
	Circle circle(radius);
	Rectangle rectangle(length,width);
	
	circle.OutputArea();
	circle.OutputPerimeter();
	rectangle.OutputArea();
	rectangle.OutputPerimeter();
	
	string result;
	bool circleLarger = circle.GetArea() > rectangle.GetArea();
	bool rectangleLarger = rectangle.GetArea() > circle.GetArea();
	
	if (circleLarger){
		result = "Circle has a larger area than Rectangle.";
	} else if (rectangleLarger){
		result = "Rectangle has a larger area than Circle.";
	} else {
		result = "Circle and Rectangle have the same area.";
	}
	
	cout << result<<endl;
	
	return 0;
}
