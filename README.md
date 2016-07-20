# tivac-core

This is an Arduino 1.6.X core for the the Texas Instruments TivaC series of arm cortex-m4f chips.  It is 99.9% derived from the Energia tivac-core. However, this version is compatible with the stock Arduino IDE. There is no need to install Energia.

Features:
  - Uses latest TivaWare (2.1.2.111)
  - platform.txt flags changes that create the smallest size and utilize nano.specs. -mslow-data-flash optimizes literal loading and produces optimal code for use with the tivac instruction cache
  - added yield() function so you can use the Due/Zero Scheduler library
  - openocd used for upload instead of dslite (assumes path to openocd executable is in your path)
  - arm-none-eabi-gcc toolchain from your path not the version from .arduino15/packages (allows more flexibility in testing old and new toolchains)

#installation:

```
$ mkdir -p ~/Arduino/hardware/alt_ti
$ cd ~/Arduino/hardware/alt_ti
$ git clone https://github.com/RickKimball/tivac-core.git tivac
$ arduino &
```
