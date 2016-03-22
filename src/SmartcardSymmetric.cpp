#include "SmartcardSymmetric.h"


SmartcardSymmetric::SmartcardSymmetric()
{

}

~SmartcardSymmetric::SmartcardSymmetric()
{

}

void SmartcardSymmetric::generateSymKey(SymmetricKey::Algorithm alg, int size = -1)
{
	SymmetricKeyGenerator* keyGen = new SymmetricKeyGenerator();
	if(size == -1)
	{
		return keyGen->generateKey(alg);
	}
	else{
		return keyGen->generateKey(alg, size);	
	}
}

void SmartcardSymmetric::importSymKey(SmartcardSlot* slot)
{
	int isLogged;
	int so = 0; //?
	PKCS11_is_logged_in(slot, so, &isLogged);

	if(isLogged)
	{
		
	}
}

void SmartcardSymmetric::exportSymKey()
{
	login();
}

void SmartcardSymmetric::login(SmartcardSlot* slot, int so, std::string pin)
{

}

main {
	login
	SMat::
}