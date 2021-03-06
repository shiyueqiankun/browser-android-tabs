// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_MOCK_CLIENT_MEMORY_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_MOCK_CLIENT_MEMORY_H_

#include "components/autofill_assistant/browser/client_memory.h"
#include "testing/gmock/include/gmock/gmock.h"

namespace autofill_assistant {

class MockClientMemory : public ClientMemory {
 public:
  MockClientMemory();
  ~MockClientMemory();

  MOCK_METHOD0(selected_card, const autofill::CreditCard*());
  MOCK_METHOD0(has_selected_card, bool());
  MOCK_METHOD1(selected_address,
               const autofill::AutofillProfile*(const std::string& name));
  MOCK_METHOD1(has_selected_address, bool(const std::string& name));
  MOCK_METHOD1(set_selected_card,
               void(std::unique_ptr<autofill::CreditCard> card));
  MOCK_METHOD2(set_selected_address,
               void(const std::string& name,
                    std::unique_ptr<autofill::AutofillProfile> address));
};

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_MOCK_CLIENT_MEMORY_H_
