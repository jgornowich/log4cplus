//  Copyright (C) 2009-2017, Vaclav Haisman. All rights reserved.
//
//  Redistribution and use in source and binary forms, with or without modifica-
//  tion, are permitted provided that the following conditions are met:
//
//  1. Redistributions of  source code must  retain the above copyright  notice,
//     this list of conditions and the following disclaimer.
//
//  2. Redistributions in binary form must reproduce the above copyright notice,
//     this list of conditions and the following disclaimer in the documentation
//     and/or other materials provided with the distribution.
//
//  THIS SOFTWARE IS PROVIDED ``AS IS'' AND ANY EXPRESSED OR IMPLIED WARRANTIES,
//  INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND
//  FITNESS  FOR A PARTICULAR  PURPOSE ARE  DISCLAIMED.  IN NO  EVENT SHALL  THE
//  APACHE SOFTWARE  FOUNDATION  OR ITS CONTRIBUTORS  BE LIABLE FOR  ANY DIRECT,
//  INDIRECT, INCIDENTAL, SPECIAL,  EXEMPLARY, OR CONSEQUENTIAL  DAMAGES (INCLU-
//  DING, BUT NOT LIMITED TO, PROCUREMENT  OF SUBSTITUTE GOODS OR SERVICES; LOSS
//  OF USE, DATA, OR  PROFITS; OR BUSINESS  INTERRUPTION)  HOWEVER CAUSED AND ON
//  ANY  THEORY OF LIABILITY,  WHETHER  IN CONTRACT,  STRICT LIABILITY,  OR TORT
//  (INCLUDING  NEGLIGENCE OR  OTHERWISE) ARISING IN  ANY WAY OUT OF THE  USE OF
//  THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include <sstream>
#define LOG4CPLUS_ENABLE_SYNCPRIMS_PUB_IMPL
#include <log4cplus/thread/syncprims-pub-impl.h>
#include <log4cplus/exception.h>
#include <log4cplus/streams.h>


namespace log4cplus::thread::impl
{


LOG4CPLUS_EXPORT
void
syncprims_throw_exception (char const * const msg, char const * const file,
    int line)
{
    log4cplus::tostringstream oss;
    oss << LOG4CPLUS_C_STR_TO_TSTRING (file) << LOG4CPLUS_TEXT (":") << line
        << LOG4CPLUS_TEXT (": ") << LOG4CPLUS_C_STR_TO_TSTRING (msg);
    throw log4cplus::exception (oss.str ());
}


} // namespace log4cplus::thread::impl
