// Licensed under Creative Commons Zero v1.0 Universal

#pragma once


// clang-format off

#if defined(_WIN32) || defined(WIN32)

// Save these macros for later; Windows redefines them
#pragma push_macro("MAX_uint8")
#pragma push_macro("MAX_uint16")
#pragma push_macro("MAX_uint32")
#pragma push_macro("MAX_int32")
#pragma push_macro("TEXT")
#pragma push_macro("TRUE")
#pragma push_macro("FALSE")

// Undefine the TEXT macro for winnt.h to redefine it, unless it's already been included
#ifndef _WINNT_
#undef TEXT
#endif

#endif // defined(_WIN32) || defined(WIN32)