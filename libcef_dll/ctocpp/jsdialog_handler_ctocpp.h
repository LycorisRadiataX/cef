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
// $hash=55b3bcb925cfaf44f79c0e03fc55878d748f55ce$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_JSDIALOG_HANDLER_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_JSDIALOG_HANDLER_CTOCPP_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_jsdialog_handler_capi.h"
#include "include/cef_jsdialog_handler.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed DLL-side only.
class CefJSDialogHandlerCToCpp
    : public CefCToCppRefCounted<CefJSDialogHandlerCToCpp,
                                 CefJSDialogHandler,
                                 cef_jsdialog_handler_t> {
 public:
  CefJSDialogHandlerCToCpp();
  virtual ~CefJSDialogHandlerCToCpp();

  // CefJSDialogHandler methods.
  bool OnJSDialog(CefRefPtr<CefBrowser> browser,
                  const CefString& origin_url,
                  JSDialogType dialog_type,
                  const CefString& message_text,
                  const CefString& default_prompt_text,
                  CefRefPtr<CefJSDialogCallback> callback,
                  bool& suppress_message) override;
  bool OnBeforeUnloadDialog(CefRefPtr<CefBrowser> browser,
                            const CefString& message_text,
                            bool is_reload,
                            CefRefPtr<CefJSDialogCallback> callback) override;
  void OnResetDialogState(CefRefPtr<CefBrowser> browser) override;
  void OnDialogClosed(CefRefPtr<CefBrowser> browser) override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_JSDIALOG_HANDLER_CTOCPP_H_
