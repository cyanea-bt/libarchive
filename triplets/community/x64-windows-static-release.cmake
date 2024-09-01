set(VCPKG_TARGET_ARCHITECTURE x64)
set(VCPKG_CRT_LINKAGE static)
set(VCPKG_LIBRARY_LINKAGE static)

set(VCPKG_BUILD_TYPE release)

# final binary size bigger than without these options
# leave these off for now
#set(VCPKG_CXX_FLAGS_RELEASE "/GL /Gw")
#set(VCPKG_C_FLAGS_RELEASE "/GL /Gw")
#set(VCPKG_LINKER_FLAGS_RELEASE "/OPT:ICF=3 /LTCG /INCREMENTAL:NO")
