#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "drive_base_msgs::drive_base_msgs__rosidl_typesupport_c" for configuration "Release"
set_property(TARGET drive_base_msgs::drive_base_msgs__rosidl_typesupport_c APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(drive_base_msgs::drive_base_msgs__rosidl_typesupport_c PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libdrive_base_msgs__rosidl_typesupport_c.so"
  IMPORTED_SONAME_RELEASE "libdrive_base_msgs__rosidl_typesupport_c.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS drive_base_msgs::drive_base_msgs__rosidl_typesupport_c )
list(APPEND _IMPORT_CHECK_FILES_FOR_drive_base_msgs::drive_base_msgs__rosidl_typesupport_c "${_IMPORT_PREFIX}/lib/libdrive_base_msgs__rosidl_typesupport_c.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)