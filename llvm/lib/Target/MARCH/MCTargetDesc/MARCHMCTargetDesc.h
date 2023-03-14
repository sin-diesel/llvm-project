//===-- MARCHMCTargetDesc.h - MARCH Target Descriptions -----------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// This file provides MARCH specific target descriptions.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_MARCH_MCTARGETDESC_MARCHMCTARGETDESC_H
#define LLVM_LIB_TARGET_MARCH_MCTARGETDESC_MARCHMCTARGETDESC_H

#include "llvm/Support/DataTypes.h"

#include <memory>

namespace llvm {
class Target;
class Triple;

extern Target TheMARCHTarget;

} // End llvm namespace

// Defines symbolic names for MARCH registers.  This defines a mapping from
// register name to register number.
#define GET_REGINFO_ENUM
#include "MARCHGenRegisterInfo.inc"

// Defines symbolic names for the MARCH instructions.
#define GET_INSTRINFO_ENUM
#include "MARCHGenInstrInfo.inc"

#endif
