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
// $hash=4700b3b409abf624334f9f6ecf9c1c20131e4849$
//

#ifndef CEF_LIBCEF_DLL_CTOCPP_BROWSER_HOST_CTOCPP_H_
#define CEF_LIBCEF_DLL_CTOCPP_BROWSER_HOST_CTOCPP_H_
#pragma once

#if !defined(WRAPPING_CEF_SHARED)
#error This file can be included wrapper-side only
#endif

#include <vector>
#include "include/capi/cef_browser_capi.h"
#include "include/capi/cef_client_capi.h"
#include "include/cef_browser.h"
#include "include/cef_client.h"
#include "libcef_dll/ctocpp/ctocpp_ref_counted.h"

// Wrap a C structure with a C++ class.
// This class may be instantiated and accessed wrapper-side only.
class CefBrowserHostCToCpp : public CefCToCppRefCounted<CefBrowserHostCToCpp,
                                                        CefBrowserHost,
                                                        cef_browser_host_t> {
 public:
  CefBrowserHostCToCpp();
  virtual ~CefBrowserHostCToCpp();

  // CefBrowserHost methods.
  CefRefPtr<CefBrowser> GetBrowser() override;
  void CloseBrowser(bool force_close) override;
  bool TryCloseBrowser() override;
  void SetFocus(bool focus) override;
  CefWindowHandle GetWindowHandle() override;
  CefWindowHandle GetOpenerWindowHandle() override;
  bool HasView() override;
  CefRefPtr<CefClient> GetClient() override;
  CefRefPtr<CefRequestContext> GetRequestContext() override;
  double GetZoomLevel() override;
  void SetZoomLevel(double zoomLevel) override;
  void RunFileDialog(FileDialogMode mode,
                     const CefString& title,
                     const CefString& default_file_path,
                     const std::vector<CefString>& accept_filters,
                     CefRefPtr<CefRunFileDialogCallback> callback) override;
  void StartDownload(const CefString& url) override;
  void DownloadImage(const CefString& image_url,
                     bool is_favicon,
                     uint32_t max_image_size,
                     bool bypass_cache,
                     CefRefPtr<CefDownloadImageCallback> callback) override;
  void Print() override;
  void PrintToPDF(const CefString& path,
                  const CefPdfPrintSettings& settings,
                  CefRefPtr<CefPdfPrintCallback> callback) override;
  void Find(const CefString& searchText,
            bool forward,
            bool matchCase,
            bool findNext) override;
  void StopFinding(bool clearSelection) override;
  void ShowDevTools(const CefWindowInfo& windowInfo,
                    CefRefPtr<CefClient> client,
                    const CefBrowserSettings& settings,
                    const CefPoint& inspect_element_at) override;
  void CloseDevTools() override;
  bool HasDevTools() override;
  bool SendDevToolsMessage(const void* message, size_t message_size) override;
  int ExecuteDevToolsMethod(int message_id,
                            const CefString& method,
                            CefRefPtr<CefDictionaryValue> params) override;
  CefRefPtr<CefRegistration> AddDevToolsMessageObserver(
      CefRefPtr<CefDevToolsMessageObserver> observer) override;
  void GetNavigationEntries(CefRefPtr<CefNavigationEntryVisitor> visitor,
                            bool current_only) override;
  void ReplaceMisspelling(const CefString& word) override;
  void AddWordToDictionary(const CefString& word) override;
  bool IsWindowRenderingDisabled() override;
  void WasResized() override;
  void WasHidden(bool hidden) override;
  void NotifyScreenInfoChanged() override;
  void Invalidate(PaintElementType type) override;
  void SendExternalBeginFrame() override;
  void SendKeyEvent(const CefKeyEvent& event) override;
  void SendMouseClickEvent(const CefMouseEvent& event,
                           MouseButtonType type,
                           bool mouseUp,
                           int clickCount) override;
  void SendMouseMoveEvent(const CefMouseEvent& event, bool mouseLeave) override;
  void SendMouseWheelEvent(const CefMouseEvent& event,
                           int deltaX,
                           int deltaY) override;
  void SendTouchEvent(const CefTouchEvent& event) override;
  void SendCaptureLostEvent() override;
  void NotifyMoveOrResizeStarted() override;
  int GetWindowlessFrameRate() override;
  void SetWindowlessFrameRate(int frame_rate) override;
  void ImeSetComposition(const CefString& text,
                         const std::vector<CefCompositionUnderline>& underlines,
                         const CefRange& replacement_range,
                         const CefRange& selection_range) override;
  void ImeCommitText(const CefString& text,
                     const CefRange& replacement_range,
                     int relative_cursor_pos) override;
  void ImeFinishComposingText(bool keep_selection) override;
  void ImeCancelComposition() override;
  void DragTargetDragEnter(CefRefPtr<CefDragData> drag_data,
                           const CefMouseEvent& event,
                           DragOperationsMask allowed_ops) override;
  void DragTargetDragOver(const CefMouseEvent& event,
                          DragOperationsMask allowed_ops) override;
  void DragTargetDragLeave() override;
  void DragTargetDrop(const CefMouseEvent& event) override;
  void DragSourceEndedAt(int x, int y, DragOperationsMask op) override;
  void DragSourceSystemDragEnded() override;
  CefRefPtr<CefNavigationEntry> GetVisibleNavigationEntry() override;
  void SetAccessibilityState(cef_state_t accessibility_state) override;
  void SetAutoResizeEnabled(bool enabled,
                            const CefSize& min_size,
                            const CefSize& max_size) override;
  CefRefPtr<CefExtension> GetExtension() override;
  bool IsBackgroundHost() override;
  void SetAudioMuted(bool mute) override;
  bool IsAudioMuted() override;
};

#endif  // CEF_LIBCEF_DLL_CTOCPP_BROWSER_HOST_CTOCPP_H_
