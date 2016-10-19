// Filename: qtessGlobals.h
// Created by:  drose (13Oct03)
//
////////////////////////////////////////////////////////////////////
//
// PANDA 3D SOFTWARE
// Copyright (c) Carnegie Mellon University.  All rights reserved.
//
// All use of this software is subject to the terms of the revised BSD
// license.  You should have received a copy of this license along
// with this source code in a file named "LICENSE."
//
////////////////////////////////////////////////////////////////////

#ifndef QTESS_GLOBALS_H
#define QTESS_GLOBALS_H

#include "pandatoolbase.h"

////////////////////////////////////////////////////////////////////
//       Class : QtessGlobals
// Description : Simply used as a namespace to scope some global
//               variables for this program, set from the command
//               line.
////////////////////////////////////////////////////////////////////
class QtessGlobals {
public:
  static bool _auto_place;
  static bool _auto_distribute;
  static double _curvature_ratio;
  static bool _respect_egg;
};

#endif

