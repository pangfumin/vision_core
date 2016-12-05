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

#include <array>
#include <image/ColorMap.hpp>

static constexpr std::array<float3, 64> ColorMap_Autumn = {{ { 1 , 0 , 0 }, { 1 , 0.015873 , 0 }, { 1 , 0.031746 , 0 }, { 1 , 0.047619 , 0 }, { 1 , 0.0634921 , 0 }, { 1 , 0.0793651 , 0 }, { 1 , 0.0952381 , 0 }, { 1 , 0.111111 , 0 }, { 1 , 0.126984 , 0 }, { 1 , 0.142857 , 0 }, { 1 , 0.15873 , 0 }, { 1 , 0.174603 , 0 }, { 1 , 0.190476 , 0 }, { 1 , 0.206349 , 0 }, { 1 , 0.222222 , 0 }, { 1 , 0.238095 , 0 }, { 1 , 0.253968 , 0 }, { 1 , 0.269841 , 0 }, { 1 , 0.285714 , 0 }, { 1 , 0.301587 , 0 }, { 1 , 0.31746 , 0 }, { 1 , 0.333333 , 0 }, { 1 , 0.349206 , 0 }, { 1 , 0.365079 , 0 }, { 1 , 0.380952 , 0 }, { 1 , 0.396825 , 0 }, { 1 , 0.412698 , 0 }, { 1 , 0.428571 , 0 }, { 1 , 0.444444 , 0 }, { 1 , 0.460317 , 0 }, { 1 , 0.47619 , 0 }, { 1 , 0.492063 , 0 }, { 1 , 0.507937 , 0 }, { 1 , 0.52381 , 0 }, { 1 , 0.539683 , 0 }, { 1 , 0.555556 , 0 }, { 1 , 0.571429 , 0 }, { 1 , 0.587302 , 0 }, { 1 , 0.603175 , 0 }, { 1 , 0.619048 , 0 }, { 1 , 0.634921 , 0 }, { 1 , 0.650794 , 0 }, { 1 , 0.666667 , 0 }, { 1 , 0.68254 , 0 }, { 1 , 0.698413 , 0 }, { 1 , 0.714286 , 0 }, { 1 , 0.730159 , 0 }, { 1 , 0.746032 , 0 }, { 1 , 0.761905 , 0 }, { 1 , 0.777778 , 0 }, { 1 , 0.793651 , 0 }, { 1 , 0.809524 , 0 }, { 1 , 0.825397 , 0 }, { 1 , 0.84127 , 0 }, { 1 , 0.857143 , 0 }, { 1 , 0.873016 , 0 }, { 1 , 0.888889 , 0 }, { 1 , 0.904762 , 0 }, { 1 , 0.920635 , 0 }, { 1 , 0.936508 , 0 }, { 1 , 0.952381 , 0 }, { 1 , 0.968254 , 0 }, { 1 , 0.984127 , 0 }, { 1 , 1 , 0 } }};

static constexpr std::array<float3, 64> ColorMap_Bone = {{ { 0 , 0 , 0 }, { 0.0138889 , 0.0138889 , 0.0191799 }, { 0.0277778 , 0.0277778 , 0.0383598 }, { 0.0416667 , 0.0416667 , 0.0575397 }, { 0.0555556 , 0.0555556 , 0.0767196 }, { 0.0694444 , 0.0694444 , 0.0958995 }, { 0.0833333 , 0.0833333 , 0.115079 }, { 0.0972222 , 0.0972222 , 0.134259 }, { 0.111111 , 0.111111 , 0.153439 }, { 0.125 , 0.125 , 0.172619 }, { 0.138889 , 0.138889 , 0.191799 }, { 0.152778 , 0.152778 , 0.210979 }, { 0.166667 , 0.166667 , 0.230159 }, { 0.180556 , 0.180556 , 0.249339 }, { 0.194444 , 0.194444 , 0.268519 }, { 0.208333 , 0.208333 , 0.287698 }, { 0.222222 , 0.222222 , 0.306878 }, { 0.236111 , 0.236111 , 0.326058 }, { 0.25 , 0.25 , 0.345238 }, { 0.263889 , 0.263889 , 0.364418 }, { 0.277778 , 0.277778 , 0.383598 }, { 0.291667 , 0.291667 , 0.402778 }, { 0.305556 , 0.305556 , 0.421958 }, { 0.319444 , 0.319444 , 0.441138 }, { 0.333333 , 0.335317 , 0.458333 }, { 0.347222 , 0.354497 , 0.472222 }, { 0.361111 , 0.373677 , 0.486111 }, { 0.375 , 0.392857 , 0.5 }, { 0.388889 , 0.412037 , 0.513889 }, { 0.402778 , 0.431217 , 0.527778 }, { 0.416667 , 0.450397 , 0.541667 }, { 0.430556 , 0.469577 , 0.555556 }, { 0.444444 , 0.488757 , 0.569444 }, { 0.458333 , 0.507937 , 0.583333 }, { 0.472222 , 0.527116 , 0.597222 }, { 0.486111 , 0.546296 , 0.611111 }, { 0.5 , 0.565476 , 0.625 }, { 0.513889 , 0.584656 , 0.638889 }, { 0.527778 , 0.603836 , 0.652778 }, { 0.541667 , 0.623016 , 0.666667 }, { 0.555556 , 0.642196 , 0.680556 }, { 0.569444 , 0.661376 , 0.694444 }, { 0.583333 , 0.680556 , 0.708333 }, { 0.597222 , 0.699735 , 0.722222 }, { 0.611111 , 0.718915 , 0.736111 }, { 0.625 , 0.738095 , 0.75 }, { 0.638889 , 0.757275 , 0.763889 }, { 0.652778 , 0.776455 , 0.777778 }, { 0.672619 , 0.791667 , 0.791667 }, { 0.694444 , 0.805556 , 0.805556 }, { 0.71627 , 0.819444 , 0.819444 }, { 0.738095 , 0.833333 , 0.833333 }, { 0.759921 , 0.847222 , 0.847222 }, { 0.781746 , 0.861111 , 0.861111 }, { 0.803571 , 0.875 , 0.875 }, { 0.825397 , 0.888889 , 0.888889 }, { 0.847222 , 0.902778 , 0.902778 }, { 0.869048 , 0.916667 , 0.916667 }, { 0.890873 , 0.930556 , 0.930556 }, { 0.912698 , 0.944444 , 0.944444 }, { 0.934524 , 0.958333 , 0.958333 }, { 0.956349 , 0.972222 , 0.972222 }, { 0.978175 , 0.986111 , 0.986111 }, { 1 , 1 , 1 } }};

static constexpr std::array<float3, 256> ColorMap_Jet = {{ { 0 , 0 , 0.5 }, { 0 , 0 , 0.515686 }, { 0 , 0 , 0.531373 }, { 0 , 0 , 0.547059 }, { 0 , 0 , 0.562745 }, { 0 , 0 , 0.578431 }, { 0 , 0 , 0.594118 }, { 0 , 0 , 0.609804 }, { 0 , 0 , 0.62549 }, { 0 , 0 , 0.641176 }, { 0 , 0 , 0.656863 }, { 0 , 0 , 0.672549 }, { 0 , 0 , 0.688235 }, { 0 , 0 , 0.703922 }, { 0 , 0 , 0.719608 }, { 0 , 0 , 0.735294 }, { 0 , 0 , 0.75098 }, { 0 , 0 , 0.766667 }, { 0 , 0 , 0.782353 }, { 0 , 0 , 0.798039 }, { 0 , 0 , 0.813725 }, { 0 , 0 , 0.829412 }, { 0 , 0 , 0.845098 }, { 0 , 0 , 0.860784 }, { 0 , 0 , 0.876471 }, { 0 , 0 , 0.892157 }, { 0 , 0 , 0.907843 }, { 0 , 0 , 0.923529 }, { 0 , 0 , 0.939216 }, { 0 , 0 , 0.954902 }, { 0 , 0 , 0.970588 }, { 0 , 0 , 0.986274 }, { 0 , 0.00196078 , 1 }, { 0 , 0.0176471 , 1 }, { 0 , 0.0333333 , 1 }, { 0 , 0.0490196 , 1 }, { 0 , 0.0647059 , 1 }, { 0 , 0.0803922 , 1 }, { 0 , 0.0960784 , 1 }, { 0 , 0.111765 , 1 }, { 0 , 0.127451 , 1 }, { 0 , 0.143137 , 1 }, { 0 , 0.158824 , 1 }, { 0 , 0.17451 , 1 }, { 0 , 0.190196 , 1 }, { 0 , 0.205882 , 1 }, { 0 , 0.221569 , 1 }, { 0 , 0.237255 , 1 }, { 0 , 0.252941 , 1 }, { 0 , 0.268627 , 1 }, { 0 , 0.284314 , 1 }, { 0 , 0.3 , 1 }, { 0 , 0.315686 , 1 }, { 0 , 0.331373 , 1 }, { 0 , 0.347059 , 1 }, { 0 , 0.362745 , 1 }, { 0 , 0.378431 , 1 }, { 0 , 0.394118 , 1 }, { 0 , 0.409804 , 1 }, { 0 , 0.42549 , 1 }, { 0 , 0.441176 , 1 }, { 0 , 0.456863 , 1 }, { 0 , 0.472549 , 1 }, { 0 , 0.488235 , 1 }, { 0 , 0.503922 , 1 }, { 0 , 0.519608 , 1 }, { 0 , 0.535294 , 1 }, { 0 , 0.55098 , 1 }, { 0 , 0.566667 , 1 }, { 0 , 0.582353 , 1 }, { 0 , 0.598039 , 1 }, { 0 , 0.613725 , 1 }, { 0 , 0.629412 , 1 }, { 0 , 0.645098 , 1 }, { 0 , 0.660784 , 1 }, { 0 , 0.676471 , 1 }, { 0 , 0.692157 , 1 }, { 0 , 0.707843 , 1 }, { 0 , 0.723529 , 1 }, { 0 , 0.739216 , 1 }, { 0 , 0.754902 , 1 }, { 0 , 0.770588 , 1 }, { 0 , 0.786274 , 1 }, { 0 , 0.801961 , 1 }, { 0 , 0.817647 , 1 }, { 0 , 0.833333 , 1 }, { 0 , 0.84902 , 1 }, { 0 , 0.864706 , 1 }, { 0 , 0.880392 , 1 }, { 0 , 0.896078 , 1 }, { 0 , 0.911765 , 1 }, { 0 , 0.927451 , 1 }, { 0 , 0.943137 , 1 }, { 0 , 0.958824 , 1 }, { 0 , 0.97451 , 1 }, { 0 , 0.990196 , 1 }, { 0.00588235 , 1 , 0.994118 }, { 0.0215686 , 1 , 0.978431 }, { 0.0372549 , 1 , 0.962745 }, { 0.0529412 , 1 , 0.947059 }, { 0.0686275 , 1 , 0.931373 }, { 0.0843137 , 1 , 0.915686 }, { 0.1 , 1 , 0.9 }, { 0.115686 , 1 , 0.884314 }, { 0.131373 , 1 , 0.868627 }, { 0.147059 , 1 , 0.852941 }, { 0.162745 , 1 , 0.837255 }, { 0.178431 , 1 , 0.821569 }, { 0.194118 , 1 , 0.805882 }, { 0.209804 , 1 , 0.790196 }, { 0.22549 , 1 , 0.77451 }, { 0.241176 , 1 , 0.758824 }, { 0.256863 , 1 , 0.743137 }, { 0.272549 , 1 , 0.727451 }, { 0.288235 , 1 , 0.711765 }, { 0.303922 , 1 , 0.696078 }, { 0.319608 , 1 , 0.680392 }, { 0.335294 , 1 , 0.664706 }, { 0.35098 , 1 , 0.64902 }, { 0.366667 , 1 , 0.633333 }, { 0.382353 , 1 , 0.617647 }, { 0.398039 , 1 , 0.601961 }, { 0.413725 , 1 , 0.586275 }, { 0.429412 , 1 , 0.570588 }, { 0.445098 , 1 , 0.554902 }, { 0.460784 , 1 , 0.539216 }, { 0.476471 , 1 , 0.523529 }, { 0.492157 , 1 , 0.507843 }, { 0.507843 , 1 , 0.492157 }, { 0.523529 , 1 , 0.476471 }, { 0.539216 , 1 , 0.460784 }, { 0.554902 , 1 , 0.445098 }, { 0.570588 , 1 , 0.429412 }, { 0.586275 , 1 , 0.413725 }, { 0.601961 , 1 , 0.398039 }, { 0.617647 , 1 , 0.382353 }, { 0.633333 , 1 , 0.366667 }, { 0.64902 , 1 , 0.35098 }, { 0.664706 , 1 , 0.335294 }, { 0.680392 , 1 , 0.319608 }, { 0.696078 , 1 , 0.303922 }, { 0.711765 , 1 , 0.288235 }, { 0.727451 , 1 , 0.272549 }, { 0.743137 , 1 , 0.256863 }, { 0.758824 , 1 , 0.241176 }, { 0.77451 , 1 , 0.22549 }, { 0.790196 , 1 , 0.209804 }, { 0.805882 , 1 , 0.194118 }, { 0.821569 , 1 , 0.178431 }, { 0.837255 , 1 , 0.162745 }, { 0.852941 , 1 , 0.147059 }, { 0.868627 , 1 , 0.131373 }, { 0.884314 , 1 , 0.115686 }, { 0.9 , 1 , 0.1 }, { 0.915686 , 1 , 0.0843137 }, { 0.931373 , 1 , 0.0686275 }, { 0.947059 , 1 , 0.0529412 }, { 0.962745 , 1 , 0.0372549 }, { 0.978431 , 1 , 0.0215686 }, { 0.994118 , 1 , 0.00588235 }, { 1 , 0.990196 , 0 }, { 1 , 0.97451 , 0 }, { 1 , 0.958824 , 0 }, { 1 , 0.943137 , 0 }, { 1 , 0.927451 , 0 }, { 1 , 0.911765 , 0 }, { 1 , 0.896078 , 0 }, { 1 , 0.880392 , 0 }, { 1 , 0.864706 , 0 }, { 1 , 0.84902 , 0 }, { 1 , 0.833333 , 0 }, { 1 , 0.817647 , 0 }, { 1 , 0.801961 , 0 }, { 1 , 0.786274 , 0 }, { 1 , 0.770588 , 0 }, { 1 , 0.754902 , 0 }, { 1 , 0.739216 , 0 }, { 1 , 0.723529 , 0 }, { 1 , 0.707843 , 0 }, { 1 , 0.692157 , 0 }, { 1 , 0.676471 , 0 }, { 1 , 0.660784 , 0 }, { 1 , 0.645098 , 0 }, { 1 , 0.629412 , 0 }, { 1 , 0.613725 , 0 }, { 1 , 0.598039 , 0 }, { 1 , 0.582353 , 0 }, { 1 , 0.566667 , 0 }, { 1 , 0.55098 , 0 }, { 1 , 0.535294 , 0 }, { 1 , 0.519608 , 0 }, { 1 , 0.503922 , 0 }, { 1 , 0.488235 , 0 }, { 1 , 0.472549 , 0 }, { 1 , 0.456863 , 0 }, { 1 , 0.441176 , 0 }, { 1 , 0.42549 , 0 }, { 1 , 0.409804 , 0 }, { 1 , 0.394118 , 0 }, { 1 , 0.378431 , 0 }, { 1 , 0.362745 , 0 }, { 1 , 0.347059 , 0 }, { 1 , 0.331373 , 0 }, { 1 , 0.315686 , 0 }, { 1 , 0.3 , 0 }, { 1 , 0.284314 , 0 }, { 1 , 0.268627 , 0 }, { 1 , 0.252941 , 0 }, { 1 , 0.237255 , 0 }, { 1 , 0.221569 , 0 }, { 1 , 0.205882 , 0 }, { 1 , 0.190196 , 0 }, { 1 , 0.17451 , 0 }, { 1 , 0.158824 , 0 }, { 1 , 0.143137 , 0 }, { 1 , 0.127451 , 0 }, { 1 , 0.111765 , 0 }, { 1 , 0.0960784 , 0 }, { 1 , 0.0803922 , 0 }, { 1 , 0.0647059 , 0 }, { 1 , 0.0490196 , 0 }, { 1 , 0.0333333 , 0 }, { 1 , 0.0176471 , 0 }, { 1 , 0.00196078 , 0 }, { 0.986274 , 0 , 0 }, { 0.970588 , 0 , 0 }, { 0.954902 , 0 , 0 }, { 0.939216 , 0 , 0 }, { 0.923529 , 0 , 0 }, { 0.907843 , 0 , 0 }, { 0.892157 , 0 , 0 }, { 0.876471 , 0 , 0 }, { 0.860784 , 0 , 0 }, { 0.845098 , 0 , 0 }, { 0.829412 , 0 , 0 }, { 0.813725 , 0 , 0 }, { 0.798039 , 0 , 0 }, { 0.782353 , 0 , 0 }, { 0.766667 , 0 , 0 }, { 0.75098 , 0 , 0 }, { 0.735294 , 0 , 0 }, { 0.719608 , 0 , 0 }, { 0.703922 , 0 , 0 }, { 0.688235 , 0 , 0 }, { 0.672549 , 0 , 0 }, { 0.656863 , 0 , 0 }, { 0.641176 , 0 , 0 }, { 0.62549 , 0 , 0 }, { 0.609804 , 0 , 0 }, { 0.594118 , 0 , 0 }, { 0.578431 , 0 , 0 }, { 0.562745 , 0 , 0 }, { 0.547059 , 0 , 0 }, { 0.531373 , 0 , 0 }, { 0.515686 , 0 , 0 }, { 0.5 , 0 , 0 } }};

static constexpr std::array<float3, 11> ColorMap_Winter = {{ { 0 , 0 , 1 }, { 0 , 0.1 , 0.95 }, { 0 , 0.2 , 0.9 }, { 0 , 0.3 , 0.85 }, { 0 , 0.4 , 0.8 }, { 0 , 0.5 , 0.75 }, { 0 , 0.6 , 0.7 }, { 0 , 0.7 , 0.65 }, { 0 , 0.8 , 0.6 }, { 0 , 0.9 , 0.55 }, { 0 , 1 , 0.5 } }};

static constexpr std::array<float3, 64> ColorMap_Rainbow = {{ { 1 , 0 , 0 }, { 1 , 0.0396825 , 0 }, { 1 , 0.0793651 , 0 }, { 1 , 0.119048 , 0 }, { 1 , 0.15873 , 0 }, { 1 , 0.198413 , 0 }, { 1 , 0.238095 , 0 }, { 1 , 0.277778 , 0 }, { 1 , 0.31746 , 0 }, { 1 , 0.357143 , 0 }, { 1 , 0.396825 , 0 }, { 1 , 0.436508 , 0 }, { 1 , 0.47619 , 0 }, { 1 , 0.515873 , 0 }, { 1 , 0.555556 , 0 }, { 1 , 0.595238 , 0 }, { 1 , 0.634921 , 0 }, { 1 , 0.674603 , 0 }, { 1 , 0.714286 , 0 }, { 1 , 0.753968 , 0 }, { 1 , 0.793651 , 0 }, { 1 , 0.833333 , 0 }, { 1 , 0.873016 , 0 }, { 1 , 0.912698 , 0 }, { 1 , 0.952381 , 0 }, { 1 , 0.992063 , 0 }, { 0.936508 , 1 , 0 }, { 0.857143 , 1 , 0 }, { 0.777778 , 1 , 0 }, { 0.698413 , 1 , 0 }, { 0.619048 , 1 , 0 }, { 0.539683 , 1 , 0 }, { 0.460317 , 1 , 0 }, { 0.380952 , 1 , 0 }, { 0.301587 , 1 , 0 }, { 0.222222 , 1 , 0 }, { 0.142857 , 1 , 0 }, { 0.0634921 , 1 , 0 }, { 0 , 0.984127 , 0.015873 }, { 0 , 0.904762 , 0.0952381 }, { 0 , 0.825397 , 0.174603 }, { 0 , 0.746032 , 0.253968 }, { 0 , 0.666667 , 0.333333 }, { 0 , 0.587302 , 0.412698 }, { 0 , 0.507937 , 0.492063 }, { 0 , 0.428571 , 0.571429 }, { 0 , 0.349206 , 0.650794 }, { 0 , 0.269841 , 0.730159 }, { 0 , 0.190476 , 0.809524 }, { 0 , 0.111111 , 0.888889 }, { 0 , 0.031746 , 0.968254 }, { 0.031746 , 0 , 1 }, { 0.0846561 , 0 , 1 }, { 0.137566 , 0 , 1 }, { 0.190476 , 0 , 1 }, { 0.243386 , 0 , 1 }, { 0.296296 , 0 , 1 }, { 0.349206 , 0 , 1 }, { 0.402116 , 0 , 1 }, { 0.455026 , 0 , 1 }, { 0.507937 , 0 , 1 }, { 0.560847 , 0 , 1 }, { 0.613757 , 0 , 1 }, { 0.666667 , 0 , 1 } }};

static constexpr std::array<float3, 64> ColorMap_Ocean = {{ { 0 , 0 , 0 }, { 0 , 0 , 0.015873 }, { 0 , 0 , 0.031746 }, { 0 , 0 , 0.047619 }, { 0 , 0 , 0.0634921 }, { 0 , 0 , 0.0793651 }, { 0 , 0 , 0.0952381 }, { 0 , 0 , 0.111111 }, { 0 , 0 , 0.126984 }, { 0 , 0 , 0.142857 }, { 0 , 0 , 0.15873 }, { 0 , 0 , 0.174603 }, { 0 , 0 , 0.190476 }, { 0 , 0 , 0.206349 }, { 0 , 0 , 0.222222 }, { 0 , 0 , 0.238095 }, { 0 , 0 , 0.253968 }, { 0 , 0 , 0.269841 }, { 0 , 0 , 0.285714 }, { 0 , 0 , 0.301587 }, { 0 , 0 , 0.31746 }, { 0 , 0 , 0.333333 }, { 0 , 0.0238095 , 0.349206 }, { 0 , 0.047619 , 0.365079 }, { 0 , 0.0714286 , 0.380952 }, { 0 , 0.0952381 , 0.396825 }, { 0 , 0.119048 , 0.412698 }, { 0 , 0.142857 , 0.428571 }, { 0 , 0.166667 , 0.444444 }, { 0 , 0.190476 , 0.460317 }, { 0 , 0.214286 , 0.47619 }, { 0 , 0.238095 , 0.492063 }, { 0 , 0.261905 , 0.507937 }, { 0 , 0.285714 , 0.52381 }, { 0 , 0.309524 , 0.539683 }, { 0 , 0.333333 , 0.555556 }, { 0 , 0.357143 , 0.571429 }, { 0 , 0.380952 , 0.587302 }, { 0 , 0.404762 , 0.603175 }, { 0 , 0.428571 , 0.619048 }, { 0 , 0.452381 , 0.634921 }, { 0 , 0.47619 , 0.650794 }, { 0 , 0.5 , 0.666667 }, { 0.047619 , 0.52381 , 0.68254 }, { 0.0952381 , 0.547619 , 0.698413 }, { 0.142857 , 0.571429 , 0.714286 }, { 0.190476 , 0.595238 , 0.730159 }, { 0.238095 , 0.619048 , 0.746032 }, { 0.285714 , 0.642857 , 0.761905 }, { 0.333333 , 0.666667 , 0.777778 }, { 0.380952 , 0.690476 , 0.793651 }, { 0.428571 , 0.714286 , 0.809524 }, { 0.47619 , 0.738095 , 0.825397 }, { 0.52381 , 0.761905 , 0.84127 }, { 0.571429 , 0.785714 , 0.857143 }, { 0.619048 , 0.809524 , 0.873016 }, { 0.666667 , 0.833333 , 0.888889 }, { 0.714286 , 0.857143 , 0.904762 }, { 0.761905 , 0.880952 , 0.920635 }, { 0.809524 , 0.904762 , 0.936508 }, { 0.857143 , 0.928571 , 0.952381 }, { 0.904762 , 0.952381 , 0.968254 }, { 0.952381 , 0.97619 , 0.984127 }, { 1 , 1 , 1 } }};

static constexpr std::array<float3, 64> ColorMap_Summer = {{ { 0 , 0.5 , 0.4 }, { 0.015873 , 0.507937 , 0.4 }, { 0.031746 , 0.515873 , 0.4 }, { 0.047619 , 0.52381 , 0.4 }, { 0.0634921 , 0.531746 , 0.4 }, { 0.0793651 , 0.539683 , 0.4 }, { 0.0952381 , 0.547619 , 0.4 }, { 0.111111 , 0.555556 , 0.4 }, { 0.126984 , 0.563492 , 0.4 }, { 0.142857 , 0.571429 , 0.4 }, { 0.15873 , 0.579365 , 0.4 }, { 0.174603 , 0.587302 , 0.4 }, { 0.190476 , 0.595238 , 0.4 }, { 0.206349 , 0.603175 , 0.4 }, { 0.222222 , 0.611111 , 0.4 }, { 0.238095 , 0.619048 , 0.4 }, { 0.253968 , 0.626984 , 0.4 }, { 0.269841 , 0.634921 , 0.4 }, { 0.285714 , 0.642857 , 0.4 }, { 0.301587 , 0.650794 , 0.4 }, { 0.31746 , 0.65873 , 0.4 }, { 0.333333 , 0.666667 , 0.4 }, { 0.349206 , 0.674603 , 0.4 }, { 0.365079 , 0.68254 , 0.4 }, { 0.380952 , 0.690476 , 0.4 }, { 0.396825 , 0.698413 , 0.4 }, { 0.412698 , 0.706349 , 0.4 }, { 0.428571 , 0.714286 , 0.4 }, { 0.444444 , 0.722222 , 0.4 }, { 0.460317 , 0.730159 , 0.4 }, { 0.47619 , 0.738095 , 0.4 }, { 0.492063 , 0.746032 , 0.4 }, { 0.507937 , 0.753968 , 0.4 }, { 0.52381 , 0.761905 , 0.4 }, { 0.539683 , 0.769841 , 0.4 }, { 0.555556 , 0.777778 , 0.4 }, { 0.571429 , 0.785714 , 0.4 }, { 0.587302 , 0.793651 , 0.4 }, { 0.603175 , 0.801587 , 0.4 }, { 0.619048 , 0.809524 , 0.4 }, { 0.634921 , 0.81746 , 0.4 }, { 0.650794 , 0.825397 , 0.4 }, { 0.666667 , 0.833333 , 0.4 }, { 0.68254 , 0.84127 , 0.4 }, { 0.698413 , 0.849206 , 0.4 }, { 0.714286 , 0.857143 , 0.4 }, { 0.730159 , 0.865079 , 0.4 }, { 0.746032 , 0.873016 , 0.4 }, { 0.761905 , 0.880952 , 0.4 }, { 0.777778 , 0.888889 , 0.4 }, { 0.793651 , 0.896825 , 0.4 }, { 0.809524 , 0.904762 , 0.4 }, { 0.825397 , 0.912698 , 0.4 }, { 0.84127 , 0.920635 , 0.4 }, { 0.857143 , 0.928571 , 0.4 }, { 0.873016 , 0.936508 , 0.4 }, { 0.888889 , 0.944444 , 0.4 }, { 0.904762 , 0.952381 , 0.4 }, { 0.920635 , 0.960317 , 0.4 }, { 0.936508 , 0.968254 , 0.4 }, { 0.952381 , 0.97619 , 0.4 }, { 0.968254 , 0.984127 , 0.4 }, { 0.984127 , 0.992063 , 0.4 }, { 1 , 1 , 0.4 } }};

static constexpr std::array<float3, 64> ColorMap_Spring = {{ { 1 , 0 , 1 }, { 1 , 0.015873 , 0.984127 }, { 1 , 0.031746 , 0.968254 }, { 1 , 0.047619 , 0.952381 }, { 1 , 0.0634921 , 0.936508 }, { 1 , 0.0793651 , 0.920635 }, { 1 , 0.0952381 , 0.904762 }, { 1 , 0.111111 , 0.888889 }, { 1 , 0.126984 , 0.873016 }, { 1 , 0.142857 , 0.857143 }, { 1 , 0.15873 , 0.84127 }, { 1 , 0.174603 , 0.825397 }, { 1 , 0.190476 , 0.809524 }, { 1 , 0.206349 , 0.793651 }, { 1 , 0.222222 , 0.777778 }, { 1 , 0.238095 , 0.761905 }, { 1 , 0.253968 , 0.746032 }, { 1 , 0.269841 , 0.730159 }, { 1 , 0.285714 , 0.714286 }, { 1 , 0.301587 , 0.698413 }, { 1 , 0.31746 , 0.68254 }, { 1 , 0.333333 , 0.666667 }, { 1 , 0.349206 , 0.650794 }, { 1 , 0.365079 , 0.634921 }, { 1 , 0.380952 , 0.619048 }, { 1 , 0.396825 , 0.603175 }, { 1 , 0.412698 , 0.587302 }, { 1 , 0.428571 , 0.571429 }, { 1 , 0.444444 , 0.555556 }, { 1 , 0.460317 , 0.539683 }, { 1 , 0.47619 , 0.52381 }, { 1 , 0.492063 , 0.507937 }, { 1 , 0.507937 , 0.492063 }, { 1 , 0.52381 , 0.47619 }, { 1 , 0.539683 , 0.460317 }, { 1 , 0.555556 , 0.444444 }, { 1 , 0.571429 , 0.428571 }, { 1 , 0.587302 , 0.412698 }, { 1 , 0.603175 , 0.396825 }, { 1 , 0.619048 , 0.380952 }, { 1 , 0.634921 , 0.365079 }, { 1 , 0.650794 , 0.349206 }, { 1 , 0.666667 , 0.333333 }, { 1 , 0.68254 , 0.31746 }, { 1 , 0.698413 , 0.301587 }, { 1 , 0.714286 , 0.285714 }, { 1 , 0.730159 , 0.269841 }, { 1 , 0.746032 , 0.253968 }, { 1 , 0.761905 , 0.238095 }, { 1 , 0.777778 , 0.222222 }, { 1 , 0.793651 , 0.206349 }, { 1 , 0.809524 , 0.190476 }, { 1 , 0.825397 , 0.174603 }, { 1 , 0.84127 , 0.15873 }, { 1 , 0.857143 , 0.142857 }, { 1 , 0.873016 , 0.126984 }, { 1 , 0.888889 , 0.111111 }, { 1 , 0.904762 , 0.0952381 }, { 1 , 0.920635 , 0.0793651 }, { 1 , 0.936508 , 0.0634921 }, { 1 , 0.952381 , 0.047619 }, { 1 , 0.968254 , 0.031746 }, { 1 , 0.984127 , 0.015873 }, { 1 , 1 , 0 } }};

static constexpr std::array<float3, 64> ColorMap_Cool = {{ { 0 , 1 , 1 }, { 0.015873 , 0.984127 , 1 }, { 0.031746 , 0.968254 , 1 }, { 0.047619 , 0.952381 , 1 }, { 0.0634921 , 0.936508 , 1 }, { 0.0793651 , 0.920635 , 1 }, { 0.0952381 , 0.904762 , 1 }, { 0.111111 , 0.888889 , 1 }, { 0.126984 , 0.873016 , 1 }, { 0.142857 , 0.857143 , 1 }, { 0.15873 , 0.84127 , 1 }, { 0.174603 , 0.825397 , 1 }, { 0.190476 , 0.809524 , 1 }, { 0.206349 , 0.793651 , 1 }, { 0.222222 , 0.777778 , 1 }, { 0.238095 , 0.761905 , 1 }, { 0.253968 , 0.746032 , 1 }, { 0.269841 , 0.730159 , 1 }, { 0.285714 , 0.714286 , 1 }, { 0.301587 , 0.698413 , 1 }, { 0.31746 , 0.68254 , 1 }, { 0.333333 , 0.666667 , 1 }, { 0.349206 , 0.650794 , 1 }, { 0.365079 , 0.634921 , 1 }, { 0.380952 , 0.619048 , 1 }, { 0.396825 , 0.603175 , 1 }, { 0.412698 , 0.587302 , 1 }, { 0.428571 , 0.571429 , 1 }, { 0.444444 , 0.555556 , 1 }, { 0.460317 , 0.539683 , 1 }, { 0.47619 , 0.52381 , 1 }, { 0.492063 , 0.507937 , 1 }, { 0.507937 , 0.492063 , 1 }, { 0.52381 , 0.47619 , 1 }, { 0.539683 , 0.460317 , 1 }, { 0.555556 , 0.444444 , 1 }, { 0.571429 , 0.428571 , 1 }, { 0.587302 , 0.412698 , 1 }, { 0.603175 , 0.396825 , 1 }, { 0.619048 , 0.380952 , 1 }, { 0.634921 , 0.365079 , 1 }, { 0.650794 , 0.349206 , 1 }, { 0.666667 , 0.333333 , 1 }, { 0.68254 , 0.31746 , 1 }, { 0.698413 , 0.301587 , 1 }, { 0.714286 , 0.285714 , 1 }, { 0.730159 , 0.269841 , 1 }, { 0.746032 , 0.253968 , 1 }, { 0.761905 , 0.238095 , 1 }, { 0.777778 , 0.222222 , 1 }, { 0.793651 , 0.206349 , 1 }, { 0.809524 , 0.190476 , 1 }, { 0.825397 , 0.174603 , 1 }, { 0.84127 , 0.15873 , 1 }, { 0.857143 , 0.142857 , 1 }, { 0.873016 , 0.126984 , 1 }, { 0.888889 , 0.111111 , 1 }, { 0.904762 , 0.0952381 , 1 }, { 0.920635 , 0.0793651 , 1 }, { 0.936508 , 0.0634921 , 1 }, { 0.952381 , 0.047619 , 1 }, { 0.968254 , 0.031746 , 1 }, { 0.984127 , 0.015873 , 1 }, { 1 , 0 , 1 } }};

static constexpr std::array<float3, 64> ColorMap_HSV = {{ { 1 , 0 , 0 }, { 1 , 0.0952381 , 0 }, { 1 , 0.190476 , 0 }, { 1 , 0.285714 , 0 }, { 1 , 0.380952 , 0 }, { 1 , 0.47619 , 0 }, { 1 , 0.571429 , 0 }, { 1 , 0.666667 , 0 }, { 1 , 0.761905 , 0 }, { 1 , 0.857143 , 0 }, { 1 , 0.952381 , 0 }, { 0.952381 , 1 , 0 }, { 0.857143 , 1 , 0 }, { 0.761905 , 1 , 0 }, { 0.666667 , 1 , 0 }, { 0.571429 , 1 , 0 }, { 0.47619 , 1 , 0 }, { 0.380952 , 1 , 0 }, { 0.285714 , 1 , 0 }, { 0.190476 , 1 , 0 }, { 0.0952381 , 1 , 0 }, { 0 , 1 , 0 }, { 0 , 1 , 0.0952381 }, { 0 , 1 , 0.190476 }, { 0 , 1 , 0.285714 }, { 0 , 1 , 0.380952 }, { 0 , 1 , 0.47619 }, { 0 , 1 , 0.571429 }, { 0 , 1 , 0.666667 }, { 0 , 1 , 0.761905 }, { 0 , 1 , 0.857143 }, { 0 , 1 , 0.952381 }, { 0 , 0.952381 , 1 }, { 0 , 0.857143 , 1 }, { 0 , 0.761905 , 1 }, { 0 , 0.666667 , 1 }, { 0 , 0.571429 , 1 }, { 0 , 0.47619 , 1 }, { 0 , 0.380952 , 1 }, { 0 , 0.285714 , 1 }, { 0 , 0.190476 , 1 }, { 0 , 0.0952381 , 1 }, { 0 , 0 , 1 }, { 0.0952381 , 0 , 1 }, { 0.190476 , 0 , 1 }, { 0.285714 , 0 , 1 }, { 0.380952 , 0 , 1 }, { 0.47619 , 0 , 1 }, { 0.571429 , 0 , 1 }, { 0.666667 , 0 , 1 }, { 0.761905 , 0 , 1 }, { 0.857143 , 0 , 1 }, { 0.952381 , 0 , 1 }, { 1 , 0 , 0.952381 }, { 1 , 0 , 0.857143 }, { 1 , 0 , 0.761905 }, { 1 , 0 , 0.666667 }, { 1 , 0 , 0.571429 }, { 1 , 0 , 0.47619 }, { 1 , 0 , 0.380952 }, { 1 , 0 , 0.285714 }, { 1 , 0 , 0.190476 }, { 1 , 0 , 0.0952381 }, { 1 , 0 , 0 } }};

static constexpr std::array<float3, 64> ColorMap_Pink = {{ { 0 , 0 , 0 }, { 0.157135 , 0.102869 , 0.102869 }, { 0.222222 , 0.145479 , 0.145479 }, { 0.272166 , 0.178174 , 0.178174 }, { 0.31427 , 0.205738 , 0.205738 }, { 0.351364 , 0.230022 , 0.230022 }, { 0.3849 , 0.251976 , 0.251976 }, { 0.41574 , 0.272166 , 0.272166 }, { 0.444444 , 0.290957 , 0.290957 }, { 0.471405 , 0.308607 , 0.308607 }, { 0.496904 , 0.3253 , 0.3253 }, { 0.521157 , 0.341178 , 0.341178 }, { 0.544331 , 0.356348 , 0.356348 }, { 0.566558 , 0.370899 , 0.370899 }, { 0.587945 , 0.3849 , 0.3849 }, { 0.608581 , 0.39841 , 0.39841 }, { 0.628539 , 0.411476 , 0.411476 }, { 0.647884 , 0.424139 , 0.424139 }, { 0.666667 , 0.436436 , 0.436436 }, { 0.684935 , 0.448395 , 0.448395 }, { 0.702728 , 0.460044 , 0.460044 }, { 0.720082 , 0.471405 , 0.471405 }, { 0.737028 , 0.482498 , 0.482498 }, { 0.753592 , 0.493342 , 0.493342 }, { 0.766356 , 0.509175 , 0.503953 }, { 0.773229 , 0.53287 , 0.514345 }, { 0.780042 , 0.555556 , 0.524531 }, { 0.786796 , 0.57735 , 0.534522 }, { 0.793492 , 0.598352 , 0.544331 }, { 0.800132 , 0.61864 , 0.553966 }, { 0.806718 , 0.638285 , 0.563436 }, { 0.81325 , 0.657342 , 0.57275 }, { 0.81973 , 0.675862 , 0.581914 }, { 0.82616 , 0.693889 , 0.590937 }, { 0.832539 , 0.711458 , 0.599824 }, { 0.83887 , 0.728604 , 0.608581 }, { 0.845154 , 0.745356 , 0.617213 }, { 0.851392 , 0.761739 , 0.625727 }, { 0.857584 , 0.777778 , 0.634126 }, { 0.863731 , 0.793492 , 0.642416 }, { 0.869835 , 0.808901 , 0.6506 }, { 0.875897 , 0.824022 , 0.658682 }, { 0.881917 , 0.83887 , 0.666667 }, { 0.887896 , 0.853461 , 0.674556 }, { 0.893835 , 0.867806 , 0.682355 }, { 0.899735 , 0.881917 , 0.690066 }, { 0.905597 , 0.895806 , 0.697691 }, { 0.911421 , 0.909484 , 0.705234 }, { 0.917208 , 0.917208 , 0.723747 }, { 0.922958 , 0.922958 , 0.745356 }, { 0.928673 , 0.928673 , 0.766356 }, { 0.934353 , 0.934353 , 0.786796 }, { 0.939999 , 0.939999 , 0.806718 }, { 0.945611 , 0.945611 , 0.82616 }, { 0.95119 , 0.95119 , 0.845154 }, { 0.956736 , 0.956736 , 0.863731 }, { 0.96225 , 0.96225 , 0.881917 }, { 0.967733 , 0.967733 , 0.899735 }, { 0.973185 , 0.973185 , 0.917208 }, { 0.978607 , 0.978607 , 0.934353 }, { 0.983999 , 0.983999 , 0.95119 }, { 0.989361 , 0.989361 , 0.967733 }, { 0.994695 , 0.994695 , 0.983999 }, { 1 , 1 , 1 } }};

static constexpr std::array<float3, 64> ColorMap_Hot = {{ { 0 , 0 , 0 }, { 0.0396825 , 0 , 0 }, { 0.0793651 , 0 , 0 }, { 0.119048 , 0 , 0 }, { 0.15873 , 0 , 0 }, { 0.198413 , 0 , 0 }, { 0.238095 , 0 , 0 }, { 0.277778 , 0 , 0 }, { 0.31746 , 0 , 0 }, { 0.357143 , 0 , 0 }, { 0.396825 , 0 , 0 }, { 0.436508 , 0 , 0 }, { 0.47619 , 0 , 0 }, { 0.515873 , 0 , 0 }, { 0.555556 , 0 , 0 }, { 0.595238 , 0 , 0 }, { 0.634921 , 0 , 0 }, { 0.674603 , 0 , 0 }, { 0.714286 , 0 , 0 }, { 0.753968 , 0 , 0 }, { 0.793651 , 0 , 0 }, { 0.833333 , 0 , 0 }, { 0.873016 , 0 , 0 }, { 0.912698 , 0 , 0 }, { 0.952381 , 0 , 0 }, { 0.992063 , 0 , 0 }, { 1 , 0.031746 , 0 }, { 1 , 0.0714286 , 0 }, { 1 , 0.111111 , 0 }, { 1 , 0.150794 , 0 }, { 1 , 0.190476 , 0 }, { 1 , 0.230159 , 0 }, { 1 , 0.269841 , 0 }, { 1 , 0.309524 , 0 }, { 1 , 0.349206 , 0 }, { 1 , 0.388889 , 0 }, { 1 , 0.428571 , 0 }, { 1 , 0.468254 , 0 }, { 1 , 0.507937 , 0 }, { 1 , 0.547619 , 0 }, { 1 , 0.587302 , 0 }, { 1 , 0.626984 , 0 }, { 1 , 0.666667 , 0 }, { 1 , 0.706349 , 0 }, { 1 , 0.746032 , 0 }, { 1 , 0.785714 , 0 }, { 1 , 0.825397 , 0 }, { 1 , 0.865079 , 0 }, { 1 , 0.904762 , 0 }, { 1 , 0.944444 , 0 }, { 1 , 0.984127 , 0 }, { 1 , 1 , 0.047619 }, { 1 , 1 , 0.126984 }, { 1 , 1 , 0.206349 }, { 1 , 1 , 0.285714 }, { 1 , 1 , 0.365079 }, { 1 , 1 , 0.444444 }, { 1 , 1 , 0.52381 }, { 1 , 1 , 0.603175 }, { 1 , 1 , 0.68254 }, { 1 , 1 , 0.761905 }, { 1 , 1 , 0.84127 }, { 1 , 1 , 0.920635 }, { 1 , 1 , 1 } }};

static constexpr std::array<float3, 9> ColorMap_Parula = {{ { 0.2078 , 0.1647 , 0.5294 }, { 0.0118 , 0.3882 , 0.8824 }, { 0.0784 , 0.5216 , 0.8314 }, { 0.0235 , 0.6549 , 0.7765 }, { 0.2196 , 0.7255 , 0.6196 }, { 0.5725 , 0.749 , 0.451 }, { 0.851 , 0.7294 , 0.3373 }, { 0.9882 , 0.8078 , 0.1804 }, { 0.9765 , 0.9843 , 0.0549 } }};
#ifndef COLOR_MAP_THIS_IS_GPU
static constexpr std::size_t ColorMapSizes[] = { ColorMap_Autumn.size(), ColorMap_Bone.size(), ColorMap_Jet.size(), 
                                                 ColorMap_Winter.size(), ColorMap_Rainbow.size(), ColorMap_Ocean.size(), 
                                                 ColorMap_Summer.size(), ColorMap_Spring.size(), ColorMap_Cool.size(),
                                                 ColorMap_HSV.size() , ColorMap_Pink.size(), ColorMap_Hot.size(), ColorMap_Parula.size() };
                                                 
static constexpr inline std::size_t getColorMapSize(core::image::ColorMap cm) { return ColorMapSizes[static_cast<unsigned int>(cm)]; }
#else // COLOR_MAP_THIS_IS_GPU
extern std::size_t getColorMapSizeForwarder(core::image::ColorMap cm);
#endif // COLOR_MAP_THIS_IS_GPU
static inline const float3* getColorMapData(core::image::ColorMap cm)
{
    const float3* ret = nullptr;
    
    switch(cm)
    {
        case core::image::ColorMap::AUTUMN: ret = ColorMap_Autumn.data(); break;
        case core::image::ColorMap::BONE: ret = ColorMap_Bone.data(); break;
        case core::image::ColorMap::COOL: ret = ColorMap_Cool.data(); break;
        case core::image::ColorMap::HOT: ret = ColorMap_Hot.data(); break;
        case core::image::ColorMap::HSV: ret = ColorMap_HSV.data(); break;
        case core::image::ColorMap::JET: ret = ColorMap_Jet.data(); break;
        case core::image::ColorMap::OCEAN: ret = ColorMap_Ocean.data(); break;
        case core::image::ColorMap::PARULA: ret = ColorMap_Parula.data(); break;
        case core::image::ColorMap::PINK: ret = ColorMap_Pink.data(); break;
        case core::image::ColorMap::RAINBOW: ret = ColorMap_Rainbow.data(); break;
        case core::image::ColorMap::SPRING: ret = ColorMap_Spring.data(); break;
        case core::image::ColorMap::SUMMER: ret = ColorMap_Summer.data(); break;
        case core::image::ColorMap::WINTER: ret = ColorMap_Winter.data(); break;
        default: ret = nullptr; break;
    }
    
    return ret;
}

template<typename TOUT>
struct ConvertToTarget;

template<> struct ConvertToTarget<float3> { static EIGEN_DEVICE_FUNC inline float3 run(const float3& v) { return v; } };
template<> struct ConvertToTarget<float4> { static EIGEN_DEVICE_FUNC inline float4 run(const float3& v) { return make_float4(v.x,v.y,v.z,1.0f); } };
template<> struct ConvertToTarget<Eigen::Vector3f> { static EIGEN_DEVICE_FUNC inline Eigen::Vector3f run(const float3& v) { return Eigen::Vector3f(v.x,v.y,v.z); } };
template<> struct ConvertToTarget<Eigen::Vector4f> { static EIGEN_DEVICE_FUNC inline Eigen::Vector4f run(const float3& v) { return Eigen::Vector4f(v.x,v.y,v.z,1.0f); } };

template<typename T>
EIGEN_DEVICE_FUNC inline float3 getColorMapValuePreload(std::size_t cms, const float3* data, const T& vmin, const T& vmax, const T& val)
{
    const T range = (vmax - vmin);
    const T prop = clamp(val / range, 0.0f, 1.0f);
    const int index = (int)((T)cms * prop);
    const int index_m1 = clamp(index-1,0,(int)cms-1);
    const int index_p1 = clamp(index+1,0,(int)cms-1);
    const T prop_m1 = (range * (T)index_m1)/(float)cms;
    const T prop_p1 = (range * (T)index_p1)/(float)cms;
    const T new_prop = (val - prop_m1)/(prop_p1 - prop_m1);

    return lerp(data[index_m1], data[index_p1], new_prop);
}
