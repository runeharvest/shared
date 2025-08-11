// NeL - MMORPG Framework <http://dev.ryzom.com/projects/nel/>
// Copyright (C) 2010  Winch Gate Property Limited
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU Affero General Public License as
// published by the Free Software Foundation, either version 3 of the
// License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Affero General Public License for more details.
//
// You should have received a copy of the GNU Affero General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

#ifndef STDDIRECT3D_H
#define STDDIRECT3D_H

#if defined(_MSC_VER) && defined(_DEBUG)
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <stdlib.h>
#define DEBUG_NEW new (_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

// System includes
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <exception>
#include <limits>
#include <list>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>

// Default NeL includes
#include "nel/misc/types_nl.h"

#ifdef NL_DEBUG
// add Direct3D debug infos
#define D3D_DEBUG_INFO
#endif

// NeL includes
#include "nel/misc/command.h"
#include "nel/misc/common.h"
#include "nel/misc/debug.h"
#include "nel/misc/mem_stream.h"
#include "nel/misc/stream.h"
#include "nel/misc/time_nl.h"

#ifdef NL_OS_WINDOWS
#define WIN32_LEAN_AND_MEAN
#ifndef NL_COMP_MINGW
#define NOMINMAX
#endif
#include <windows.h>
#endif

// Directx includes
#include <d3d9.h>
#include <d3dx9math.h>

#endif
