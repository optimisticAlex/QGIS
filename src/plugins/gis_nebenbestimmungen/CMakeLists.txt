
########################################################
# Files

SET (gisnebenbestimmungen_SRCS
     gisnebenbestimmungen.cpp
     gisnebenbestimmungengui.cpp
)

SET (gisnebenbestimmungen_UIS gisnebenbestimmungenguibase.ui)

SET (gisnebenbestimmungen_MOC_HDRS
     gisnebenbestimmungen.h
     gisnebenbestimmungengui.h
)

SET (gisnebenbestimmungen_RCCS  gisnebenbestimmungen.qrc)

########################################################
# Build

QT5_WRAP_UI (gisnebenbestimmungen_UIS_H  ${gisnebenbestimmungen_UIS})

QT5_WRAP_CPP (gisnebenbestimmungen_MOC_SRCS  ${gisnebenbestimmungen_MOC_HDRS})

QT5_ADD_RESOURCES(gisnebenbestimmungen_RCC_SRCS ${gisnebenbestimmungen_RCCS})

ADD_LIBRARY (gisnebenbestimmungenplugin MODULE ${gisnebenbestimmungen_SRCS} ${gisnebenbestimmungen_MOC_SRCS} ${gisnebenbestimmungen_RCC_SRCS} ${gisnebenbestimmungen_UIS_H})

INCLUDE_DIRECTORIES(
     ${CMAKE_CURRENT_BINARY_DIR}
     ../../core ../../core/geometry ../../core/metadata ../../core/raster
     ../../gui
     ..
)

TARGET_LINK_LIBRARIES(gisnebenbestimmungenplugin
  qgis_core
  qgis_gui
)


########################################################
# Install

INSTALL(TARGETS gisnebenbestimmungenplugin
  RUNTIME DESTINATION ${QGIS_PLUGIN_DIR}
  LIBRARY DESTINATION ${QGIS_PLUGIN_DIR})

