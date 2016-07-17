#******************************************************************************
#
# Makefile - Rules for building the driver library.
#
# Copyright (c) 2005-2015 Texas Instruments Incorporated.  All rights reserved.
# Software License Agreement
# 
#   Redistribution and use in source and binary forms, with or without
#   modification, are permitted provided that the following conditions
#   are met:
# 
#   Redistributions of source code must retain the above copyright
#   notice, this list of conditions and the following disclaimer.
# 
#   Redistributions in binary form must reproduce the above copyright
#   notice, this list of conditions and the following disclaimer in the
#   documentation and/or other materials provided with the  
#   distribution.
# 
#   Neither the name of Texas Instruments Incorporated nor the names of
#   its contributors may be used to endorse or promote products derived
#   from this software without specific prior written permission.
# 
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
# LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
# OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
# SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
# LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
# DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
# THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
# OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
# 
# This is part of revision 2.1.2.111 of the Tiva Peripheral Driver Library.
#
#******************************************************************************

#
# Defines the directory suffix that this project uses.
#
SUFFIX=-cm4f

#
# Set the processor variant.
#
VARIANT=cm4f


#
# The base directory for TivaWare.
#
ROOT=.

#
# Include the common make definitions.
#
include ${ROOT}/makedefs

TARGET_DIR = ${COMPILER}${SUFFIX}

#
# Where to find header files that do not live in the source directory.
#
IPATH=..

#
# The default rule, which causes the driver library to be built.
#
all: ${TARGET_DIR}
all: ${TARGET_DIR}/libdriver.a
all:
	cp ${TARGET_DIR}/libdriver.a libdriverlib.a

#
# The rule to clean out all the build products.
#
clean:
	@rm -rf ${TARGET_DIR} ${wildcard *~}

#
# The rule to create the target directory.
#
${TARGET_DIR}:
	@mkdir -p ${TARGET_DIR}

#
# Rules for building the driver library.
#
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/adc.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/aes.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/can.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/comp.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/cpu.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/crc.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/des.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/eeprom.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/emac.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/epi.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/flash.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/fpu.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/gpio.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/hibernate.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/i2c.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/interrupt.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/lcd.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/mpu.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/onewire.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/pwm.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/qei.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/shamd5.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/ssi.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/sw_crc.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/sysctl.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/sysexc.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/systick.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/timer.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/uart.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/udma.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/usb.o
${TARGET_DIR}/libdriver.a: ${TARGET_DIR}/watchdog.o

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${TARGET_DIR}/*.d} __dummy__
endif
