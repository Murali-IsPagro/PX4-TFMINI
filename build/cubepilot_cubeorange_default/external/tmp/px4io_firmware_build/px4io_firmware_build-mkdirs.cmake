# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Source/px4io_firmware_build"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Build/px4io_firmware_build"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Install/px4io_firmware_build"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/tmp/px4io_firmware_build"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/px4io_firmware_build"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Download/px4io_firmware_build"
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/px4io_firmware_build"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/px4io_firmware_build/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/px4io_firmware_build${cfgdir}") # cfgdir has leading slash
endif()
