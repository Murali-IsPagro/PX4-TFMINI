# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Source/FlameGraph"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Build/FlameGraph"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Install/FlameGraph"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/tmp/FlameGraph"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Download/FlameGraph"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph${cfgdir}") # cfgdir has leading slash
endif()
