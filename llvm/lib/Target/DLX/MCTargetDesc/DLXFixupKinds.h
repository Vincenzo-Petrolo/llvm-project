//===-- DLXFixupKinds.h - DLX Specific Fixup Entries ----------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef LLVM_LIB_TARGET_CPU0_MCTARGETDESC_CPU0FIXUPKINDS_H
#define LLVM_LIB_TARGET_CPU0_MCTARGETDESC_CPU0FIXUPKINDS_H

#include "llvm/MC/MCFixup.h"

namespace llvm {
namespace DLX {
  // Although most of the current fixup types reflect a unique relocation
  // one can have multiple fixup types for a given relocation and thus need
  // to be uniquely named.
  //
  // This table *must* be in the save order of
  // MCFixupKindInfo Infos[DLX::NumTargetFixupKinds]
  // in DLXAsmBackend.cpp.
  //@Fixups {
  enum Fixups {
    //@ Pure upper 32 bit fixup resulting in - R_CPU0_32.
    fixup_DLX_32 = FirstTargetFixupKind,

    // Pure upper 26 bits for Jumps
    fixup_DLX_HI26,

    // Pure upper 16 bit fixup resulting in - R_CPU0_HI16.
    fixup_DLX_HI16,

    // Pure lower 16 bit fixup resulting in - R_CPU0_LO16.
    fixup_DLX_LO16,

    // 16 bit fixup for GP offest resulting in - R_CPU0_GPREL16.
    fixup_DLX_GPREL16,

    // GOT (Global Offset Table)
    // Symbol fixup resulting in - R_CPU0_GOT16.
    fixup_DLX_GOT,

    

    // resulting in - R_CPU0_GOT_HI16
    fixup_DLX_GOT_HI16,

    // resulting in - R_CPU0_GOT_LO16
    fixup_DLX_GOT_LO16,

    // Marker
    LastTargetFixupKind,
    NumTargetFixupKinds = LastTargetFixupKind - FirstTargetFixupKind
  };
  //@Fixups }
} // namespace DLX
} // namespace llvm

#endif // LLVM_CPU0_CPU0FIXUPKINDS_H