// Aseprite
// Copyright (C) 2001-2015  David Capello
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License version 2 as
// published by the Free Software Foundation.

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "net/http_response.h"

#include <ostream>

namespace net {

void HttpResponse::write(const char* data, std::size_t length)
{
  m_stream->write(data, length);
}

} // namespace net
