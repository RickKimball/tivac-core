# tivac-core

This is an Arduino 1.6.X core for the the Texas Instruments TivaC series of arm cortex-m4f chips.  It is 99.9% derived from the Energia tivac-core. However, this version will build successfully using the stock Arduino IDE.

Features:
  o Latest TivaWare 2.1.2.111
  o openocd used for upload instead of dslite
    (assumes it is in your path)
  o arm-none-eabi-gcc toolchain from your path not .arduino15/packages
    (allows you to use later version or older ones)
  o platform.txt flags changed to create smallest size and nano.specs and movt, movw style literals instead of ldr=0xaddr for speed an optimal use of instruction cache and slow flash


