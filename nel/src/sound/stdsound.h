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

#ifndef SOUND_STDPCH_H
#define SOUND_STDPCH_H

#if defined(_MSC_VER) && defined(_DEBUG)
#define _CRTDBG_MAP_ALLOC
#include <crtdbg.h>
#include <stdlib.h>
#define DEBUG_NEW new (_NORMAL_BLOCK, __FILE__, __LINE__)
#endif

#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <ctime>

#include <algorithm>
#include <list>
#include <map>
#include <set>
#include <string>
#include <vector>
// #include <sstream>
#include <deque>
#include <exception>
#include <iomanip>
#include <iterator>
#include <limits>
#include <numeric>
#include <utility>

#include <libxml/parser.h>

#include "nel/misc/common.h"
#include "nel/misc/debug.h"
#include "nel/misc/file.h"
#include "nel/misc/path.h"
#include "nel/misc/types_nl.h"
#include "nel/misc/vector.h"

#endif
