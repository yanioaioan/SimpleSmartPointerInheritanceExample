#include <iostream>
#include <memory>


struct Shape
{
	int a;
	Shape(){std::cout<<"Shape Ctor"<<'\n';}
	Shape(const int _a): a(_a)
	{std::cout<<"Shape User Defined Ctor"<<'\n';}
};

struct Circle : public Shape
{
	int a;
	Circle(): Shape(1)
	{std::cout<<"Circle Ctor"<<'\n';}
	
	Circle(const int _a): a(_a)
	{std::cout<<"Circle User Defined Ctor"<<'\n';}

};

int main() {
	// your code goes here
	
	std::unique_ptr<Shape> s = std::make_unique<Circle>(1);
	return 0;
}
