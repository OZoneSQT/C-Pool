#pragma once

/*
 * PORTx = Outpit
 * DDRx = Direction In/Out
 * PINx = Input
 */

/// Set IO => example:	setPinOutput(DDRB, PB0);
#define setOutputPin(Port, pin) (port) |= ( 1 << pin )												
#define setInputPin(Port, pin) (port) &= ~( 1 << pin )

/// Set pin as output => example:	setPortState(PORTB, PB0);
#define getPortState(port, bit) (port) & ( 1 << bit )		//(0-7)
#define setPortState(port, bit) (port) |= ( 1 << bit )		//(0-7)
#define clearPortState(port, bit) (port) &= ~( 1 << bit )	//(0-7)
#define flipPortState(port, bit) (port) ^= ( 1 << bit )		//(0-7)


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