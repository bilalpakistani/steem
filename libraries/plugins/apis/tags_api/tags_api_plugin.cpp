#include <steemit/plugins/tags_api/tags_api_plugin.hpp>
#include <steemit/plugins/tags_api/tags_api.hpp>


namespace steemit { namespace plugins { namespace tags_api {

tags_api_plugin::tags_api_plugin() : appbase::plugin< tags_api_plugin >( TAGS_API_PLUGIN_NAME ) {}
tags_api_plugin::~tags_api_plugin() {}

void tags_api_plugin::set_program_options( options_description& cli, options_description& cfg ) {}

void tags_api_plugin::plugin_initialize( const variables_map& options )
{
   _api = std::make_shared< tags_api >();
}

void tags_api_plugin::plugin_startup() { _api->api_startup(); }
void tags_api_plugin::plugin_shutdown() {}

} } } // steemit::plugins::tags_api sa