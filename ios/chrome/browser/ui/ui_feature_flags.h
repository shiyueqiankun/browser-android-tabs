// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IOS_CHROME_BROWSER_UI_UI_FEATURE_FLAGS_H_
#define IOS_CHROME_BROWSER_UI_UI_FEATURE_FLAGS_H_

#include "base/feature_list.h"

// Feature to automatically switch to the regular tabs panel in tab grid after
// closing the last incognito tab.
extern const base::Feature kClosingLastIncognitoTab;

// Feature to contain the NTP directly from browser container.
extern const base::Feature kBrowserContainerContainsNTP;

// Feature to retain the contentView in the browser container.
extern const base::Feature kBrowserContainerKeepsContentView;

// Feature to show most visited sites and collection shortcuts in the omnibox
// popup instead of ZeroSuggest.
extern const base::Feature kOmniboxPopupShortcutIconsInZeroState;

// Feature to take snapshots using |-drawViewHierarchy:|.
extern const base::Feature kSnapshotDrawView;

// Feature to rework handling of copied content (url/string/image) in the ui.
extern const base::Feature kCopiedContentBehavior;

// Feature to apply UI Refresh theme to the settings.
extern const base::Feature kSettingsRefresh;

#endif  // IOS_CHROME_BROWSER_UI_UI_FEATURE_FLAGS_H_
