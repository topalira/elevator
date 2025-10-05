#include <iostream>
using namespace std;

class Elevator
{
	int topFloor;
	int groundFloor;
	bool OnOff;
	bool works;
	int position;
public:
	Elevator(int ground, int top);
	void onOff();
	void setPosition(int pos);
	int GetPosition()const;
	void Call();
	void Print()const;
};
Elevator::Elevator(int ground, int top)
{
	topFloor = top;
	groundFloor = ground;
	OnOff = false;
	works = false;
	position = 0;
}

void Elevator::onOff()
{
	OnOff = !OnOff;
}
void Elevator::setPosition(int position)
{
	this->position = position;
}
int Elevator::GetPosition()const
{
	/*this->position = 1000;*///error
	return position;
}
void Elevator::Call()
{
	cout << "enter floor from " << groundFloor << " to " << topFloor << endl;
	cin >> position;
	cout << "current position = " << position << endl;
	if (groundFloor <= position && topFloor >= position)
	{
		cout << "good " << position << endl;
	}
	else
	{
		cout << "eror " << endl;
	}
}

void Elevator::Print()const
{
	cout << "topFloor: " << topFloor << "\tgroundFloor: " << groundFloor << "\tOnOff: " << OnOff << "\tworks: " << works << "\tposition: " << position << endl;
}

int main()
{
	Elevator el(1, 10);
	el.onOff();
	el.Call();
	el.Print();
}