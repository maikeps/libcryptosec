#ifndef SMARTCARDSYMMETRIC_H_
#define SMARTCARDSYMMETRIC_H_

#include <libp11.h>

#include "SymmetricKeyGenerator.h"

class SmartcardSymmetric
{

public:
SmartcardSymmetric();
~SmartcardSymmetric();

void generateSymKey();
void importSymKey();
void exportSymKey();
// private:
// wrap();
};

#endif /*SMARTCARDSYMMETRIC_H_*/