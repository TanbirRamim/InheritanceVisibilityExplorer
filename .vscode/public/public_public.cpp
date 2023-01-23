#include <iostream>
using namespace std;

class Robot
{
public:
    void move()
    {
        cout << "Robot moving" << endl;
    }
};

class HumanoidRobot : public Robot
{
public:
    void walk()
    {
        cout << "Humanoid robot walking" << endl;
    }
};

int main()
{
    HumanoidRobot robot;
    robot.move();
    robot.walk();
    return 0;
}
