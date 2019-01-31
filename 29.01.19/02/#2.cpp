#include <iostream>
#include <utility>

using namespace std;

class Mas_Cycle
{
public:
    pair <int,int>* data;
    int size_;

    Mas_Cycle()
    {
        size_ = 1;
        data = new pair <int, int> [size_];
        data.first = 0;
        data.second = 0;
    };
    Mas_Cycle (int N)
    {
        size_ = N;
        data = new pair <int, int> [N]
    };
    Mas_Cycle(Mas_Cycle& A)
    {
        size_ = A.size_;
        data = A.data;
    };
    ~Mas_Cycle()
    {
        delete[] data;
    };

    pair <int, int> &operator[] (int i)
    {
        while (i >= size_) {i -= size_;};
        return data[i];
    }

};

int main()
{

}
