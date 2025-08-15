FILE(GLOB SRC *.cpp *.h)

NL_TARGET_LIB(aishare ${SRC})

TARGET_LINK_LIBRARIES(aishare
						gameshare
						servershare
						nelmisc
						nelnet
						nelgeorges
						nelpacs)

NL_DEFAULT_PROPS(aishare "Ryzom, Library: AI Shared")
NL_ADD_RUNTIME_FLAGS(aishare)
NL_ADD_LIB_SUFFIX(aishare)

IF(WITH_PCH)
  target_precompile_headers(aishare PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/stdpch.h)
ENDIF()

IF(WITH_INSTALL_LIBRARIES)
  INSTALL(TARGETS aishare LIBRARY DESTINATION ${LIB_PREFIX} ARCHIVE DESTINATION ${LIB_PREFIX} COMPONENT libraries)
ENDIF()
