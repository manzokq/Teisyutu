#include "stdio.h"

class Object
{

public:
	virtual void Update()
	{

	}

private:
	
	float x = 0;
	float y = 0;
	float z = 0;
	
};

class Vehicle : public Object
{
public:

	virtual void setSpeed(float s)
	{
		speed = s;
	};

	virtual void setAccel(float a)
	{
		accel = a;
	};
	
	virtual float getSpeed()
	{
		float r = speed;
		printf("‘¬“x");
		printf("%f\n", r);
		return r;
	}

	virtual float getAccel()
	{
		float r = accel;
		printf("‰Á‘¬“x");
		printf("%f\n",r);
		return r;
	}

private:

	float speed = 0;
	float accel = 0;
};


class Car : public Vehicle
{
public:
	
	virtual void SpeedUp()
	{
		float speed = getSpeed();
		float accel = getAccel();
		speed += accel;
		setSpeed(speed);
	};

	virtual void SpeedDown()
	{
		float speed = getSpeed();
		float accel = getAccel();
		speed -= accel;
		setSpeed(speed);
	};
	
private:

	
};



int main()
{
	
	Car car;

	car.setSpeed(50);

	car.setAccel(10);

	car.SpeedUp();

	car.getSpeed();

}
