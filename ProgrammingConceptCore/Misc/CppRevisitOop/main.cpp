#include<iostream>

class Point2D {

	public: 
	Point2D();
	Point2D(int x = 0, int y= 0);
	Point2D& RefOurselves();
	Point2D* PointerOurselves();
	void SetX(int x);
	void SetY(int y);
	int GetX();
	int GetY();
	void Display();
	private:
	int mX;
	int mY;

};


Point2D::Point2D() :Point2D(0,0){}

Point2D::Point2D(int x, int y ): mX(x), mY(y)
{

	this->mX = x;
	this->mY = y;

}
Point2D& Point2D::RefOurselves() 
{
	return *this;
}
Point2D* Point2D::PointerOurselves () 
{
	return this;
}
int Point2D::GetX() 
{

	return mX;
}

int Point2D::GetY() 
{

	return mY;
}

void Point2D::SetX(int x) 
{
	this->mX = x;
}


void Point2D::SetY(int y) 
{
	this->mY = y;

}

void Point2D::Display() 
{
	std::cout<<this->mX<< " " << this->mY;
}


int main() 
{

}
