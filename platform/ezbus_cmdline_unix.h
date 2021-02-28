/*****************************************************************************
* Copyright © 2021 Mike Sharkey <mike@8bitgeek.net>                          *
*                                                                            *
* Permission is hereby granted, free of charge, to any person obtaining a    *
* copy of this software and associated documentation files (the "Software"), *
* to deal in the Software without restriction, including without limitation  *
* the rights to use, copy, modify, merge, publish, distribute, sublicense,   *
* and/or sell copies of the Software, and to permit persons to whom the      *
* Software is furnished to do so, subject to the following conditions:       *
*                                                                            *
* The above copyright notice and this permission notice shall be included in *
* all copies or substantial portions of the Software.                        *
*                                                                            *
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR *
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,   *
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL    *
* THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER *
* LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING    *
* FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER        *
* DEALINGS IN THE SOFTWARE.                                                  *
*****************************************************************************/
#ifndef EZBUS_CMDLINE_UNIX_H_
#define EZBUS_CMDLINE_UNIX_H_
#include <ezbus_cmdline.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct _ezbus_cmline_unix
{
    const char*     serial_device;
    int             serial_baud;
    const char*     host;
    int             port;
    uint32_t        address;
} ezbus_cmdline_unix_t;

extern int ezbus_cmdline_unix_setup(
                                ezbus_cmdline_t* ezbus_cmdline, 
                                ezbus_cmdline_unix_t* ezbus_cmdline_unix 
                                );

#ifdef __cplusplus
}
#endif

#endif
