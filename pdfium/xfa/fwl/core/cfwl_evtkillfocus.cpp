// Copyright 2016 PDFium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Original code copyright 2014 Foxit Software Inc. http://www.foxitsoftware.com

#include "xfa/fwl/core/cfwl_evtkillfocus.h"

CFWL_EvtKillFocus::CFWL_EvtKillFocus() {}

CFWL_EvtKillFocus::~CFWL_EvtKillFocus() {}

CFWL_EventType CFWL_EvtKillFocus::GetClassID() const {
  return CFWL_EventType::KillFocus;
}
