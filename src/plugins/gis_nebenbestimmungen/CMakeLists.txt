
########################################################
# Files

SET (gisnebenbestimmungen_SRCS
     gisnebenbestimmungen.cpp
     gisnebenbestimmungengui.cpp
)

SET (gisnebenbestimmungen_UIS 
     gisnebenbestimmungenguibase.ui
)

SET (gisnebenbestimmungen_RCCS  gisnebenbestimmungen.qrc)

########################################################
# Build

if (BUILD_WITH_QT6)
  QT6_WRAP_UI(gisnebenbestimmungen_UIS_H ${gisnebenbestimmungen_UIS})
else()
  QT5_WRAP_UI(gisnebenbestimmungen_UIS_H ${gisnebenbestimmungen_UIS})
endif()

ADD_LIBRARY (gisnebenbestimmungenplugin MODULE 
     ${gisnebenbestimmungen_SRCS} 
     ${gisnebenbestimmungen_RCCS} 
     ${gisnebenbestimmungen_UIS_H}
)

# require c++17
target_compile_features(plugin_offlineediting PRIVATE cxx_std_17)

TARGET_LINK_LIBRARIES(gisnebenbestimmungenplugin
  qgis_core
  qgis_gui
)

INCLUDE_DIRECTORIES(
     ${CMAKE_SOURCE_DIR}/src/plugins
   
     ${CMAKE_CURRENT_BINARY_DIR}
)

########################################################
# Install

INSTALL(TARGETS gisnebenbestimmungenplugin
  RUNTIME DESTINATION ${QGIS_PLUGIN_DIR}
  LIBRARY DESTINATION ${QGIS_PLUGIN_DIR}
)

