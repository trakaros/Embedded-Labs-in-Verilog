#include "xparameters.h"
#include "xgpio.h"
#include "graycounter.h"
//====================================================

int main (void) 
{

   XGpio dip, push;
   int i, psb_check, dip_check, gray_check, gray1;
	
   xil_printf("-- Start of the Program --\r\n");
  
   XGpio_Initialize(&dip, XPAR_SW_8BIT_DEVICE_ID); // Modify this
   XGpio_SetDataDirection(&dip, 1, 0xffffffff);
	
   XGpio_Initialize(&push, XPAR_BTNS_5BIT_DEVICE_ID); // Modify this
   XGpio_SetDataDirection(&push, 1, 0xffffffff);
	

   while (1)
   {
	  psb_check = XGpio_DiscreteRead(&push, 1);
	  xil_printf("Push Buttons Status %x\r\n", psb_check);
	  dip_check = XGpio_DiscreteRead(&dip, 1);
	  xil_printf("DIP Switch Status %x\r\n", dip_check);
	  
	  gray1 = GRAYCOUNTER_mReadReg(XPAR_GRAYCOUNTER_0_S00_AXI_BASEADDR, GRAYCOUNTER_S00_AXI_SLV_REG0_OFFSET);
	  xil_printf("Slave0 Value %x\r\n", gray1);

	  gray_check = GRAYCOUNTER_mReadReg(XPAR_GRAYCOUNTER_0_S00_AXI_BASEADDR, GRAYCOUNTER_S00_AXI_SLV_REG1_OFFSET);
	  xil_printf("LED Status %x\r\n", gray_check);

	  // output dip switches value on LED_ip device
	//  LED_IP_mWriteReg(XPAR_LED_IP_S00_AXI_BASEADDR, 0, dip_check);

	 // GRAYCOUNTER_mWriteReg(XPAR_GRAYCOUNTER_0_S00_AXI_BASEADDR, 4, gray_check);
	  for (i=0; i<9999999; i++);
   }
}