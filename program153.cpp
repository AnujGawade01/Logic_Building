#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;
};

int main()
{
    ArrayX aobj;

    cout<<sizeof(aobj)<<endl; // 16 (8 if pointer gets 4 byte memory)
    return 0;
}

