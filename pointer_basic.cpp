#include <iostream>
using namespace std;

void swap(int *addr1, int *addr2)
{
    int temp;
    temp = *addr1;
    *addr1 = *addr2;
    *addr2 = temp;
}

int main(void)
{
    int x = 5, y = 10;
    cout << "Before swap function: ";
    cout << "x = " << x << ", y = " << y << endl;
    swap(&x,&y);
    cout << "After swap function: ";
    cout << "x = " << x << ", y = " << y << endl;
    return 0;
}
