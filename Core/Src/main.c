#include <stdio.h>
#include <stdint.h>

int main(void)
{
	uint32_t *pC1k1        = (uint32_t*)0x40021018;
	uint32_t *pC1k1ModeReg = (uint32_t*)0x40011004;
	uint32_t *pC1k1OutReg  = (uint32_t*)0x4001100C;

	*pC1k1 |= (1 << 4);

	*pC1k1ModeReg &= ~(0xF << 20);
	*pC1k1ModeReg |=  (0x1 << 20);

	while(1){
		*pC1k1OutReg |= (1 << 13);


		for(uint32_t i = 0 ; i < 10000 ; i++);


		*pC1k1OutReg &= ~(1 << 13);

		for(uint32_t i = 0 ; i < 10000 ; i++);
	}
}
