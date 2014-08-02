/*
**  ClanLib SDK
**  Copyright (c) 1997-2013 The ClanLib Team
**
**  This software is provided 'as-is', without any express or implied
**  warranty.  In no event will the authors be held liable for any damages
**  arising from the use of this software.
**
**  Permission is granted to anyone to use this software for any purpose,
**  including commercial applications, and to alter it and redistribute it
**  freely, subject to the following restrictions:
**
**  1. The origin of this software must not be misrepresented; you must not
**     claim that you wrote the original software. If you use this software
**     in a product, an acknowledgment in the product documentation would be
**     appreciated but is not required.
**  2. Altered source versions must be plainly marked as such, and must not be
**     misrepresented as being the original software.
**  3. This notice may not be removed or altered from any source distribution.
**
**  Note: Some of the libraries ClanLib may link to may have additional
**  requirements or restrictions.
**
**  File Author(s):
**
**    Magnus Norddahl
*/

#pragma once

#include "../PropertyValues/css_value_border_color.h"
#include "../PropertyValues/css_value_border_style.h"
#include "../PropertyValues/css_value_border_width.h"
#include "../PropertyValues/css_value_border_radius.h"
#include "../PropertyValues/css_value_border_image_source.h"
#include "../PropertyValues/css_value_border_image_slice.h"
#include "../PropertyValues/css_value_border_image_width.h"
#include "../PropertyValues/css_value_border_image_outset.h"
#include "../PropertyValues/css_value_border_image_repeat.h"

namespace clan
{
/// \addtogroup clanCSSLayout_ComputedValues clanCSSLayout Computed Values
/// \{

class CSSComputedValues;

class CSSComputedBorder
{
public:
	CSSValueBorderColor border_color_left;
	CSSValueBorderColor border_color_top;
	CSSValueBorderColor border_color_right;
	CSSValueBorderColor border_color_bottom;

	CSSValueBorderStyle border_style_left;
	CSSValueBorderStyle border_style_top;
	CSSValueBorderStyle border_style_right;
	CSSValueBorderStyle border_style_bottom;

	CSSValueBorderWidth border_width_left;
	CSSValueBorderWidth border_width_top;
	CSSValueBorderWidth border_width_right;
	CSSValueBorderWidth border_width_bottom;

	CSSValueBorderRadius border_radius_top_right;
	CSSValueBorderRadius border_radius_bottom_right;
	CSSValueBorderRadius border_radius_bottom_left;
	CSSValueBorderRadius border_radius_top_left;

	CSSValueBorderImageSource border_image_source;
	CSSValueBorderImageSlice border_image_slice;
	CSSValueBorderImageWidth border_image_width;
	CSSValueBorderImageOutset border_image_outset;
	CSSValueBorderImageRepeat border_image_repeat;

	void compute(const CSSComputedValues &parent, CSSResourceCache *layout, float em_size, float ex_size, const Colorf &computed_color);
};

/// \}
}
