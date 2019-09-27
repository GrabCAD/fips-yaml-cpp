if (NOT FIPS_IMPORT)
    cmake_minimum_required(VERSION 2.8)

    # use FIPS_ROOT from environment
    get_filename_component(FIPS_ROOT_DIR "$ENV{FIPS_ROOT}" ABSOLUTE)
    if(FIPS_ROOT_DIR)
        set(FIPS_ROOT_DIR "${FIPS_ROOT_DIR}/fips")
    else(FIPS_ROOT_DIR)
        set(FIPS_ROOT_DIR "../fips")
    endif(FIPS_ROOT_DIR)

    # include the fips main cmake file
    include("${FIPS_ROOT_DIR}/cmake/fips.cmake")
    
    set(FIPS_EXCEPTIONS ON CACHE BOOL "Enable C++ exceptions" FORCE)

    fips_setup()
        fips_project(fips-yaml-cpp)
        set(YAML_CPP_BUILD_TESTS OFF)
        set(YAML_CPP_BUILD_TOOLS OFF)
        set(YAML_CPP_BUILD_CONTRIB OFF)
        set(YAML_CPP_INSTALL OFF)
	set(BUILD_SHARED_LIBS OFF)
	fips_add_subdirectory(yaml-cpp)
    fips_finish()
    
endif()
