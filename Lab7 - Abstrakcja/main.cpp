#include <iostream>
#include "element.h"

using namespace std;

int obwod(element* cos,element* cos2)
{
    if ((cos->prad==cos2->prad) && (cos->napiecie==cos2->napiecie))
    return 3;
    if (cos->prad==cos2->prad)
    return 1;
    if (cos->napiecie==cos2->napiecie)
    return 2;
    else
    return 0;

}

int main()
{
    element* cos;
    element* cos2;
    cout << "Hello world!" << endl;
    return 0;
}
