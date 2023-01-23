#include <iostream>
using namespace std;

class Robot
{
private:
    void move()
    {
        cout << "Robot moving" << endl;
    }

public:
    void performMove()
    {
        move();
    }
};

class HumanoidRobot : public Robot
{
public:
    void walk()
    {
        performMove();
        cout << "Humanoid robot walking" << endl;
    }
};

int main()
{
    HumanoidRobot robot;
    robot.walk();
    return 0;
}
