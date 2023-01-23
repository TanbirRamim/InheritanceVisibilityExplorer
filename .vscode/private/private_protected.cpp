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

class HumanoidRobot : protected Robot
{
protected:
    void walk()
    {
        performMove();
        cout << "Humanoid robot walking" << endl;
    }

public:
    void performWalk()
    {
        walk();
    }
};

int main()
{
    HumanoidRobot robot;
    robot.performWalk();
    return 0;
}
