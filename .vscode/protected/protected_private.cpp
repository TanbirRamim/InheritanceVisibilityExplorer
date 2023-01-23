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

class HumanoidRobot : private Robot
{
private:
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

int main()
{
    HumanoidRobot robot;
    robot.performWalk();
    return 0;
}
