file(GLOB HEADERS "include/steemit/plugins/market_history_api/*.hpp")
add_library( market_history_api_plugin
             market_history_api_plugin.cpp
             market_history_api.cpp
           )

target_link_libraries( market_history_api_plugin market_history_plugin json_rpc_plugin )
target_include_directories( market_history_api_plugin PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )

install( TARGETS
   market_history_api_plugin

   RUNTIME DESTINATION bin
   LIBRARY DESTINATION lib
   ARCHIVE DESTINATION lib
)
