#include <stdio.h>

// recursive
unsigned recadd(unsigned x, unsigned y) {
    return y ? recadd(x^y, (x & y) << 1) : x;
}

// iterative 
unsigned add(unsigned x, unsigned y) {
    int xorElement, andElement, shiftedElement, finalElement;
    while (x & y) {
        xorElement = x ^ y;
        andElement = x & y;
        shiftedElement = andElement << 1;
        x = xorElement;
        y = shiftedElement;
    }
    
    return x^y;
}

int main() {
    printf("%u  %u\n", recadd(993, 7), add(993, 7));
    return 0;
}
