//////////////////////////////////////////////////////////////////////////////
// License:                                                                 //
// sfTheora 1.5.0                                                           //
// Copyright (c) 2020 Kerli Low                                             //
// kerlilow@gmail.com                                                       //
//                                                                          //
// This software is provided 'as-is', without any express or implied        //
// warranty. In no event will the authors be held liable for any damages    //
// arising from the use of this software.                                   //
//                                                                          //
// Permission is granted to anyone to use this software for any purpose,    //
// including commercial applications, and to alter it and redistribute it   //
// freely, subject to the following restrictions:                           //
//                                                                          //
//    1. The origin of this software must not be misrepresented; you must   //
//    not claim that you wrote the original software. If you use this       //
//    software in a product, an acknowledgment in the product documentation //
//    would be appreciated but is not required.                             //
//                                                                          //
//    2. Altered source versions must be plainly marked as such, and must   //
//    not be misrepresented as being the original software.                 //
//                                                                          //
//    3. This notice may not be removed or altered from any source          //
//    distribution.                                                         //
//////////////////////////////////////////////////////////////////////////////

#ifndef SFTHEORA_MEMORYLOADER_H
#define SFTHEORA_MEMORYLOADER_H

#include <string>

#include <theoraplayer/TheoraDataSource.h>

namespace sftheora
{
    class MemoryLoader;
}


///////////////////////////////////////////////////////////
// Memory Loader class                                   //
///////////////////////////////////////////////////////////
class sftheora::MemoryLoader : public TheoraDataSource
{
public:
    MemoryLoader();
    // repr: String representation of the data source, eg 'File: source.ogg'
    MemoryLoader(const std::string& repr, const void* data, unsigned long size);
    
    ~MemoryLoader();
    
    void release();
    
    void set(const std::string& repr, const void* data, unsigned long size);
    
    int         read(void* output, int nBytes);
    std::string repr();
    void        seek(uint64_t byte_index);
    uint64_t    size();
    uint64_t    tell();

private:
    std::string repr_;
    void*       data_;
    uint64_t    size_;
    
    uint64_t    offset_;
};

#endif // SFTHEORA_MEMORYLOADER_H
