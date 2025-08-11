# Supporting modules and libraries.
# Need servershare for build packed collision tool
# Need aishare for build wmap tool
IF(WITH_RYZOM_TOOLS OR WITH_RYZOM_SERVER)
  ADD_SUBDIRECTORY(server_share)
  ADD_SUBDIRECTORY(ai_share)
ENDIF()

ADD_SUBDIRECTORY(game_share)

IF(WITH_RYZOM_SERVER)

ADD_SUBDIRECTORY(gameplay_module_lib)

ENDIF()
