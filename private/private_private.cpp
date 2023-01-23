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

class HumanoidRobot : private Robot
{
public:
    void performWalk()
    {
        walk();
    }

private:
    void walk()
    {
        performMove();
        cout << "Humanoid robot walking" << endl;
    }
};

int main()
{
    HumanoidRobot robot;
    robot.performWalk();
    return 0;
}
