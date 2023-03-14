//===-- MARCHTargetMachine.cpp - Define TargetMachine for MARCH -------------===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//
//
// Implements the info about MARCH target spec.
//
//===----------------------------------------------------------------------===//

#include "MARCH.h"

#include "llvm/IR/Attributes.h"
#include "llvm/IR/Function.h"
#include "llvm/Support/CodeGen.h"
#include "llvm/CodeGen/Passes.h"
#include "llvm/CodeGen/TargetPassConfig.h"
#include "llvm/Target/TargetOptions.h"
#include "llvm/MC/TargetRegistry.h"

using namespace llvm;

#define DEBUG_TYPE "MARCH"

extern "C" void LLVMInitializeMARCHTarget() {
}
