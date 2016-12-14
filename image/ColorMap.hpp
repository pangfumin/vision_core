/**
 * ****************************************************************************
 * Copyright (c) 2016, Robert Lukierski.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 * 
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 * 
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 * 
 * Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 * 
 * ****************************************************************************
 * Color Maps.
 * ****************************************************************************
 */

#ifndef CORE_IMAGE_COLORMAP_HPP
#define CORE_IMAGE_COLORMAP_HPP

#include <Platform.hpp>

#include <buffers/Buffer1D.hpp>
#include <buffers/Buffer2D.hpp>

namespace core
{
    
namespace image
{
    
enum class ColorMap
{
    AUTUMN = 0,
    BONE,
    COOL,
    HOT,
    HSV,
    JET,
    OCEAN,
    PARULA,
    PINK,
    RAINBOW,
    SPRING,
    SUMMER,
    WINTER
};

template<typename T, typename TOUT, typename Target>
void createColorMap(ColorMap cm, const core::Buffer1DView<T,Target>& img_in, const T& vmin, const T& vmax, core::Buffer1DView<TOUT,Target>& img_out);
    
template<typename T, typename TOUT, typename Target>
void createColorMap(ColorMap cm, const core::Buffer2DView<T,Target>& img_in, const T& vmin, const T& vmax, core::Buffer2DView<TOUT,Target>& img_out);

template<typename T>
float3 getColorMapValue(ColorMap cm, const T& vmin, const T& vmax, const T& val);
    
}

}

#endif // CORE_IMAGE_COLORMAP_HPP