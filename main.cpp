#include <iostream>

using namespace std;

class TV
{
public:
    friend class Tele;
    TV():mode(0) {}
private:
    int mode;
};

class Tele
{
public:
    void GetMode(); //在Tele内就像是在TV内一样，可以对人以TV类型的数据访问其private属性的函数与变量。

};

void Tele::GetMode()
{
    TV t;
    t.mode = 5;
    cout << t.mode << endl;
}

int main()
{
    Tele t1;
    t1.GetMode();

    return 0;
}
