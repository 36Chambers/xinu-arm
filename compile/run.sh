#!/bin/sh
qemu-system-arm -m 128M -M raspi -kernel xinu.bin -nographic -cpu arm1176 -gdb tcp::1234
