/*
*****************Copyright (c)*************************************
**      Hangzhou Xili Watthour Meter Manufacture Co., Ltd. 
**--------------file info--------------------------------------------
**name			: Drv_TMR.c
**Author		: maji
**date			: 2016-04-20 
**description	: MCU tmr模块的硬件驱动C代码
**note			: V9811A ，MERTER FOR DL03C
**--------------------Version History -------------------------------------
** NO. Date         Ver      By         Description 
**==============================================================
** 1   2016-04-26   v01.00   sosomj     1. frist version                             
**
**==============================================================
*/

#include <MyIncludes_H.h>




/*******************************************************************************************
** 函数名称: Start_Timer
** 功能描述: 启动Timer
** 入口参数: 无
** 出口参数: 无
** 说明    : 
*******************************************************************************************/
void Start_Timer(void)
{
   	TR0 = 1;	          //开启TIMER0  //
	ET0 = 1;
}

/*******************************************************************************************
** 函数名称: Stop_Timer
** 功能描述: 关闭Timer
** 入口参数: 无
** 出口参数: 无
** 说明    : 
*******************************************************************************************/
void Stop_Timer(void)
{
   TR0 = 0;							   //关闭TIMER0  //
   ET0 = 0;
}

/*******************************************************************************************
** 函数名称: Init_Timer
** 功能描述: 初始化TIMER
** 入口参数: 无
** 出口参数: 无
** 说明    : 
*******************************************************************************************/
void Init_Timer(void)
{	

    TMOD = 0x01;	     // 工作在模式1
    CKCON|=BIT3;         // clk 
    TL0  = LOBYTE(T0_10MS_CNT);         //10ms
    TH0  = HIBYTE(T0_10MS_CNT);
    Start_Timer();
}


/*******************************************************************************************
**    END
*******************************************************************************************/