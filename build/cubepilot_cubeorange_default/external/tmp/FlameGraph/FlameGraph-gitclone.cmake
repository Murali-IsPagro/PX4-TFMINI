# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if(EXISTS "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph/FlameGraph-gitclone-lastrun.txt" AND EXISTS "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph/FlameGraph-gitinfo.txt" AND
  "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph/FlameGraph-gitclone-lastrun.txt" IS_NEWER_THAN "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph/FlameGraph-gitinfo.txt")
  message(STATUS
    "Avoiding repeated git clone, stamp file is up to date: "
    "'/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph/FlameGraph-gitclone-lastrun.txt'"
  )
  return()
endif()

execute_process(
  COMMAND ${CMAKE_COMMAND} -E rm -rf "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Source/FlameGraph"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to remove directory: '/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Source/FlameGraph'")
endif()

# try the clone 3 times in case there is an odd git clone issue
set(error_code 1)
set(number_of_tries 0)
while(error_code AND number_of_tries LESS 3)
  execute_process(
    COMMAND "/usr/bin/git" 
            clone --no-checkout --config "advice.detachedHead=false" "https://github.com/brendangregg/FlameGraph.git" "FlameGraph"
    WORKING_DIRECTORY "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Source"
    RESULT_VARIABLE error_code
  )
  math(EXPR number_of_tries "${number_of_tries} + 1")
endwhile()
if(number_of_tries GREATER 1)
  message(STATUS "Had to git clone more than once: ${number_of_tries} times.")
endif()
if(error_code)
  message(FATAL_ERROR "Failed to clone repository: 'https://github.com/brendangregg/FlameGraph.git'")
endif()

execute_process(
  COMMAND "/usr/bin/git" 
          checkout "master" --
  WORKING_DIRECTORY "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Source/FlameGraph"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to checkout tag: 'master'")
endif()

set(init_submodules TRUE)
if(init_submodules)
  execute_process(
    COMMAND "/usr/bin/git" 
            submodule update --recursive --init 
    WORKING_DIRECTORY "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Source/FlameGraph"
    RESULT_VARIABLE error_code
  )
endif()
if(error_code)
  message(FATAL_ERROR "Failed to update submodules in: '/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Source/FlameGraph'")
endif()

# Complete success, update the script-last-run stamp file:
#
execute_process(
  COMMAND ${CMAKE_COMMAND} -E copy "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph/FlameGraph-gitinfo.txt" "/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph/FlameGraph-gitclone-lastrun.txt"
  RESULT_VARIABLE error_code
)
if(error_code)
  message(FATAL_ERROR "Failed to copy script-last-run stamp file: '/home/murali/Documents/PX4-Autopilot/build/cubepilot_cubeorange_default/external/Stamp/FlameGraph/FlameGraph-gitclone-lastrun.txt'")
endif()
