/* Copyright (C) 2020 Marian Cichy <M.Cichy@gmail.com>
 *
 * SPDX-License-Identifier: GPL-2.0-only
 */

#pragma once

#include "event.h"

namespace mrn {

enum class MouseButton
{
   LEFT,
   MIDDLE,
   RIGHT,
   THUMB_LOWER,
   THUMB_UPPER,
};

class MouseEvent : public Event
{
 protected:
   MouseButton button;
   MouseEvent () = default;
};

class MouseEventPressed : public MouseEvent
{
   EVENT_TYPE (MouseButtonPressed);

   public:
   MouseEventPressed (MouseButton button) {
      this->button = button;
   }


};

} // namespace mrn
