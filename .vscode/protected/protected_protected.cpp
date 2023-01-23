#include <iostream>
using namespace std;

class Robot
{
protected:
    void move()
    {
        cout << "Robot moving" << endl;
    }
};

class HumanoidRobot : protected Robot
{
protected:
    void walk()
    {
        move();
        cout << "Humanoid robot walking" << endl;
    }

public:
    void performWalk()
    {
        walk();
    }
};

;

int main()
{
    HumanoidRobot robot;
    robot.performWalk();
    return 0;
}
