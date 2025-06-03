# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/appuntitled10_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/appuntitled10_autogen.dir/ParseCache.txt"
  "appuntitled10_autogen"
  )
endif()
