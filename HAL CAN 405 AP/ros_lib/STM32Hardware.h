/*
 * Software License Agreement (BSD License)
 *
 * Copyright (c) 2018, Kenta Yonekura (a.k.a. yoneken)
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 *  * Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *  * Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 *  * Neither the name of Willow Garage, Inc. nor the names of its
 *    contributors may be used to endorse or promote prducts derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef ROS_STM32_HARDWARE_H_
#define ROS_STM32_HARDWARE_H_

#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_can.h"

extern CAN_HandleTypeDef hcan1;
extern CAN_HandleTypeDef hcan1;
extern CAN_TxHeaderTypeDef pHeader;
extern CAN_RxHeaderTypeDef pRxHeader;
extern uint32_t TxMailbox;
extern uint8_t a;
extern uint8_t r;

class STM32Hardware {
  protected:


  public:
	void init() {
	    // do your initialization here. this probably includes TCP server/client setup
	    //client.connect(server, 11411);
	  }

	  // read a byte from the serial port. -1 = failure
	  int read() {
	    // implement this method so that it reads a byte from the TCP connection and returns it
	    //  you may return -1 is there is an error; for example if the TCP connection is not open
	    //return client.read();         //will return -1 when it will works
	  }

	  // write data to the connection to ROS
	  void write(uint8_t* data, int length) {
	    // implement this so that it takes the arguments and writes or prints them to the TCP connection
	    for(int i=0; i<length; i++);
	    HAL_CAN_AddTxMessage(&hcan1, &pHeader, &a, &TxMailbox);
	      //client.write(data[i]);
	  }

	  // returns milliseconds since start of program
	  unsigned long time() {
	     //return millis(); // easy; did this one for you
	  }

};

#endif

