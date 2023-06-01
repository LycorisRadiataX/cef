// Copyright (c) 2023 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=dd6210f86f9b0a4cc2a6b735fcf3b98a5e541789$
//

#include "libcef_dll/cpptoc/media_access_callback_cpptoc.h"
#include "libcef_dll/shutdown_checker.h"

namespace {

// MEMBER FUNCTIONS - Body may be edited by hand.

void CEF_CALLBACK
media_access_callback_cont(struct _cef_media_access_callback_t* self,
                           uint32_t allowed_permissions) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefMediaAccessCallbackCppToC::Get(self)->Continue(allowed_permissions);
}

void CEF_CALLBACK
media_access_callback_cancel(struct _cef_media_access_callback_t* self) {
  shutdown_checker::AssertNotShutdown();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  DCHECK(self);
  if (!self) {
    return;
  }

  // Execute
  CefMediaAccessCallbackCppToC::Get(self)->Cancel();
}

}  // namespace

// CONSTRUCTOR - Do not edit by hand.

CefMediaAccessCallbackCppToC::CefMediaAccessCallbackCppToC() {
  GetStruct()->cont = media_access_callback_cont;
  GetStruct()->cancel = media_access_callback_cancel;
}

// DESTRUCTOR - Do not edit by hand.

CefMediaAccessCallbackCppToC::~CefMediaAccessCallbackCppToC() {
  shutdown_checker::AssertNotShutdown();
}

template <>
CefRefPtr<CefMediaAccessCallback> CefCppToCRefCounted<
    CefMediaAccessCallbackCppToC,
    CefMediaAccessCallback,
    cef_media_access_callback_t>::UnwrapDerived(CefWrapperType type,
                                                cef_media_access_callback_t*
                                                    s) {
  DCHECK(false) << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCppToCRefCounted<CefMediaAccessCallbackCppToC,
                                   CefMediaAccessCallback,
                                   cef_media_access_callback_t>::kWrapperType =
    WT_MEDIA_ACCESS_CALLBACK;
