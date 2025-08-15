FILE(GLOB SRC *.cpp *.h)

FILE(GLOB R2
	r2_*.h r2_*.cpp)

LIST(REMOVE_ITEM SRC R2)

SOURCE_GROUP("" FILES ${SRC})
SOURCE_GROUP("R2" FILES ${R2})

NL_TARGET_LIB(servershare ${SRC} ${R2})

INCLUDE_DIRECTORIES(${MYSQL_INCLUDE_DIR})

TARGET_LINK_LIBRARIES(servershare
						nelmisc
						nelpacs
						nelgeorges
						nelnet
						gameshare
						${MYSQL_LIBRARIES}
						${ZLIB_LIBRARIES})

NL_DEFAULT_PROPS(servershare "Ryzom, Library: Service Shared")
NL_ADD_RUNTIME_FLAGS(servershare)
NL_ADD_LIB_SUFFIX(servershare)

IF(WITH_PCH)
  target_precompile_headers(servershare PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/stdpch.h)
ENDIF()

IF(WITH_INSTALL_LIBRARIES)
  INSTALL(TARGETS servershare LIBRARY DESTINATION ${LIB_PREFIX} ARCHIVE DESTINATION ${LIB_PREFIX} COMPONENT libraries)
ENDIF()
