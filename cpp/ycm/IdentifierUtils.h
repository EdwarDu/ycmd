// Copyright (C) 2011-2018 ycmd contributors
//
// This file is part of ycmd.
//
// ycmd is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// ycmd is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with ycmd.  If not, see <http://www.gnu.org/licenses/>.

#ifndef IDENTIFIERUTILS_CPP_WFFUZNET
#define IDENTIFIERUTILS_CPP_WFFUZNET

#include "IdentifierDatabase.h"

#include <filesystem>
#include <string>
#include <vector>

namespace YouCompleteMe {

// When enabled, an absolute tags path is lexically normalized instead of
// resolved. Identifier paths then rewrite the longest configured prefix
// alias. When disabled, tags paths are resolved with weakly_canonical and
// buffer paths are stored as given.
YCM_EXPORT void SetKeepIdentifierPaths( bool keep );

YCM_EXPORT void SetIdentifierPathAliases(
  std::vector< std::vector< std::string > > aliases );

YCM_EXPORT std::string IdentifierFilePath( std::string filepath );

YCM_EXPORT FiletypeIdentifierMap ExtractIdentifiersFromTagsFile(
  const std::filesystem::path &path_to_tag_file );

} // namespace YouCompleteMe

#endif /* end of include guard: IDENTIFIERUTILS_CPP_WFFUZNET */
