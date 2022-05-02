#include "Rearrange.h"
#include "Individual.h"

/*
In this class, the mutate function rearranges the list.
The function willselect the k-th digit in the bitstring (again, counting in circles).
This digit and all digits after it (all the way to the tail) will be moved to the start of the list.
For example, if you were rearranging the list (a,b,c,d,e) and k = 3,
the function would return an Individual with the list (c,d,e,a,b).
*/

void Rearrange::mutate(Individual* a, int k)
{
    while(k> a->getLength())
    k = k - a->getLength(); //adjust k to the right value

    std::string currentString= a->getString();
    std::string tempfront = currentString.substr(k-1);
    std::string result = tempfront + currentString.substr(0,k-1);
    Individual resultstring(result);
    *a = resultstring;
}
