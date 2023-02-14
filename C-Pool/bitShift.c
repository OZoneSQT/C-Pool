#include "bitShift.h"

/**
* Combines 8 bit hsb (highest sigifican bit) with 8 bit lsb (least sigifican bit)
* 
* @return uint16_t
*/
uint16_t buildNumber(uint8_t hsb, uint8_t lsb)
{
	return (uint16_t) (lsb << 0) | (hsb << 7);
}

uint8_t maskBits(uint8_t number, uint8_t mask) 
{
	return number & mask;
}

uint8_t getBits(uint8_t number, uint8_t bit)
{
	return number & (1 << bit);
}

uint8_t setBits(uint8_t number, uint8_t bit)
{
	return number |= (1 << bit);
}

uint8_t clearBits(uint8_t number, uint8_t bit)
{
	return number &= ~(1 << bit);
}

uint8_t invertBits(uint8_t number, uint8_t bit)
{
	return number ^= (1 << bit);
}

uint8_t onesComplement(uint8_t number) 
{
	return ~number;
}

int8_t twosComplement(uint8_t number)
{
	int8_t result = ~number + 1;

	return result;
}
