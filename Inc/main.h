
// V1.0 board
#define USE_STM32F407ZET	//TQFP144

// Which board rev is this?
// #define USE_STM32F407VET	//TQFP100

/*
#if defined(USE_STM32F407ZET)
#elif defined(USE_STM32F407VET)
#endif
*/

#if defined(MKS_DLP_BOARD)	//MKS DLP_BOARD?�¡�?
  #include "main_dlp_board.h"
#endif 
