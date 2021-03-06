/*
*****************Copyright (c)*************************************
**      Hangzhou Xili Watthour Meter Manufacture Co., Ltd. 
**--------------file info--------------------------------------------
**name			: Drv_E2P_i2cSoft_H.h
**Author		: maji
**date			: 2016-4-19
**description	: define file for Drv_E2P_i2cSoft_H.c
**note			:  适用于中颖G80F92XD芯片
**--------------------Version History -------------------------------------
** NO. Date         Ver      By         Description 
**==============================================================
** 1   2016-04-19   v01.00   sosomj     1. frist version                             
**
**==============================================================
*/

#ifndef 	_Drv_E2P_i2cSoft_H
#define	_Drv_E2P_i2cSoft_H

/******************************************************************
*              1     立即数预定义                                                    
******************************************************************/


/******************************************************************
*               2     数据结构声明                                
******************************************************************/


/******************************************************************
*              3    变量声明                                      
******************************************************************/


/******************************************************************
*             4     函数声明                                      
******************************************************************/
extern void E2p_IIC_Initail(void);
extern void E2p_Start_i2c(void);
extern void E2p_Stop_i2c(void);
extern uint8 E2p_TxByte_i2c(uint8 txData);
extern uint8 E2p_RxByte_i2c(uint8 u8_ack);

/******************************************************************
*             5     其他内容，例如伪指令等              
******************************************************************/
#define  HOLD_I2C_CLK()  {NOP();NOP();NOP();NOP();NOP();NOP();}  // I2C-BUS IO操作延时，延时4uS //



/***************************************************************
*    END
****************************************************************/

#endif
