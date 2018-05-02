// Copyright 2017 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef RIEGELI_CHUNK_ENCODING_INTERNAL_TYPES_H_
#define RIEGELI_CHUNK_ENCODING_INTERNAL_TYPES_H_

#include <stdint.h>

namespace riegeli {

// These values are frozen in the file format.
enum class ChunkType : uint8_t {
  kFileSignature = 's',
  kPadding = 'p',
  kSimple = 'r',
  kTransposed = 't',
};

// These values are frozen in the file format.
enum class CompressionType : uint8_t {
  kNone = 0,
  kBrotli = 'b',
  kZstd = 'z',
};

}  // namespace riegeli

#endif  // RIEGELI_CHUNK_ENCODING_INTERNAL_TYPES_H_
