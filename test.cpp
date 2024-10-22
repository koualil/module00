
#include <iostream>

class Myclass
{
    private:
    int n;
    int m;

    public:
    Myclass()
    {
        n = 10;
        m = 10;
    }

    int get_n()
    {
        return n;
    }
    int get_m()
    {
        return m;
    }
    void set_n(int number)
    {
        n = number;
    }
    ~Myclass()
    {
        n = 0;
        m = 0;
        std::cout << n << std::endl;
        std::cout << m << std::endl;
    }

};

int main(int argc, char const *argv[])
{
    Myclass c;

    std::cout << c.get_n() << std::endl;
    std::cout << c.get_m() << std::endl;
    return 0;
}
