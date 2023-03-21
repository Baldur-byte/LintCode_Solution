#include <iostream>
#include <deque>

using namespace std;

class MovingAverage
{
public:
    /*
    * @param size: An integer
    */
    MovingAverage(int size)
    {
        this->size = size;
        curSize = 0;
        total = 0;
        list = deque<int>();
    }

    /*
    * @param val: An integer
    * @return:
    */
    double next(int val)
    {
        // write your code here
        if (curSize >= size)
        {
            total -= list.at(0);
            list.pop_front();
        }
        else
        {
            curSize++;
        }
        total += val;
        list.push_back(val);
        return (double)total / curSize;
    }
private:
    int size;
    int curSize;
    int total;
    deque<int> list;
};
