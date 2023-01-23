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

class HumanoidRobot : protected Robot
{
public:
    void walk()
    {
        move();
        cout << "Humanoid robot walking" << endl;
    }
};

int main()
{
    HumanoidRobot robot;
    robot.walk();
    return 0;
}
