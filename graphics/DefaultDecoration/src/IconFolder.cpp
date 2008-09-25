/*
  NUI3 - C++ cross-platform GUI framework for OpenGL based applications
  Copyright (C) 2002-2003 Sebastien Metrot & Vincent Caron

  licence: see nui3/LICENCE.TXT
*/

#include "nui.h"

NGL_API const char* gpIconFolder = "\x89\x50\x4e\x47\x0d\x0a\x1a\x0a\x00\x00\x00\x0d\x49\x48\x44\x52"
"\x00\x00\x00\x12\x00\x00\x00\x10\x08\x06\x00\x00\x00\x1b\x06\x2f"
"\x5c\x00\x00\x00\x19\x74\x45\x58\x74\x53\x6f\x66\x74\x77\x61\x72"
"\x65\x00\x41\x64\x6f\x62\x65\x20\x49\x6d\x61\x67\x65\x52\x65\x61"
"\x64\x79\x71\xc9\x65\x3c\x00\x00\x01\xac\x49\x44\x41\x54\x78\xda"
"\xac\x53\xb1\x4a\x83\x31\x10\xbe\x4b\x6b\x15\xad\x2e\x3a\x88\xb8"
"\xb5\x5d\x1c\xec\x24\xb8\x38\xb8\xb8\xba\x38\x38\xe9\x43\xf8\x20"
"\xbe\x84\x6f\xd0\xad\x08\x0e\x2e\x82\x93\x8b\x88\xd6\x41\x14\x2c"
"\x56\xc4\x96\x0a\x7f\x9b\xe4\xe2\x5d\xd2\xfc\x6d\x6d\xa5\x0a\x0d"
"\xff\xf1\x27\xc7\xdd\x97\xef\xbe\xbb\xa0\x73\x0e\xa6\xb1\x14\x4c"
"\x69\x65\xe3\x06\x11\xa1\x7a\x79\xed\x2e\x6e\x1e\x87\x02\x76\xcb"
"\x05\xd8\xdb\xd9\x5a\xe4\x6d\xc2\x66\x26\x02\xc9\x12\x90\xf5\xe2"
"\x86\xdf\x4b\xc1\xe8\x7d\xb7\x72\x5c\x65\xab\xb3\xb5\x7f\x03\xc2"
"\xa8\xd1\xe9\x59\xc5\xdd\x3f\x37\xa0\x54\x2a\x32\xbb\x7e\xc0\x43"
"\xad\x16\x02\x63\x82\x37\x04\xe2\xab\x0a\x6b\x2b\x70\x72\xb4\xef"
"\xd9\xa6\x8c\x9e\x5e\xdf\xe1\xf8\xf0\x80\xa9\x44\xf1\x2d\xa0\xca"
"\xc0\x76\x79\x13\x34\x19\xef\xd7\x04\xd0\x75\x16\xba\x09\x9f\x31"
"\x07\xe7\xd5\x4a\xca\x76\xa8\xb4\x8f\x66\x0b\x9c\x8d\x32\x90\xef"
"\x05\x91\xf3\x40\xc8\xf8\x96\xd0\x03\x75\x3a\x06\x94\x9a\x8d\x3c"
"\xf3\x22\x51\x1f\xc8\x11\x34\xbf\x38\x01\x75\x68\x25\x0a\x09\x0b"
"\x96\x99\x08\x18\x7f\x6c\x96\x7d\x08\x86\x63\xc9\x38\x0e\x71\xa3"
"\x62\x8b\x5b\xf3\xb5\xca\x58\xdf\x41\x09\x91\x2a\x1d\x08\x90\x17"
"\x13\x0c\x89\x8f\xc2\x5f\xfd\xd2\x35\x11\xdd\x68\xfe\x33\x50\x54"
"\xdb\x03\x09\x23\x08\xac\x22\xb0\x15\x7a\xcc\x8e\xc6\x31\x22\xbe"
"\xe9\x93\x45\xcc\x91\xf5\xc1\xa1\xfe\xb0\xf3\x65\x31\x2d\xdf\x2d"
"\xe7\x02\x98\x30\xb2\x34\x0e\x88\x3b\xd2\x49\xb8\x7e\x9d\xce\x11"
"\x0c\x95\xe7\x06\x86\x80\xcf\xaa\x03\x76\x60\x4e\x52\x20\xad\x2d"
"\xbc\x34\x5a\x30\x43\x6d\xa0\x9e\x8c\x18\x7a\x10\xd2\x55\x00\xcf"
"\xc4\xe1\xc8\x2e\x70\x8e\x19\x05\xca\x2a\x07\x6f\x77\x57\x3e\x0b"
"\x27\xbc\xab\x38\x6a\xcb\x4b\xf3\xa3\x93\xcd\x9d\xca\xf7\x86\x2b"
"\xff\xcf\xf7\x2a\xcf\xa6\x3e\x08\x24\xec\xe6\x7e\xbe\xbf\x3f\x2c"
"\xa9\x2f\xf9\x16\x60\x00\x1f\x36\xed\xe4\x94\x39\x4f\x65\x00\x00"
"\x00\x00\x49\x45\x4e\x44\xae\x42\x60\x82";