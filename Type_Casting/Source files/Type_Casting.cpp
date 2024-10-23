#include "TypeCaster.h"
#include <iostream>

int main() {
    TypeCaster caster(10.75, 65.5); // Example values

    int resultInt = caster.implicitCast();
    char resultChar = caster.explicitCast();

    caster.displayResults();

    return 0;
}
