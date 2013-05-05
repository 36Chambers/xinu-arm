/*
 * This code was extracted from:
 * git://github.com/gonzoua/u-boot-pi.git master
 * and hence presumably (C) 2012 Oleksandr Tymoshenko
 *
 * Tweaks for U-Boot upstreaming
 * (C) 2012 Stephen Warren
 *
 * Portions (e.g. read/write macros, concepts for back-to-back register write
 * timing workarounds) obviously extracted from the Linux kernel at:
 * https://github.com/raspberrypi/linux.git rpi-3.6.y
 *
 * The Linux kernel code has the following (c) and license, which is hence
 * propagated to Oleksandr's tree and here:
 *
 * Support for SDHCI device on 2835
 * Based on sdhci-bcm2708.c (c) 2010 Broadcom
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */

/* Supports:
 * SDHCI platform device - Arasan SD controller in BCM2708
 *
 * Inspired by sdhci-pci.c, by Pierre Ossman
 */

#include <sdhci.h>

printf("This is a file test");
