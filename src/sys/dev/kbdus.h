//
// kbdus.h
//
// Keyboard tables for US keyboard
//
// Copyright (C) 2002 Michael Ringgaard. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 
// 1. Redistributions of source code must retain the above copyright 
//    notice, this list of conditions and the following disclaimer.  
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.  
// 3. Neither the name of the project nor the names of its contributors
//    may be used to endorse or promote products derived from this software
//    without specific prior written permission. 
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF 
// SUCH DAMAGE.
// 

struct keytable uskeys = {
  "us",

  // Normal scancodes
  {
  // normal  shift   ctrl    alt     num     caps    scaps   snum    altgr

    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 00
    {0x1B1B, 0x1B1B, 0x1B1B, 0x0100, 0x1B1B, 0x1B1B, 0x1B1B, 0x1B1B, 0},   // 01 esc
    {0x31,   0x21,   0,      0x7800, 0x31,   0x31,   0x21,   0x21,   0},   // 02 1
    {0x32,   0x40,   0x0300, 0x7900, 0x32,   0x32,   0x40,   0x40,   0},   // 03 2
    {0x33,   0x23,   0,      0x7A00, 0x33,   0x33,   0x23,   0x23,   0},   // 04 3
    {0x34,   0x24,   0,      0x7B00, 0x34,   0x34,   0x24,   0x24,   0},   // 05 4
    {0x35,   0x25,   0,      0x7C00, 0x35,   0x35,   0x25,   0x25,   0},   // 06 5
    {0x36,   0x5E,   0x1E,   0x7D00, 0x36,   0x36,   0x5E,   0x5E,   0},   // 07 6
    {0x37,   0x26,   0,      0x7E00, 0x37,   0x37,   0x26,   0x26,   0},   // 08 7
    {0x38,   0x2A,   0,      0x7F00, 0x38,   0x38,   0x2A,   0x2A,   0},   // 09 8
    {0x39,   0x28,   0,      0x8000, 0x39,   0x39,   0x28,   0x28,   0},   // 0A 9
    {0x30,   0x29,   0,      0x8100, 0x30,   0x30,   0x29,   0x29,   0},   // 0B 0
    {0x2D,   0x5F,   0x1F,   0x8200, 0x2D,   0x2D,   0x5F,   0x5F,   0},   // 0C -
    {0x3D,   0x2B,   0,      0x8300, 0x3D,   0x3D,   0x2B,   0x2B,   0},   // 0D =
    {0x08,   0x08,   0x7F,   0x0E00, 0x08,   0x08,   0x08,   0x08,   0},   // 0E bksp
    {0x09,   0x0F00, 0x9400, 0xA500, 0x09,   0x09,   0x0F00, 0x0F00, 0},   // 0F tab
    {0x71,   0x51,   0x11,   0x1000, 0x71,   0x51,   0x71,   0x51,   0},   // 10 Q
    {0x77,   0x57,   0x17,   0x1100, 0x77,   0x57,   0x77,   0x57,   0},   // 11 W
    {0x65,   0x45,   0x05,   0x1200, 0x65,   0x45,   0x65,   0x45,   0},   // 12 E
    {0x72,   0x52,   0x12,   0x1300, 0x72,   0x52,   0x72,   0x52,   0},   // 13 R
    {0x74,   0x54,   0x14,   0x1400, 0x74,   0x54,   0x74,   0x54,   0},   // 14 T
    {0x79,   0x59,   0x19,   0x1500, 0x79,   0x59,   0x79,   0x59,   0},   // 15 Y
    {0x75,   0x55,   0x15,   0x1600, 0x75,   0x55,   0x75,   0x55,   0},   // 16 U
    {0x69,   0x49,   0x09,   0x1700, 0x69,   0x49,   0x69,   0x49,   0},   // 17 I
    {0x6F,   0x4F,   0x0F,   0x1800, 0x6F,   0x4F,   0x6F,   0x4F,   0},   // 18 O
    {0x70,   0x50,   0x10,   0x1900, 0x70,   0x50,   0x70,   0x50,   0},   // 19 P
    {0x5B,   0x7B,   0x1B,   0x1A00, 0x5B,   0x5B,   0x7B,   0x7B,   0},   // 1A [
    {0x5D,   0x7D,   0x1D,   0x1B00, 0x5D,   0x5D,   0x7D,   0x7D,   0},   // 1B ]
    {0x0D,   0x0D,   0x0A,   0x1C00, 0x0D,   0x0D,   0x0A,   0x0A,   0},   // 1C enter
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 1D ctrl
    {0x61,   0x41,   0x01,   0x1E00, 0x61,   0x41,   0x61,   0x41,   0},   // 1E A
    {0x73,   0x53,   0x13,   0x1F00, 0x73,   0x53,   0x73,   0x53,   0},   // 1F S
    {0x64,   0x44,   0x04,   0x2000, 0x64,   0x44,   0x64,   0x44,   0},   // 20 D
    {0x66,   0x46,   0x06,   0x2100, 0x66,   0x46,   0x66,   0x46,   0},   // 21 F
    {0x67,   0x47,   0x07,   0x2200, 0x67,   0x47,   0x67,   0x47,   0},   // 22 G
    {0x68,   0x48,   0x08,   0x2300, 0x68,   0x48,   0x68,   0x48,   0},   // 23 H
    {0x6A,   0x4A,   0x0A,   0x2400, 0x6A,   0x4A,   0x6A,   0x4A,   0},   // 24 J
    {0x6B,   0x4B,   0x0B,   0x2500, 0x6B,   0x4B,   0x6B,   0x4B,   0},   // 25 K
    {0x6C,   0x4C,   0x0C,   0x2600, 0x6C,   0x4C,   0x6C,   0x4C,   0},   // 26 L
    {0x3B,   0x3A,   0,      0x2700, 0x3B,   0x3B,   0x3A,   0x3A,   0},   // 27 ;
    {0x27,   0x22,   0,      0x2800, 0x27,   0x27,   0x22,   0x22,   0},   // 28 '
    {0x60,   0x7E,   0,      0x2900, 0x60,   0x60,   0x7E,   0x7E,   0},   // 29 ~
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 2A left shift
    {0x5C,   0x7C,   0x1C,   0x2B00, 0x5C,   0x5C,   0x7C,   0x7C,   0},   // 2B \ 
    {0x7A,   0x5A,   0x1A,   0x2C00, 0x7A,   0x5A,   0x7A,   0x5A,   0},   // 2C Z
    {0x78,   0x58,   0x18,   0x2D00, 0x78,   0x58,   0x78,   0x58,   0},   // 2D X
    {0x63,   0x43,   0x03,   0x2E00, 0x63,   0x43,   0x63,   0x43,   0},   // 2E C
    {0x76,   0x56,   0x16,   0x2F00, 0x76,   0x56,   0x76,   0x56,   0},   // 2F V
    {0x62,   0x42,   0x02,   0x3000, 0x62,   0x42,   0x62,   0x42,   0},   // 30 B
    {0x6E,   0x4E,   0x0E,   0x3100, 0x6E,   0x4E,   0x6E,   0x4E,   0},   // 31 N
    {0x6D,   0x4D,   0x0D,   0x3200, 0x6D,   0x4D,   0x6D,   0x4D,   0},   // 32 M
    {0x2C,   0x3C,   0,      0x3300, 0x2C,   0x2C,   0x3C,   0x3C,   0},   // 33 ,
    {0x2E,   0x3E,   0,      0x3400, 0x2E,   0x2E,   0x3E,   0x3E,   0},   // 34 .
    {0x2F,   0x3F,   0,      0x3500, 0x2F,   0x2F,   0x3F,   0x3F,   0},   // 35 /
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 36 right shift
    {0x2A,   0x2A,   0x9600, 0x3700, 0x2A,   0x2A,   0,      0,      0},   // 37 * (kpad)
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 38 left alt
    {0x20,   0x20,   0x20,   0x3900, 0x20,   0x20,   0x20,   0x20,   0},   // 39 space
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 3A caps
    {0x3B00, 0x5400, 0x5E00, 0x6800, 0x3B00, 0x3B00, 0x5400, 0x5400, 0},   // 3B F1
    {0x3C00, 0x5500, 0x5F00, 0x6900, 0x3C00, 0x3C00, 0x5500, 0x5500, 0},   // 3C F2
    {0x3D00, 0x5600, 0x6000, 0x6A00, 0x3D00, 0x3D00, 0x5600, 0x5600, 0},   // 3D F3
    {0x3E00, 0x5700, 0x6100, 0x6B00, 0x3E00, 0x3E00, 0x5700, 0x5700, 0},   // 3E F4
    {0x3F00, 0x5800, 0x6200, 0x6C00, 0x3F00, 0x3F00, 0x5800, 0x5800, 0},   // 3F F5
    {0x4000, 0x5900, 0x6300, 0x6D00, 0x4000, 0x4000, 0x5900, 0x5900, 0},   // 40 F6
    {0x4100, 0x5A00, 0x6400, 0x6E00, 0x4100, 0x4100, 0x5A00, 0x5A00, 0},   // 41 F7
    {0x4200, 0x5B00, 0x6500, 0x6F00, 0x4200, 0x4200, 0x5B00, 0x5B00, 0},   // 42 F8
    {0x4300, 0x5C00, 0x6600, 0x7000, 0x4300, 0x4300, 0x5C00, 0x5C00, 0},   // 43 F9
    {0x4400, 0x5D00, 0x6700, 0x7100, 0x4400, 0x4400, 0x5D00, 0x5D00, 0},   // 44 F10
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 45 numlock
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 46 scrllock
    {0x4700, 0x37,   0x7700, 0,      0x37,   0x4700, 0x37,   0x4700, 0},   // 47 7 home (kpad)
    {0x4800, 0x38,   0x8D00, 0,      0x38,   0x4800, 0x38,   0x4800, 0},   // 48 8 up (kpad)
    {0x4900, 0x39,   0x8400, 0,      0x39,   0x4900, 0x39,   0x4900, 0},   // 49 9 pgup (kpad)
    {0x2D,   0x2D,   0x8E00, 0x4A00, 0x2D,   0x2D,   0x2D,   0x2D,   0},   // 4A - (kpad)
    {0x4B00, 0x34,   0x7300, 0,      0x34,   0x4B00, 0x34,   0x4B00, 0},   // 4B 4 left (kpad)
    {0x4C00, 0x35,   0x8F00, 0,      0x35,   0x4C00, 0x35,   0x4C00, 0},   // 4C 5 center (kpad)
    {0x4D00, 0x36,   0x7400, 0,      0x36,   0x4D00, 0x36,   0x4D00, 0},   // 4D 6 right (kpad)
    {0x2B,   0x2B,   0x9000, 0x4E00, 0x2B,   0x2B,   0x2B,   0x2B,   0},   // 4E + (kpad)
    {0x4F00, 0x31,   0x7500, 0,      0x31,   0x4F00, 0x31,   0x4F00, 0},   // 4F 1 end (kpad)
    {0x5000, 0x32,   0x9100, 0,      0x32,   0x5000, 0x32,   0x5000, 0},   // 50 2 down (kpad)
    {0x5100, 0x33,   0x7600, 0,      0x33,   0x5100, 0x33,   0x5100, 0},   // 51 3 pgdn (kpad)
    {0x5200, 0x30,   0x9200, 0,      0x30,   0x5200, 0x30,   0x5200, 0},   // 52 0 ins (kpad)
    {0x5300, 0x2E,   0x9300, 0,      0x2E,   0x5300, 0x2E,   0x5300, 0},   // 53 . del (kpad)
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 54 caps
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 55
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 56 < > \ 
    {0x8500, 0x8700, 0x8900, 0x8B00, 0x8500, 0x8500, 0x8700, 0x8700, 0},   // 57 F11
    {0x8600, 0x8800, 0x8A00, 0x8C00, 0x8600, 0x8600, 0x8800, 0x8800, 0},   // 58 F12
  },

  // Extended scancodes
  {
  // normal  shift   ctrl    alt     num     caps    scaps   snum    altgr

    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 00
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 01
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 02
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 03
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 04
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 05
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 06
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 07
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 08
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 09
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 0A
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 0B
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 0C
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 0D
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 0E
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 0F
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 10
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 11
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 12
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 13
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 14
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 15
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 16
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 17
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 18
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 19
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 1A
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 1B
    {0x0D,   0x0D,   0x0A,   0xA600, 0x0D,   0x0D,   0x0A,   0x0A,   0},   // 1C enter (kpad)
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 1D right ctrl
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 1E
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 1F
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 20
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 21
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 22
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 23
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 24
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 25
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 26
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 27
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 28
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 29
    {0x0500, 0,      0x7200, 0,      0,      0,      0,      0,      0},   // 2A prtscr
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 2B
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 2C
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 2D
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 2E
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 2F
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 30
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 31
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 32
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 33
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 34
    {0x2F,   0x3F,   0x9500, 0xA400, 0x2F,   0x2F,   0x3F,   0x3F,   0},   // 35 / (kpad)
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 36
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 37
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 38 right alt
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 39
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 3A
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 3B
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 3C
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 3D
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 3E
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 3F
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 40
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 41
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 42
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 43
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 44
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 45
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 46
    {0x4700, 0xB700, 0x7700, 0x9700, 0x4700, 0x4700, 0x4700, 0x4700, 0},   // 47 home
    {0x4800, 0xB800, 0x8D00, 0x9800, 0x4800, 0x4800, 0x4800, 0x4800, 0},   // 48 up
    {0x4900, 0xB900, 0x8400, 0x9900, 0x4900, 0x4900, 0x4900, 0x4900, 0},   // 49 pgup
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 4A
    {0x4B00, 0xBB00, 0x7300, 0x9B00, 0x4B00, 0x4B00, 0x4B00, 0x4B00, 0},   // 4B left
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 4C
    {0x4D00, 0xBD00, 0x7400, 0x9D00, 0x4D00, 0x4D00, 0x4D00, 0x4D00, 0},   // 4D right
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 4E
    {0x4F00, 0xBF00, 0x7500, 0x9F00, 0x4F00, 0x4F00, 0x4F00, 0x4F00, 0},   // 4F end
    {0x5000, 0xC000, 0x9100, 0xA000, 0x5000, 0x5000, 0x5000, 0x5000, 0},   // 50 down
    {0x5100, 0xC100, 0x7600, 0xA100, 0x5100, 0x5100, 0x5100, 0x5100, 0},   // 51 pgdn
    {0x5200, 0xC200, 0x9200, 0xA200, 0x5200, 0x5200, 0x5200, 0x5200, 0},   // 52 ins
    {0x5300, 0xC300, 0x9300, 0xA300, 0x5300, 0x5300, 0x5300, 0x5300, 0},   // 53 del
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 54
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 55
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 56
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 57
    {0,      0,      0,      0,      0,      0,      0,      0,      0},   // 58
  }
};
