#include <iostream>
using namespace std;

class Music
{

public:
    void play()
    {

        cout << "this can play music " << endl;
    }
};
class Camera
{

public:
    void toCapture()
    {

        cout << "this can capture pictures " << endl;
    }
};

class Phone : public Music, public Camera
{

public:
    void Features()
    {

        cout << " this has all the features " << endl;
    }
};
int main()
{

    Phone P;

    P.Features();

    P.play();

    P.toCapture();


    return 0;
}