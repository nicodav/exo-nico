/*  =========================================================================
    exo_nico_classes - private header file

    Copyright (C) 2014 - 2017 Eaton                                        
                                                                           
    This program is free software; you can redistribute it and/or modify   
    it under the terms of the GNU General Public License as published by   
    the Free Software Foundation; either version 2 of the License, or      
    (at your option) any later version.                                    
                                                                           
    This program is distributed in the hope that it will be useful,        
    but WITHOUT ANY WARRANTY; without even the implied warranty of         
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          
    GNU General Public License for more details.                           
                                                                           
    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.            
################################################################################
#  THIS FILE IS 100% GENERATED BY ZPROJECT; DO NOT EDIT EXCEPT EXPERIMENTALLY  #
#  Read the zproject/README.md for information about making permanent changes. #
################################################################################
    =========================================================================
*/

#ifndef EXO_NICO_CLASSES_H_INCLUDED
#define EXO_NICO_CLASSES_H_INCLUDED

//  Platform definitions, must come first
#include "platform.h"

//  External API
#include "../include/exo_nico.h"

//  Extra headers

//  Opaque class structures to allow forward references


//  Internal API
#define EXO_NICO_STREAM   "NICO-STREAM"
#define EXO_NICO_STREAM_RETURN   "NICO-RETURN"
//  *** To avoid double-definitions, only define if building without draft ***
#ifndef EXO_NICO_BUILD_DRAFT_API

//  Self test for private classes
EXO_NICO_PRIVATE void
    exo_nico_private_selftest (bool verbose);

#endif // EXO_NICO_BUILD_DRAFT_API

#endif