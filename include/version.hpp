#ifndef VERSION_HPP
#define VERSION_HPP

namespace version
{
   constexpr unsigned long major   = 0;
   constexpr unsigned long minor   = 3;
   constexpr unsigned long patch   = 0;
   constexpr unsigned long version = major * 10000 + minor * 100 + patch;
   constexpr const char*   string  = "0.3.0";
} // namespace version

#endif // VERSION_HPP
