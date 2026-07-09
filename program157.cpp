#include<iostream>
using namespace std;

#pragma pack(1)              
class ArrayX
{
    public:
        int *Arr;
        int iSize;

        // Default constructor
        ArrayX()
        {

        }

        // Parameterized constructor
        ArrayX(int X)
        {

        }
};

int main()
{
    ArrayX aobj1;     // Default
    ArrayX aobj2(5);  // Parameterized           


    cout<<sizeof(aobj1)<<endl; // 12 (8 if pointer gets 4 byte memory)
    return 0;
}