#ifndef __isr_h
#define __isr_h
// Hal: exp: #define P_led P10 -----------------

// Const: exp: #define D_data 1 ----------------

// Globle Var -----------------------------------------
#ifdef __isr_c
bit b1ms;
volatile uint8_t vData;
//uint8_t vData;
uint8_t gData;
uint8_t time = 0;
#else
extern bit b1ms;
extern volatile uint8_t vData;
//extern uint8_t vData;
extern uint8_t gData;
#endif