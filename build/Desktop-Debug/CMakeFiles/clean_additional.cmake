# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/DesktopDoorway_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/DesktopDoorway_autogen.dir/ParseCache.txt"
  "DesktopDoorway_autogen"
  )
endif()
