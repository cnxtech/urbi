/*
 * Copyright (C) 2009, 2010, Gostai S.A.S.
 *
 * This software is provided "as is" without warranty of any kind,
 * either expressed or implied, including but not limited to the
 * implied warranties of fitness for a particular purpose.
 *
 * See the LICENSE file for more information.
 */

/*! \file uexternal.hh
 *******************************************************************************

 File: uexternal.hh\n
 Definition of common structures between modules and the kernel

 This file is part of LIBURBI and URBI Kernel\n
 (c) Jean-Christophe Baillie, 2004-2006.

 Permission to use, copy, modify, and redistribute this software for
 non-commercial use is hereby granted.

 This software is provided "as is" without warranty of any kind,
 either expressed or implied, including but not limited to the
 implied warranties of fitness for a particular purpose.

 For more information, comments, bug reports: http://www.urbiforge.com

 **************************************************************************** */

#ifndef URBI_UEXTERNAL_HH
# define URBI_UEXTERNAL_HH

namespace urbi
{

  // Warning, the values are replicated in uobject.u, keep in sync.
  enum USystemExternalMessage
  {
    UEM_EVALFUNCTION,
    UEM_ASSIGNVALUE,
    UEM_EMITEVENT,
    UEM_ENDEVENT,
    UEM_NEW,
    UEM_DELETE,
    UEM_INIT, // Internal, force loading of all uobjects
    UEM_TIMER, // Internal timer messages
    UEM_NORTP,  // Disable RTP for this connection
    UEM_SETRTP, //[varname, state(0:off 1:on)]: Set rtp state.
  };

  static const std::string externalModuleTag = "__ExternalMessage__";

} // namespace urbi

#endif