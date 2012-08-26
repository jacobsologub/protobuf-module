// Protocol Buffers - Google's data interchange format
// Copyright 2008 Google Inc.  All rights reserved.
// http://code.google.com/p/protobuf/
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "protobuf.h"

#include "src/google/protobuf/descriptor.cc"
#include "src/google/protobuf/descriptor.pb.cc"
#include "src/google/protobuf/descriptor_database.cc"
#include "src/google/protobuf/dynamic_message.cc"
#include "src/google/protobuf/extension_set.cc"
#include "src/google/protobuf/extension_set_heavy.cc"
#include "src/google/protobuf/generated_message_reflection.cc"
#include "src/google/protobuf/generated_message_util.cc"
#include "src/google/protobuf/message.cc"
#include "src/google/protobuf/message_lite.cc"
#include "src/google/protobuf/reflection_ops.cc"
#include "src/google/protobuf/repeated_field.cc"
#include "src/google/protobuf/service.cc"
#include "src/google/protobuf/text_format.cc"
#include "src/google/protobuf/unknown_field_set.cc"
#include "src/google/protobuf/wire_format.cc"
#include "src/google/protobuf/wire_format_lite.cc"

#include "src/google/protobuf/io/coded_stream.cc"
#include "src/google/protobuf/io/gzip_stream.cc"
#include "src/google/protobuf/io/printer.cc"
#include "src/google/protobuf/io/tokenizer.cc"
#include "src/google/protobuf/io/zero_copy_stream.cc"
#include "src/google/protobuf/io/zero_copy_stream_impl.cc"
#include "src/google/protobuf/io/zero_copy_stream_impl_lite.cc"

#include "src/google/protobuf/stubs/common.cc"
#include "src/google/protobuf/stubs/once.cc"
#include "src/google/protobuf/stubs/structurally_valid.cc"
#include "src/google/protobuf/stubs/strutil.cc"
#include "src/google/protobuf/stubs/substitute.cc"