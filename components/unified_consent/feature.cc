// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "components/unified_consent/feature.h"

namespace unified_consent {

// base::Feature definition.
const base::Feature kUnifiedConsent{"UnifiedConsent",
                                    base::FEATURE_DISABLED_BY_DEFAULT};

bool IsUnifiedConsentFeatureEnabled() {
  return base::FeatureList::IsEnabled(kUnifiedConsent);
}

}  // namespace unified_consent
