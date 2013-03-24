#!/bin/sh
qemu-system-arm -m 256M -M versatilepb -kernel xinu.bin -nographic -cpu arm926 -gdb tcp::1234
