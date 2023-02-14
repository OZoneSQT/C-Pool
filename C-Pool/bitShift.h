#pragma once

#include <stdint.h>

uint16_t buildNumber(uint8_t hsb, uint8_t lsb);
uint8_t maskBits(uint8_t number, uint8_t mask);
uint8_t getBits(uint8_t number, uint8_t bit);
uint8_t setBits(uint8_t number, uint8_t bit);
uint8_t clearBits(uint8_t number, uint8_t bit);
uint8_t invertBits(uint8_t number, uint8_t bit);

uint8_t onesComplement(uint8_t number);
int8_t twosComplement(uint8_t number);

/*
	Arithmetic operators (Bitwise operators)

	Operator Description Example
	~ Bitwise NOT (Ones Complement) ~a the bitwise NOT of a
	& Bitwise AND a & b the bitwise AND of a and b
	| Bitwise OR a | b the bitwise OR of a and b
	^ Bitwise XOR a ^ b the bitwise XOR of a and b
	<< Bitwise left shift a << 4 a bits shifted 4 times to the left
	>> Bitwise right shift a >> 4 a bits shifted 4 times to the right
 */

