#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "SFML::System" for configuration "Release"
set_property(TARGET SFML::System APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SFML::System PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/./sfml-system.framework/Versions/3.0.0/sfml-system"
  IMPORTED_SONAME_RELEASE "@rpath/sfml-system.framework/Versions/3.0.0/sfml-system"
  )

list(APPEND _cmake_import_check_targets SFML::System )
list(APPEND _cmake_import_check_files_for_SFML::System "${_IMPORT_PREFIX}/./sfml-system.framework/Versions/3.0.0/sfml-system" )

# Import target "SFML::Window" for configuration "Release"
set_property(TARGET SFML::Window APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SFML::Window PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/./sfml-window.framework/Versions/3.0.0/sfml-window"
  IMPORTED_SONAME_RELEASE "@rpath/sfml-window.framework/Versions/3.0.0/sfml-window"
  )

list(APPEND _cmake_import_check_targets SFML::Window )
list(APPEND _cmake_import_check_files_for_SFML::Window "${_IMPORT_PREFIX}/./sfml-window.framework/Versions/3.0.0/sfml-window" )

# Import target "SFML::Network" for configuration "Release"
set_property(TARGET SFML::Network APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SFML::Network PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/./sfml-network.framework/Versions/3.0.0/sfml-network"
  IMPORTED_SONAME_RELEASE "@rpath/sfml-network.framework/Versions/3.0.0/sfml-network"
  )

list(APPEND _cmake_import_check_targets SFML::Network )
list(APPEND _cmake_import_check_files_for_SFML::Network "${_IMPORT_PREFIX}/./sfml-network.framework/Versions/3.0.0/sfml-network" )

# Import target "SFML::Graphics" for configuration "Release"
set_property(TARGET SFML::Graphics APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SFML::Graphics PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/./sfml-graphics.framework/Versions/3.0.0/sfml-graphics"
  IMPORTED_SONAME_RELEASE "@rpath/sfml-graphics.framework/Versions/3.0.0/sfml-graphics"
  )

list(APPEND _cmake_import_check_targets SFML::Graphics )
list(APPEND _cmake_import_check_files_for_SFML::Graphics "${_IMPORT_PREFIX}/./sfml-graphics.framework/Versions/3.0.0/sfml-graphics" )

# Import target "SFML::Audio" for configuration "Release"
set_property(TARGET SFML::Audio APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(SFML::Audio PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/./sfml-audio.framework/Versions/3.0.0/sfml-audio"
  IMPORTED_SONAME_RELEASE "@rpath/sfml-audio.framework/Versions/3.0.0/sfml-audio"
  )

list(APPEND _cmake_import_check_targets SFML::Audio )
list(APPEND _cmake_import_check_files_for_SFML::Audio "${_IMPORT_PREFIX}/./sfml-audio.framework/Versions/3.0.0/sfml-audio" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
