# z88dk-rc2014

This snapshot cloned from the [z88dk source](http://nightly.z88dk.org/) on November 14th 2016.
Updates will be added reguarly.

The [z88dk-rc2014/libsrc/_DEVELOPMENT/target/rc2014](https://github.com/RC2014Z80/z88dk-rc2014/tree/master/libsrc/_DEVELOPMENT/target/rc2014) directory contains files specific to the rc2014.

The [z88dk](http://www.z88dk.org/wiki/doku.php) is a fully featured C development environment for z80 processor based machines. It supports two C compilers, and standard C libraries written in z80 assembler language for best performance.

This repository is a snapshot of the z88dk (from November 14th, as of writing) is called z88dk-rc2014.
After cloning this repo from Github, the [instructions on this blog](https://feilipu.me/2016/09/16/z80-c-code-development-with-eclipse-and-z88dk/) and on the [z88dk wiki](http://www.z88dk.org/wiki/doku.php) can be interpreted to build and use the z88dk.

Note that the [SDCC](http://sdcc.sourceforge.net) is updated to \#9801 from November 14th, too. [Linux AMD64 binaries for zsdcc and zsdcpp](https://github.com/RC2014Z80/z88dk-rc2014/tree/master/bin) are in the ~/bin directory. So if you are on 64 bit Linux there is no need to build SDCC separately, unless you want to.

Both serial ACIA input and output are buffered with 128 bytes, and are [interrupt driven](https://github.com/RC2014Z80/z88dk-rc2014/blob/master/libsrc/_DEVELOPMENT/target/rc2014/device/acia/acia_interrupt.asm). Once the transmit buffer is full, the output call is blocking until the Tx buffer has space available.

Once we've done a bit of testing, I'm sure that the very helpful z88dk team (particularly [aralbrec](https://github.com/aralbrec), who essentially integrated this port) will want to pull the [rc2014 port](https://github.com/RC2014Z80/z88dk-rc2014/tree/master/libsrc/_DEVELOPMENT/target/rc2014) into their mainline code.

There are a couple of improvements to make straight away, but now it is in a place where it can be tested.
Please use Github for registering [issues](https://github.com/RC2014Z80/z88dk-rc2014/issues).

## Usage

To use the ROM version, if your C code is in `test.c`. Compressed ROM also available with `-subtype=rom_zx7`.

`zcc +rc2014 -subtype=rom -v -m -SO3 --max-allocs-per-node200000 --c-code-in-asm --list test.c  -o test -create-app`

To generate ROM for the [z80machine](https://github.com/BleuLlama/z80-machine), using [BleuLlama romtools](https://github.com/BleuLlama/bleu-romtools).

`genroms test.roms test.ihx`

To disassemble your code using [z80dasm](http://manpages.ubuntu.com/manpages/xenial/man1/z80dasm.1.html) to ensure you're not dreaming.

`z80dasm --origin=0 --address --labels --zilog test.bin -o test.dasm`


