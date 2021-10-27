#include "stdio.h"

class Object
{

public:
	virtual void Update()
	{

	}

private:
	
	float x, y, z;
	
};

class Vehicle : public Object
{
public:

	virtual void SpeedUp()
	{

	};

	float speed, accel;

private:

};


class Car : public Vehicle
{
public:
	
	virtual void SpeedUp()
	{

	};

	virtual void SpeedDown()
	{

	};
	
private:

};



int main()
{
	

}
