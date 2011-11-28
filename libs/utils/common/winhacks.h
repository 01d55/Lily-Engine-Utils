// ---------------------------------------------------------------------------
//
//   Lily Engine alpha
//
//   Copyright (c) 2010 Clifford Jolly
//     http://expiredpopsicle.com
//     expiredpopsicle@gmail.com
//
// ---------------------------------------------------------------------------
//
//   Copyright (c) 2011 Clifford Jolly
//
//   This software is provided 'as-is', without any express or implied
//   warranty. In no event will the authors be held liable for any
//   damages arising from the use of this software.
//
//   Permission is granted to anyone to use this software for any
//   purpose, including commercial applications, and to alter it and
//   redistribute it freely, subject to the following restrictions:
//
//   1. The origin of this software must not be misrepresented; you must
//      not claim that you wrote the original software. If you use this
//      software in a product, an acknowledgment in the product
//      documentation would be appreciated but is not required.
//
//   2. Altered source versions must be plainly marked as such, and must
//      not be misrepresented as being the original software.
//
//   3. This notice may not be removed or altered from any source
//      distribution.
//
// -------------------------- END HEADER -------------------------------------

#ifndef WINHACKS_H
#define WINHACKS_H
#ifdef WIN32

// Windows-specific hacks and stupid crap.

// Winelib-only testing stuff.
// (Probably don't need this anymore.)
#ifdef WINELIB
#	include <wine/windows/windows.h>
#endif

// Needs to be before any OpenGL headers.
#include <windows.h>

#define strcasecmp _stricmp

// FIXME: Precision loss. Come back to this later.
#define usleep(x) Sleep((x) / 1000)

#endif
#endif
